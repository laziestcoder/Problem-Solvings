/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/


import java.math.BigInteger;
import java.util.Scanner;

class Main {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        for (int i = 0; i < N; i++) {
            String a = new StringBuilder(scanner.next()).reverse().toString();
            String b = new StringBuilder(scanner.next()).reverse().toString();
            String c = new StringBuilder((new BigInteger(a).add(new BigInteger(b))).toString()).reverse().toString();

            int offset = 0;
            for (int j = 0; j < c.length() - 1; j++)
                if(c.charAt(j) == '0') offset++;
                else break;

            System.out.println(c.substring(offset));
        }
    }
}
