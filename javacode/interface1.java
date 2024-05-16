interface A
{
    void add();
}
interface B extends A
{
    void multiply();
}
class calc implements B
{
    // @Override
    public void add()
    {
        int a=10,b=20;
        System.out.println("Sum is"+(a+b));
    }
    @Override
    public void multiply()
    {
        int a=10,b=20;
        System.out.println("Sum is"+(a*b));
    }
}

class interface1
{
    public static void main(String args[])
    {
        B c=new calc();
        c.add();
        c.multiply();
    }
}


