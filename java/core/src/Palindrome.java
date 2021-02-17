import java.io.*;
import java.util.*;

public class Palindrome {

    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        /* Enter your code here. Print output to STDOUT. */

        boolean isPalindrome = false;

        int length = A.length();
        int n =0;

        if ( length % 2 == 0)
            n = length/2;
        else n = (length-1)/2;

        for ( int i =0 ; i<n; i++){
            isPalindrome = A.charAt(0) == (A.charAt(length - 1));
            if (!isPalindrome)
                break;

        }

        if (A.length() == 1)
            isPalindrome = true;

        if (isPalindrome)
            System.out.println("Yes");
        else
            System.out.println("No");


    }
}
