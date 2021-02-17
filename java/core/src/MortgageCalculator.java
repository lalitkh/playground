import java.text.NumberFormat;
import java.util.Scanner;

public class MortgageCalculator {
    public static void main(String[] args) {

        float principal = 0;
        float apr = 0;
        byte years = 0;

        principal = (float) readNumbers("Principal:", 1000, 1000000);
        apr = (float) readNumbers("APR:", 1, 30);
        years = (byte) readNumbers("Terms(in Years:", 1, 30);

        double mortgage = calculateMortgage(principal, apr, years);

        System.out.print("Mortgage :" + NumberFormat.getCurrencyInstance().format(mortgage));
    }

    public static double readNumbers(String prompt, double min, double max) {
        Scanner scan = new Scanner(System.in);
        double value;
        while (true) {
            System.out.print(prompt);
            value = scan.nextFloat();

            if (value >= min && value <= max) {
                break;
            }
            System.out.println("Please enter a value between " + min + " & " + max);
        }
        return value;

    }

    public static double calculateMortgage(float principal, float apr, byte years) {
        final byte MONTHS_IN_YEAR = 12;
        final byte PERCENT = 100;

        float monthly_apr = apr / MONTHS_IN_YEAR / PERCENT;
        short months = (short) (years * MONTHS_IN_YEAR);

        return principal * monthly_apr * Math.pow(1 + monthly_apr, months)
                / (Math.pow(1 + monthly_apr, months) - 1);
    }
}
