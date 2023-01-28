using System;
using System.IO;

namespace Files
{
  class Create
  {
    static void Main(string[] args)
    {
        string writeText = "Hello! :)";
        File.WriteAllText("test.txt", writeText);

        string readText = File.ReadAllText("test.txt") ;
        Console.WriteLine(readText);
    }
  }
}
