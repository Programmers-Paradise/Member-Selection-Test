import java.math.BigInteger;

public class FactorialDigitSum {
    public static void main(String[] args) {
        int n = 100;
        BigInteger factorial = factorial(n);
        int digitSum = sumOfDigits(factorial);

        System.out.println("Factorial of " + n + ": " + factorial);
        System.out.println("Sum of digits: " + digitSum);
    }


    public static BigInteger factorial(int n) {
        BigInteger result = BigInteger.ONE;
        for (int i = 2; i <= n; i++) {
            result = result.multiply(BigInteger.valueOf(i));
        }
        return result;
    }


    public static int sumOfDigits(BigInteger num) {
        String digits = num.toString();
        int sum = 0;
        for (int i = 0; i < digits.length(); i++) {
            sum += digits.charAt(i) - '0';
        }
        return sum;
    }
}
