import java.util.*;
class fact
{
	
	int fact1(int n){
	int sum=1;
	for(int i=1;i<=n;i++)
	{ sum=sum*i; }
	return sum;
	}
}
	
class series
{
	public static void main(String args[])
	{
		Scanner sc= new Scanner(System.in);
		System.out.printf("Enter the number: ");
		int n=sc.nextInt();
		fact x = new fact();
		System.out.printf("The given series is: \n");
		for(int i=1;i<n;i++)
		{ System.out.printf("%d/%d +\t",i,x.fact1(i));}
		System.out.printf("%d/%d\t",n,x.fact1(n));
	}
}
		
		