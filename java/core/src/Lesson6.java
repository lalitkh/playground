import java.util.Scanner;

public class Lesson6 {
    public static void main(String[] args) {
        int income = 120_000;
        boolean hasHighIncome = (income > 100_000);
        System.out.println(hasHighIncome);

        String className = income > 100_000 ? "First" :"Economy";
        System.out.println(className);

        Scanner scan = new Scanner(System.in);
        String role = scan.nextLine();

        switch (role){

            case "admin":
                System.out.println("ADMIN");
                break;
            case "moderator":
                System.out.println("MODERATOR");
                break;
            default:
                System.out.println("GUEST");

        }

        String a = "hello";
         a = "world";
    }
}

