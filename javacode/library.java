import java.util.*;

class student
{
    int max_book=5;
    int max_days=10;
    void withdraw(String[] Book_name,int[] Book_num,int size,String name,int numb)
    {
        int count=0;
        int k=0;
        for(int i=0;i<size;i++)
        {
            if(Book_name[i].equals(name))
            {
                count=1;
                k=i;
                // System.out.println("the book which we want is " + book);
            }
        }
        if(numb<=max_book)
        {
            if(count==1)
            {
                Book_num[k] -= numb;
                System.out.println("You have taken this " + Book_name[k] + " Number of book u get is " + numb);
                System.out.println("Remaining books in library are " + Book_num[k]);
            }
            else
            {
                System.out.println("Book is not present in the library.please come after some days.");  
            }
        }
        else
        {
            System.out.println("You can only get maximum 5 books. please enter less than 5 books only.");
        }
    }
    void deposit(String[] Book_name,int[] Book_num,int size,String name,int numb,int DOW,int DOD,int student_fine)
    {
        int count=0;
        int k=0;
        for(int i=0;i<size;i++)
        {
            if(Book_name[i].equals(name))
            {
                count=1;
                k=i;
            }
        }
        if(count==1)
        {
            if((DOD-DOW) <= max_days)
            {
                System.out.println("You are depositing this " + Book_name[k] + " Number of book u deposit is " + numb);
                Book_num[k] += numb;
            }
            else
            {
                int t=DOD-DOW;
                student_fine=(t-max_days)*100;
                System.out.println("You have to pay the " + student_fine + " fine because of late deposit.");
                Book_num[k] += numb;
                System.out.println("Remaining books in library are " + Book_num[k]);
            }
        }
        else
        {
            System.out.println("You haven't take this book from here.");
        }
    }
}

class teacher
{
    int max_book=10;
    int max_month=6;
    void withdraw(String[] Book_name,int[] Book_num,int size,String name,int numb)
    {
        int count=0;
        int k=0;
        for(int i=0;i<size;i++)
        {
            if(Book_name[i].equals(name))
            {
                count=1;
                k=i;
                // System.out.println("the book which we want is " + book);
            }
        }
        if(numb<=max_book)
        {
            if(count==1)
            {
                Book_num[k] -= numb;
                System.out.println("You have taken this " + Book_name[k] + " Number of book u get is " + numb);
                System.out.println("Remaining books in library are " + Book_num[k]);
            }
            else
            {
                System.out.println("Book is not present in the library.please come after some days.");  
            }
        }
        else
        {
            System.out.println("You can only get maximum 5 books. please enter less than 5 books only.");
        }
    }
    void deposit(String[] Book_name,int[] Book_num,int size,String name,int numb,int DOW,int DOD,int teacher_fine)
    {
        int count=0;
        int k=0;
        for(int i=0;i<size;i++)
        {
            if(Book_name[i].equals(name))
            {
                count=1;
                k=i;
            }
        }
        if(count==1)
        {
            if((DOD-DOW) <= max_month)
            {
                System.out.println("You are depositing this " + Book_name[k] + " Number of book u deposit is " + numb);
            }
            else
            {
                int t=DOD-DOW;
                teacher_fine=(t-max_month)*100;
                System.out.println("You have to pay the " + teacher_fine + " fine because of late deposit.");
                Book_num[k] += numb;
                System.out.println("Remaining books in library are " + Book_num[k]);
            }
        }
        else
        {
            System.out.println("You haven't take this book from here.");
        }
    }
}

class library
{
	public static void main(String[] args) 
    {
	    Scanner sc=new Scanner(System.in);
		int size,x,n=0;
        int numb,DOW,DOD;
        int student_fine=0;
        int teacher_fine=0;
        String name="";
		System.out.print("Enter The Number of different books library has: ");
		size=sc.nextInt();
		String[] Book_name=new String[size];
		int[] Book_num=new int[size];
		//int[] fine=new int[10];
		for(int i=0;i<size;i++)
		{
		    Book_name[i]=sc.next();
		}
		for(int i=0;i<size;i++)
		{
		    Book_num[i]=5;
		}
		System.out.println("Enter 1 for Student,2 for teacher.\n");
        x=sc.nextInt();
        if(x==1)
        {
            student s=new student();
            while(n!=3)
            {
                System.out.println("Enter 1.for Withdrawl.\n2. for Deposit.\n3.Exit");
                n=sc.nextInt();
                switch(n)
                {
                    case 1:
                            System.out.println("Enter the name of the book u want.\n");
                            name=sc.next();
                            System.out.println("Enter the number of books u want.\n");
                            numb=sc.nextInt();
                            s.withdraw(Book_name,Book_num,size,name,numb);
                            break;
                    case 2:
                            System.out.println("Enter the name of the book u want to deposit.");
                            name=sc.next();
                            System.out.println("Enter the number of books u want to deposit.");
                            numb=sc.nextInt();
                            System.out.println("Enter the date of withdrawl.");
                            DOW=sc.nextInt();
                            System.out.println("Enter the date of deposite.");
                            DOD=sc.nextInt();
                            s.deposit(Book_name,Book_num,size,name,numb,DOW,DOD,student_fine);
                        break;
                    default:
                            System.out.println("Please Enter between 1 to 2.");
                            break;
                }
            }
        }
        else
        {
            teacher t=new teacher();
            while(n!=3)
            {
                System.out.println("Enter 1.for Withdraw.\n2. for Deposit.\n3.Exit");
                n=sc.nextInt();
                switch(n)
                {
                    case 1:
                            System.out.println("Enter the name of the book u want.\n");
                            name=sc.next();
                            System.out.println("Enter the number of books u want.\n");
                            numb=sc.nextInt();
                            t.withdraw(Book_name,Book_num,size,name,numb);
                            break;
                    case 2:
                            System.out.println("Enter the name of the book u want to deposit.");
                            name=sc.next();
                            System.out.println("Enter the number of books u want to deposit.");
                            numb=sc.nextInt();
                            System.out.println("Enter the month of withdrawl.");
                            DOW=sc.nextInt();
                            System.out.println("Enter the month of deposite.");
                            DOD=sc.nextInt();
                            t.deposit(Book_name,Book_num,size,name,numb,DOW,DOD,teacher_fine);
                        break;
                    default:
                            System.out.println("Please Enter between 1 to 2.");
                            break;
                }
            }
        }
	}
}