import javax.swing.*;
import java.awt.*;
import java.util.Date;

public class Lesson1 {
    public static void main(String[] args) {
        byte age = 31;
        short population = 32_100;
        long viewsCount = 3_123_456_789L;
        float price = 10.99F;
        char symbol = 'A';
        boolean isEligible = true;
        byte x = 1;
        x = 2;
        Point p1 = new Point(1, 1);
        p1.x = 2;
        Date dob = new Date();
        String name = "Lalit";
        String message = "Hello \"World";
        String dir = "C:\tWindows";

        System.out.println(dir);

        System.out.println(message);
        System.out.println(p1.x);
        System.out.println(x);
        System.out.println(dob);
        System.out.println(age);
        System.out.println(population);
        System.out.println(viewsCount);
        System.out.println(price);
        System.out.println(symbol);
        System.out.println(isEligible);
        System.out.println(name);

        int a = 25;
        int b = 30;
        System.out.println(a==b);
        System.out.println(a!=b);
        System.out.println(a<=b);
        System.out.println(a>=b);
        System.out.println(a>b);
        System.out.println(a<b);

        System.out.println(a>15 || a<25);

    }
}
