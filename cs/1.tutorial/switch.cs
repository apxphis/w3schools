using System;

public class Switch
{
  public static void Main(string[] args)
  {
    int day = 4;
    switch(day) { // MAKE SURE TO PUT SWITCH IN ALL LOWER-CASE
      case 1:
        Console.WriteLine("It is Monday");
        break;
      case 2:
        Console.WriteLine("It is Tuesday");
        break;
      case 3:
        Console.WriteLine("It is Wednesday");
        break;
      case 4:
        Console.WriteLine("It is Thursday");
        break;
      case 5:
        Console.WriteLine("It is Friday");
        break;
      case 6:
        Console.WriteLine("It is Saturday");
        break;
      case 7:
        Console.WriteLine("It is Sunday");
        break;
      }
  }
}
