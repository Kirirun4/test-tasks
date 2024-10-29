import java.io.*;
import java.text.DecimalFormat;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        // Указываем путь к папке с файлами
        File folder = new File(/*args[0]*/"content/grades");

        // Получаем список всех txt-файлов в папке
        File[] files = folder.listFiles((dir, name) -> name.endsWith(".txt"));

        if (files == null || files.length == 0) {
            System.err.println("Нет файлов в указанной директории.");
            return;
        }

        // Для хранения информации о студентах и их оценках
        Map<String, Map<String, Double>> students = new HashMap<>();
        // Для хранения средних оценок по предметам
        Map<String, Double> avgGrades = new HashMap<>();

        // Перебираем все файлы
        for (File file : files) {
            String fullName = file.getName().replaceAll("\\.txt$", ""); // Имя студента без расширения ".txt"
            Map<String, Double> grades = new HashMap<>(); // Для хранения оценок студента по предметам

            try (BufferedReader reader = new BufferedReader(new FileReader(file))) {
                String line;
                while ((line = reader.readLine()) != null) {
                    String[] parts = line.split(" - "); // Разделяем строку на предмет и оценку
                    grades.put(parts[0], Double.parseDouble(parts[1])); // Добавляем предмет и оценку в карту
                }
            } catch (IOException e) {
                System.err.println("Ошибка при чтении файла: " + file.getName()); // Обрабатываем исключение
                continue;
            }

            students.put(fullName, grades); // Добавляем информацию о студенте

            // Вычисляем средние оценки по предметам
            for (Map.Entry<String, Double> entry : grades.entrySet()) {
                String subject = entry.getKey(); // Предмет
                double grade = entry.getValue(); // Оценка по предмету

                if (!avgGrades.containsKey(subject)) { // Если предмета еще нет в карте средних оценок
                    avgGrades.put(subject, 0.0); // Добавляем его с нулевой средней оценкой
                }
                avgGrades.put(subject, avgGrades.get(subject) + grade / files.length); // Обновляем среднюю оценку
            }
        }

        // Форматируем числа до двух знаков после запятой
        DecimalFormat df = new DecimalFormat("#.00");

        // Формируем отчет
        StringBuilder report = new StringBuilder();
        for (Map.Entry<String, Double> entry : avgGrades.entrySet()) {
            report.append(entry.getKey()).append(" - ").append(df.format(entry.getValue())).append("\n");
        }

        // Сортируем студентов по средним оценкам
        List<Map.Entry<String, Map<String, Double>>> sortedEntries = new ArrayList<>(students.entrySet());
        sortedEntries.sort((o1, o2) -> {
            double avg1 = getAvgGrade(o1.getValue());
            double avg2 = getAvgGrade(o2.getValue());
            return Double.compare(avg1, avg2);
        });

        // Находим лучших и худших студентов
        double bestAvgGrade = getAvgGrade(sortedEntries.get(0).getValue());
        double worstAvgGrade = getAvgGrade(sortedEntries.get(sortedEntries.size() - 1).getValue());

        List<String> bestStudents = new ArrayList<>();
        List<String> worstStudents = new ArrayList<>();

        for (Map.Entry<String, Map<String, Double>> entry : sortedEntries) {
            double avgGrade = getAvgGrade(entry.getValue());
            if (avgGrade == bestAvgGrade) {
                bestStudents.add(entry.getKey());
            }
            if (avgGrade == worstAvgGrade) {
                worstStudents.add(entry.getKey());
            }
        }

        // Добавляем информацию о лучших и худших студентах в отчет
        report.append("\nЛучшие ученики:\n");
        for (String student : bestStudents) {
            report.append(student).append(" (средний балл: ").append(df.format(bestAvgGrade)).append(")\n");
        }

        report.append("\nХудшие ученики:\n");
        for (String student : worstStudents) {
            report.append(student).append(" (средний балл: ").append(df.format(worstAvgGrade)).append(")\n");
        }

        report.append("\nКоличество учеников: ").append(files.length).append("\n");

        // Выводим отчет на экран
        System.out.println(report);

        // Сохраняем отчет в файл
        try (PrintWriter writer = new PrintWriter("content/отчет.txt")) {
            writer.print(report);
        } catch (FileNotFoundException e) {
            System.err.println("Не удалось создать файл отчета.");
        }
    }

    // Функция для расчета среднего балла студента
    private static double getAvgGrade(Map<String, Double> grades) {
        double sum = 0;
        for (Double grade : grades.values()) {
            sum += grade;
        }
        return sum / grades.size();
    }
}