class A 
{
    void add(int ... a)//var args method
    {
        int sum=0;
        for(int x : a)
        {
            sum=sum+x;
        }
        System.out.println(sum);
    }
}
/**
 * var_args
 */
public class var_args {
    public static void main(String args[])
    {
        A sum=new A();
        sum.add();
        sum.add(10,20);
        sum.add(10,20,30);
    }
}