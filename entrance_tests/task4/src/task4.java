import java.io.*;
import java.util.*;

public class task4 {
    public static void main(String[] args) {
        String file = args[0];
        try {
            int[] numbers;
            FileReader fileReader = new FileReader(file);
            BufferedReader reader = new BufferedReader(fileReader);
            numbers = reader
                    .lines()
                    .mapToInt(Integer::parseInt)
                    .toArray();
            Arrays.sort(numbers);
            int middle = numbers[numbers.length / 2];
            int moves = 0;
            for (int number : numbers) {
                moves += Math.abs(number - middle);
            }
            System.out.println(moves);
        } catch (FileNotFoundException e) {
            System.out.println("Parsing error " + e);
        }
    }
}