import java.io.*;
import java.util.*;

public class task3 {
    public static void main(String[] args){
        HashMap<String, String> info = new HashMap<>();

        try (Scanner scannerValues = new Scanner(new File(args[0]))) {
            while (scannerValues.hasNextLine()) {
                String str = scannerValues.next();
                if (str.equals("\"id\":")) {
                    String id = scannerValues.next();
                    scannerValues.next();
                    String value = scannerValues.next();
                    info.put(id, value);
                }
            }
        } catch (IOException e) {
            System.out.println(e.getMessage());
        }

        File tests = new File(args[1]);
        String path = tests.getParent();

        try (Scanner scannerTests = new Scanner(tests);
             PrintWriter writeReport = new PrintWriter(new File(path, "report.json"))) {
            while (scannerTests.hasNextLine()) {
                String str = scannerTests.nextLine();
                if (scannerTests.hasNextLine()) {
                    writeReport.println(str);
                } else writeReport.print(str);
                if (str.contains("\"id\":")) {
                    String[] lines = str.split(": ");
                    String id = lines[1];
                    if (info.containsKey(id)) {
                        writeReport.println(scannerTests.nextLine());
                        writeReport.println(scannerTests.nextLine().replace("\"\"", info.get(id)));
                    }
                }
            }
        } catch (IOException e) {
            System.out.println(e.getMessage());
        }
    }
}