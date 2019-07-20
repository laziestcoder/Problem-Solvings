import java.util.Scanner;
import java.math.BigInteger;
/**
 *
 * @author Tafhim
 */
public class Main {

    public static void main(String[] args) {
        BigInteger[] fibs = new BigInteger[5004];
        fibs[0] = BigInteger.ZERO;
        fibs[1] = BigInteger.ONE;
        for (int i=2 ; i&lt;=5000 ; i++)
        {
            fibs[i] = fibs[i-1].add(fibs[i-2]);
        }
        Scanner input = new Scanner(System.in);

        int q;

        while (input.hasNext())
        {
            q = input.nextInt();
            System.out.printf(&quot;The Fibonacci number for %d is %d\n&quot;,q,fibs[q]);

        }
    }
}
