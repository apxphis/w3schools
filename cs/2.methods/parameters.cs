using System;

namespace parameter
{
  class pm
  {
    static void greet(string fname)
    {
      Console.WriteLine("Hello, " + fname + ".");
    }
    static void Main(string[] args)
    {
      greet("Mevia");
      greet("Alex");
    }
  }
}
