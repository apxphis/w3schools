using System;

public class WhileLoop
{
  public static void Main(string[] args)
  {
    int i = 0;
    // while (i < 10)
    // {
    //   Console.WriteLine(i);
    //   i++;
    // }
    do
    {
      Console.WriteLine(i);
      i++;
    }
    while (i < 100);
  }
}
