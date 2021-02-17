public class Lesson3 {

    public static void main(String[] args) {
        float result = 10.0F / 3.0F;
        System.out.println(result + "\n");

        int x = 1;
        x++;
        x = x + 1;
        ++x;
        System.out.println(x);

        int y = 1;
        int z = ++y;
        ++y;

        System.out.println(y);
        System.out.println(z);

        z /= 2;
        System.out.println(z + "\n");

        int p = (10 + 3) * 2;

        System.out.println(p);
    }
}

