/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        while (in.hasNext()) {
            int N = in.nextInt();
            int A = in.nextInt();
            BigInteger ans = BigInteger.ZERO;
            ArrayList<BigInteger> powers = new ArrayList<BigInteger>(N);
            powers.add(BigInteger.ONE);

            for (int i = 1; i <= N; i++) {
                BigInteger S_i = powers.get(i - 1).multiply(new BigInteger("" + A));
                powers.add(S_i);
                ans = ans.add(S_i.multiply(new BigInteger(i + "")));
            }

            System.out.println(ans);
        }
    }
}
