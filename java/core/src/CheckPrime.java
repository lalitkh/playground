import java.util.Scanner;

public class CheckPrime {

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);

        int n = scan.nextInt();
        boolean flag = true;


        if (n == 1 || n == 0) {
            flag = false;
        }
        else
            for (int i = 2; i < n; i++) {
                if ( n % i == 0) {
                    flag = false;
                    break;
                }
            }
            if (!flag)
                System.out.println("Not Prime");
            else
                System.out.println("Prime");

    }
}
