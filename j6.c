import java.util.Scanner;
 class Factorial
{
    private int n;

    public void input() {
        Scanner in = new Scanner(System.in);
System.out.print("Enter the number: ");
        n = in.nextInt();
    }

    public void fact() {
        int f = 1;
        for (int i = 1; i<= n; i++)
            f *= i;
System.out.println("Factorial of " + n 
            + " = " + f);
    }

    public static void main(String args[]) {
        Factorial obj = new Factorial();
obj.input();
obj.fact();
    }
}
Output:
Enter the number: 5
Factorial of 5 = 120
3.	Write a program for Armstrong Number using classes and objects?

import java.util.Scanner;
public class Armstrong
 {
 public static void main(String[] args)
 {
  int num, number, temp, total = 0;
System.out.println("Enter  Digit Number:");
  Scanner scanner = new Scanner(System.in);
num = scanner.nextInt();
scanner.close();
  number = num;
for( ;number!=0;number /= 10) 
{
   temp = number % 10;
   total = total + temp*temp*temp;
  }
if(total == num)
System.out.println(num + " is an Armstrong number");
 else
System.out.println(num + " is not an Armstrong number");
 }
}
