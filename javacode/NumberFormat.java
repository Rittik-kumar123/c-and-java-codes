class NumberFormat
{
    public static void main(String args[])
    {
        String str="Rittik";
        try
        {
            int a=Integer.parseInt(str);
            System.out.println(a);
            System.out.println("NumberFormatException Occur");
        }
        catch(NumberFormatException n)
        {
            System.out.println("String"+str+"can't be converted to integer");
        }
    }
}