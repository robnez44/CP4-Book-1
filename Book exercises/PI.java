import java.math.BigDecimal;
import java.math.RoundingMode;
import java.text.DecimalFormat;
import java.util.Scanner;

public class PI {
    public static void main(String[] args) {

        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();

        BigDecimal pi = new BigDecimal(Math.PI);
        System.out.println(pi.setScale(n, RoundingMode.HALF_UP));

    }
}