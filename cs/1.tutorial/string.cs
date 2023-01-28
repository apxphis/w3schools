using System;

public class Strings
{
  public static void Main(string[] args)
  {
    // string methods
    Console.WriteLine("---------------");
    string greeting = "Heya!";
    string formalGreeting = "hello! it's nice to meet you!";
    Console.WriteLine("The length of 'greeting' is: " + greeting.Length); // outputs "the length of 'greeting' is: 5"
    Console.WriteLine(greeting.ToUpper()); // outputs "HEYA!"
    Console.WriteLine(greeting.ToLower()); // outputs "heyas"!"

    // cocatanation
    Console.WriteLine("---------------");
    string firstName = "Mevia", lastName = "Nelson";
    string fullName = firstName + ' ' + lastName;
    Console.WriteLine(fullName);

    // interpolation
    Console.WriteLine("---------------");
    string middleName = "Jane";
    string fullerName = $"{firstName} {middleName} {lastName}";
    Console.WriteLine(fullerName);

    // access methods
    Console.WriteLine("---------------");
    string alex = "Alexander Gilmore";
    Console.WriteLine(alex[0]); // outputs 'A';
    Console.WriteLine(alex[10]); // outputs 'G';

    Console.WriteLine("---------------");
    string dad = "Samuel Arthur Nelson Sr.";
    Console.WriteLine(dad.IndexOf('S')); // outputs '0'
    Console.WriteLine(dad.IndexOf('A')); // outputs '7'
    Console.WriteLine(dad.IndexOf('N')); // outputs '14'
    Console.WriteLine("---------------");
  }
}
