using System;

public class IfElse
{
  public static void Main(string[] args)
  {
    int x = 20, y = 18; // declaring our variabnles to be used
    if (x > y) { // if x is greater than y, then we will execute the next code block
      Console.WriteLine("x is greater than y.");
    } else if (x < y) { // if x is not greater then y, we will execute this code block
      Console.WriteLine("y is greater than x.");
    } else { // if none of the 'if' statements or 'else if' statements are true, we will execute this code block
      Console.WriteLine("something went wrong.");
    }
  }
}
