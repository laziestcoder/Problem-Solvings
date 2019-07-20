import java.math.BigInteger;
import java.util.Scanner;

 class Main {
    public static void main(String[] args) {
       Scanner in=new Scanner (System.in);
       while(in.hasNext())
       {
           int a=in.nextInt();
           BigInteger b=BigInteger.ONE;
           for(long i=1;i<=a;i++)
           {
              b=b.multiply(BigInteger.valueOf(i));
           }
           System.out.println(a+"!");
           System.out.println(b);
       }
    }

}
