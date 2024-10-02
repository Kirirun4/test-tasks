import java.io.*;
import java.util.*;

public class task4 {
    public static void main(String[] args) {
        ArrayList<Integer> array = new ArrayList<>();

        try (Scanner scanner = new Scanner(new File(args[0]))) {
            while (scanner.hasNext()) {
                array.add(scanner.nextInt());
            }
        } catch (IOException e) {
            System.out.println(e.getMessage());
        }

        int size = array.size();
        if (size < 2)
            throw new IllegalArgumentException("array's size < 2");

        Collections.sort(array);
        int middle = array.get(size / 2);
        int sum = 0;
        for (int a : array) {
            sum += Math.abs(a - middle);
        }
        System.out.println(sum);
    }
}