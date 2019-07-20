/*
 * Sai Cheemalapati
 * UVa 623: 500!
 *
 */

import java.math.BigInteger;
import java.util.Scanner;

class Main {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        while(in.hasNext()) {
            int n = in.nextInt();
            BigInteger fact = BigInteger.ONE;
            for(int i = 1; i <= n; i++) {
                fact = fact.multiply(BigInteger.valueOf(i));
            }
            System.out.printf("%d!\n", n);
            System.out.println(fact.toString());
        }
    }
}
