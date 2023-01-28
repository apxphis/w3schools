using System;

public class For
{
  public static void Main(string[] args)
  {
    for (int i = 0; i < 100; i++) // argument 1 creates a variable that's set to 0; argument 2 sets the statement to be evaluated; argument 3 increments our variable everytime it's run
    {
      Console.WriteLine(i); // outputs the current value of i
    }
  }
}
