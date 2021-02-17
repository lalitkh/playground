import java.util.Scanner;

public class TestClass{
    public static void main(String[] args) throws Exception {

        Scanner s = new Scanner(System.in);

        int t = s.nextInt();

        for (int i = 0; i < t; i++) {
            long n = Long.parseLong(s.next());

            double v = Math.log(3 * n + 1) / Math.log(2);
            double v1 = Math.log(n) / Math.log(2);
            if (((long)(Math.ceil(v1))
                    == (long)(Math.floor(v1)))
                    || (((long)(Math.ceil(v))
                    == (long)(Math.floor(v))))){
                System.out.println("Yes");
            }
            else
                System.out.println("No");
        }

    }
}