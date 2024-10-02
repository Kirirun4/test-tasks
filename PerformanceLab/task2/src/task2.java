import java.io.*;
import java.util.*;

public class task2 {

    public static void main(String[] args) {

        Map<String, Double> circle = getCenter(args[0]);

        List<double[]> points = getPoints(args[1]);

        List<Integer> positionList = createPositions(circle, points);

        positionList.forEach(System.out::println);
    }

    private static Map<String, Double> getCenter(String centerCircle) {

        Map<String, Double> center = new LinkedHashMap<>();

        try (BufferedReader centerFile = new BufferedReader(new FileReader(centerCircle))) {
            String[] line = centerFile.readLine().split(" ");
            center.put("x", Double.parseDouble(line[0]));
            center.put("y", Double.parseDouble(line[1]));
            center.put("r2", Math.pow(Double.parseDouble(centerFile.readLine()), 2));

        } catch (IOException ex) {
            throw new RuntimeException(ex);
        }
        return center;
    }

    private static List<double[]> getPoints(String pointsCircle) {

        List<double[]> points = new LinkedList<>();

        try (BufferedReader pointsFile = new BufferedReader(new FileReader(pointsCircle))) {

            String line;
            while ((line = pointsFile.readLine()) != null) {
                double[] point = new double[]{
                        Double.parseDouble(line.split(" ")[0]),
                        Double.parseDouble(line.split(" ")[1])
                };
                points.add(point);
            }
        } catch (IOException ex) {
            throw new RuntimeException(ex);
        }
        return points;
    }

    private static List<Integer> createPositions(Map<String, Double> circle, List<double[]> points) {

        List<Integer> positionList = new LinkedList<>();

        for (double[] point : points) {

            double diff = Math.pow(point[0] - circle.get("x"), 2) +
                    Math.pow(point[1] - circle.get("y"), 2) -
                    circle.get("r2");

            if (diff > 0) positionList.add(2);
            else if (diff == 0) positionList.add(0);
            else positionList.add(1);
        }
        return positionList;
    }
}