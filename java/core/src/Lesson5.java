import java.util.Scanner;

public class Lesson5 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.print("Enter the temperature:");

        int temperature = scan.nextInt();

        if (temperature > 30) {
            System.out.println("Hot Day");
        }
        else if (temperature < 30)
            System.out.println("Pleasant Day");
    }
}
