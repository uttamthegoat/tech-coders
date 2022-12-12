import java.util.Scanner;

class Details
{
	long phone_number;
	int salary;
	String name;
	String ID;
	void getData()
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the name");
		name=sc.nextLine();
		System.out.println("Enter the ID");
		ID=sc.nextLine();
		System.out.println("Enter the salary");
		salary=sc.nextInt();
		System.out.println("Enter the phone number");
		phone_number=sc.nextInt();
	}
	
	void writeData()
	{
		System.out.println("Name: "+name);
		System.out.println("ID: "+ID);
		System.out.println("Salary: Rs."+salary);
		System.out.println("Phone Number: +91"+phone_number);
		
	}
}

class Teach extends Details
{	
	String domain,pub;
	void getTeach()
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Domain");
		domain=sc.nextLine();
		System.out.println("Publications");
		pub=sc.nextLine();
	}
	
	void writeTeach()
	{
		System.out.println("Domain: "+domain);
		System.out.println("Publications: "+pub);
	}
}

class Tech extends Details
{	
	String skills;
	void getTech()
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Skills");
		skills=sc.nextLine();
	}
	
	void writeTech()
	{
		System.out.println("Skills: "+skills);
	}
}

class Contractor extends Details
{	
	String period;
	void getCont()
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Period");
		period=sc.nextLine();
	}
	
	void writeCont()
	{
		System.out.println("Period: "+period);
	}
}

class Program
{
	public static void main(String args[])
	{
		int n,i;
		Scanner sc=new Scanner(System.in);
		
		Teach tea[]=new Teach[10];
		Tech tech[]=new Tech[10];
		Contractor cont[]=new Contractor[10];
		System.out.println("Enter the number of Teaching staff");
		n=sc.nextInt();
		for(i=0;i<n;i++)
		{
			tea[i]=new Teach();
			tea[i].getData();
			tea[i].getTeach();
			tea[i].writeData();
			tea[i].writeTeach();
		}
		System.out.println("Enter the number of Technical staff");
		n=sc.nextInt();
		for(i=0;i<n;i++)
		{
			tech[i]=new Tech();
			tea[i].getData();
			tech[i].getTech();
			tea[i].writeData();
			tech[i].writeTech();
		}
		System.out.println("Enter the number of Contractor staff");
		n=sc.nextInt();
		for(i=0;i<n;i++)
		{
			cont[i]=new Contractor();
			tea[i].getData();
			cont[i].getCont();
			tea[i].writeData();
			cont[i].writeCont();
		}	
	}
}

