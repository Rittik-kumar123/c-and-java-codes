import java.util.*;
class exception1
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int a,b;
        int c;
        System.out.println("Enter the value of a: ");
        a=sc.nextInt();
        System.out.println("Enter the value of b: ");
        b=sc.nextInt();
        try{
            c=a/b;
            System.out.println(c);
        }
        catch(Exception e)
        {
            System.out.println(e); 
        }
    }
}