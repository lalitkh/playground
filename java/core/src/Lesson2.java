
import java.lang.reflect.Array;
import java.util.Arrays;

public class Lesson2 {

    public static void main(String[] args) {
        int[] nums = new int[5] ;
        System.out.println(Arrays.toString(nums));
        int[] numbers = {9,3,5,1,8};
        Arrays.sort(numbers);
        System.out.println(Arrays.toString(numbers));

        System.out.println();

        int[][] matrix = {{1,2,3},{2,5}};

        System.out.println(Arrays.deepToString(matrix));

        final float pi = 3.14F;

        System.out.println(pi);

        for (int number : numbers) {
            System.out.println(number);
        }


        String[] fruits = {"Mango", "Apple", "Orange"};
        for (String fruit:fruits) {
            System.out.println(fruit);
        }


    }

}
