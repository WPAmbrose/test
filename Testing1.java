public class Testing1
{
	public static void main (String[] args)
	{
		String a = "Good evening, universe.";
		int b;
		
		System.out.print(a + "\n\n");
		
		for (b = 0; b <= 10; b++)
		{
			System.out.println(b);
		}
		
		a = System.console().readLine();
		
		System.out.println(a);
	}
}