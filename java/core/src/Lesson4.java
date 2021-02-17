import java.text.NumberFormat;
import java.util.Locale;
import java.util.Scanner;

public class Lesson4 {
    public static void main(String[] args) {
        double x = 1.1;
        int y = (int) (x+3);

        float p = 1.1F;
        double  q = 1.2;


//        System.out.println(y);

        String age = "12";

        int age1 = Integer.parseInt(age) +1 ;

//        System.out.println(age1);

        double result = Math.ceil(1.9);
//        System.out.println(result);
//
//        System.out.println(NumberFormat.getPercentInstance().format(0.01));
//
//        for (int i =0 ; i < 5 ; i++)
//        {
//            System.out.println("Hello World");;
//        }
        Scanner sc = new Scanner(System.in);

        while (true)
        {
            System.out.print("Input: ");
            String input = sc.nextLine();
            if (input.equals("quit"))
                break;
            if (input.equals("pass"))
                continue;
            System.out.println(input);
        }








    }
}
