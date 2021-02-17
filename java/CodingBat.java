public class CodingBat {
    public boolean sleepIn(boolean weekday, boolean vacation) {
        return !weekday || vacation;
    }

    public boolean monkeyTrouble(boolean aSmile, boolean bSmile) {
        return (!aSmile && !bSmile) || (aSmile && bSmile);
    }

    public int sumDouble(int a, int b) {
        return a == b ? 2 * (a + b) : (a + b);
    }

    public int diff21(int n) {
        return n <= 21 ? Math.abs(n - 21) : 2 * (Math.abs(n - 21));
    }

    public boolean parrotTrouble(boolean talking, int hour) {
        return (talking && (hour < 7 || hour > 20));
    }

    public boolean makes10(int a, int b) {
        return (a + b) == 10 || a == 10 || b == 10;
    }

    public boolean nearHundred(int n) {
        return Math.abs(n - 100) <= 10 || Math.abs(n - 200) <= 10;
    }

    public boolean posNeg(int a, int b, boolean negative) {
        if (negative)
            return a < 0 && b < 0;
        else
            return (a > 0 && b < 0) || (a < 0 && b > 0);
    }

    public String notString(String str) {
        if (str.length() >= 3 && str.substring(0, 3).equals("not")) {
            return str;
        }
        return "not " + str;
    }

    public boolean lastDigit(int a, int b) {
        return (a % 10 == b % 10);
    }

    public String frontBack(String str) {
        if (str.length() <= 1) return str;

        String mid = str.substring(1, str.length() - 1);
        return str.charAt(str.length() - 1) + mid + str.charAt(0);
    }

    public String missingChar(String str, int n) {
        return str.substring(0, n) + str.substring(n + 1, str.length());
    }

    public String front3(String str) {
        String front;
        if (str.length() < 3)
            front = str;
        else
            front = str.substring(0, 4);
        return front + front + front;
    }

    public String backAround(String str) {
        String lastChar = str.substring(str.length() - 1);
        return lastChar + str + lastChar;
    }

    public boolean or35(int n) {
        return (n % 3 == 0 || n % 5 == 0);
    }

    public String front22(String str) {
        String front;
        if (str.length() < 2)
            front = str;
        else
            front = str.substring(0, 2);
        return front + str + front;
    }

    public boolean startHi(String str) {
        return str.startsWith("hi");
    }

    public boolean icyHot(int temp1, int temp2) {
        return (temp1 < 0 && temp2 > 100) || (temp2 < 0 && temp1 > 100);
    }

    public boolean in1020(int a, int b) {
        return (a >= 10 && a <= 20) || (b >= 10 && b <= 20);
    }

    public boolean hasTeen(int a, int b, int c) {
        return (a >= 13 && a <= 19) || (b >= 13 && b <= 19) || (c >= 13 && c <= 19);
    }

    public boolean loneTeen(int a, int b) {
        boolean aTeen = (a >= 13 && a <= 19);
        boolean bTeen = (b >= 13 && b <= 19);

        return (aTeen && !bTeen) || (!aTeen && bTeen);
    }

    public String delDel(String str) {
        if (str.length() >= 4)
            if (str.substring(1, 4).equals("del"))
                return str.substring(0, 1) + str.substring(4, str.length());

        return str;
    }

    public boolean mixStart(String str) {
        return (str.length() >= 3) && str.substring(1, 3).equals("ix");
    }

    public String startOz(String str) {
        if (str.length() >= 2)
            if (str.substring(0,1).equals("o") && str.substring(1,2).equals("z"))
                return "oz";
            else if (str.substring(0,1).equals("o"))
                return "o";
            else if (str.substring(1,2).equals("z"))
                return "z";
        return str;
    }
    public int intMax(int a, int b, int c) {
        int max = 0  ;
        if ( a > b)
            max = a;

        if ( b > a)
            max = b;

        if (max > c )
            return max;
        else
            return c;

    }

    public int close10(int a, int b) {
        if ( Math.abs(10-a) < Math.abs(10-b))
            return a;
        else if ( Math.abs(10-a) > Math.abs(10-b))
            return b;
        else
            return 0;
    }

    public boolean in3050(int a, int b) {
        return ((a >= 30 && a <= 40) && (b >= 30 && b <= 40)) || ((a >= 40 && a <= 50) && (b >= 40 && b <= 50));
    }

    public int max1020(int a, int b) {
    if ( (a < 10 || a > 20) && (b < 10 || b > 20 ))
        return 0;
    else if ( a > b )
        return a;
    else
        return b;
    }

    public boolean stringE(String str) {
        int count = 0;

        for (int i=0; i<str.length(); i++) {
            if (str.charAt(i) == 'e')
                count++;
        }
        return (count >= 1 && count <= 3);
    }

    public String endUp(String str) {
        if ( str.length() < 3 )
            return str.toUpperCase();
        else
            return str.substring(0,str.length()-3)+str.substring(str.length()-3).toUpperCase();

    }
    public String everyNth(String str, int n) {
        String result = "";

        // Look at every nth char
        for (int i=0; i<str.length(); i = i + n) {
            result = result + str.charAt(i);
        }
        return result;
    }

    // Warmup-2

    public String stringTimes(String str, int n) {
        String finalString = "";
        for (int i=1 ;i < n ; i++)
            finalString = finalString + str;
        return finalString;
    }




}
