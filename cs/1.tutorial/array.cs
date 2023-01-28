using System;

public class Array // arrayer? i hardly know her!
{
  public static void Main(string[] args)
  {
    string[] friends = {"Bethany", "Jake", "Ben", "Kaylen", "G-Dawg"};
    Console.WriteLine(friends[0]); // outputs "Bethany"
    Console.WriteLine(friends[4]); // outputs "G-Dawg"
    // changing an array item
    friends[4] = "Parker";
    Console.WriteLine(friends[4]);
    // lengths
    Console.WriteLine(friends.Length); // outputs 5
  }
}
