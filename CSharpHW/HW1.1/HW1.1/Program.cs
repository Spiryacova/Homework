using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;
//using System.Threading.Tasks;

namespace HW1_1
{
	class Program
	{
		static int Factorial(int n)
		{
			if (n <= 1)
			{
				return 1;
			}
			else
			{
				int factorial = 1;
				for (int i = 1; i <= n; i++)
				{
					factorial *= i;
				}
				return factorial;
			}
		}
		static void Main()
		{
			int number;
			Console.WriteLine("Enter number to calculate factorial");
			number = int.Parse(Console.ReadLine());
			Console.WriteLine("Factorial of number "+ number + " is " + Factorial(number));
		}
	}
}
