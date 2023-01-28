using System;

namespace Friend
{
  class Person
  {
    string name;
    int age;
    double height;

    static void Main(string[] args)
    {
      Person Ben = new Person();
      Ben.name = "Ben";
      Ben.age = 17;
      Ben.height = 175.3;
      Console.WriteLine(Ben.name);
      Console.WriteLine(Ben.age);
      Console.WriteLine(Ben.height);
    }
  }
}
