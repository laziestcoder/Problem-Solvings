/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

//package uvaproblem_10023;
import java.io.*;
import java.math.BigInteger;

/**
 *
 * @author user
 */
public class Main {


    public static void main(String[] args) /*throws NumberFormatException,IOException*/  {
      try
       {
         BufferedReader stdin= new BufferedReader(new InputStreamReader(System.in));
         String s_1=stdin.readLine();
         int n=Integer.parseInt(s_1);


         boolean  f=false;
         for(int i=0;i<n;i++)
         {
            if(f)System.out.println();
            f=true;
            stdin.readLine();//for blank line
            String    s_2=stdin.readLine();
            BigInteger x=new BigInteger(s_2);
            BigInteger x_0,x_1=x,div=new BigInteger("2");
            do
            {
                x_0=x_1;
                x_1=x_0.add(x.divide(x_0)).divide(div);

            }while(x_0.compareTo(x_1)!=0);
            System.out.println(x_1);


            /* BigInteger lo=BigInteger.ZERO,hi=x,mid;
            while(lo.compareTo(hi)<0)
            {
               mid=(lo.add(hi)).divide(new BigInteger("2"));
               BigInteger res=mid.pow(2);
               if(res.compareTo(x)<0) lo=mid.add(new BigInteger("1"));
               else hi=mid;

            }
            mid=(lo.add(hi)).divide(new BigInteger("2"));
            //System.out.println(lo+" "+mid+" "+hi+" "+mid.pow(2));
            System.out.println(mid);*/

         }

       }catch (NumberFormatException e){}
       catch(IOException e){}
    }

}
