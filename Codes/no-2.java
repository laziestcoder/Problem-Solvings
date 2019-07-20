package javaapplication4;
import java.lang.Exception;

class MyException extends Exception
{
    MyException(String message)
    {
        super(message);
            }
    
}

public class JavaApplication4 {

    public static void main(String[] args) {
        int x=5,y=1000;
        
        try{
        
            float z =(float)x/(float)y;
            
            if(z<0.01)
            {
                throw new MyException("Number is too small");
            }
          
        }
        catch(MyException e)
        {
            System.out.println("caught my exception");
            System.out.println(e.getMessage());
         }
        finally
        {
                System.out.println("My code works");
         }
     }
}
