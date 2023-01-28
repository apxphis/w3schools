using System;

public class Input
{
  public static void Main(string[] args)
  {
    Console.WriteLine("Please enter a display name: ");
    string displayName = Console.ReadLine(); // the ReadLine funcion allows us to store the input of a user into a variable that can then be used in something else
    Console.WriteLine("You chose the name '" + displayName + "'.");
  }
}
