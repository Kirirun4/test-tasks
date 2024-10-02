public class task1 {
    public static void main(String[] args) {
        System.out.print("Enter 2 positive integers separated by a space: ");
        int n = 0; int m =0;
        while (n < 1 || m < 1) {
            try {
                n = Integer.parseInt(args[0]);
                m = Integer.parseInt(args[1]);
                if (n < 1 || m < 1) {
                    System.out.println("Incorrect input. Try again");
                }
            } catch (ArrayIndexOutOfBoundsException | NumberFormatException e) {
                System.out.println("Incorrect input. Try again");
            }
        }

        StringBuilder result = new StringBuilder("1");

        for (int i = 1; i < n; i++) {

            int x = (m - 1) * i;
            int y = (x + 1) % n;
            y = (y == 0) ? n : y;

            if (y == 1) break;

            result.append(y);
        }
        System.out.print("Resulting way: " + result);
    }
}