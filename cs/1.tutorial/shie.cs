using System;

public class Shorthand {
  public static void Main(string[] args) {
    int time = 20;
    string result = (time < 18) ? "good day!" : "good evening!";
    Console.WriteLine(result);
  }
}
