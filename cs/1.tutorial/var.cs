using System;

public class Variables
{
  static void Main(string[] args)
    {
      string firstName = "Mevia", middleName = "Jane", lastName = "Nelson";
      string fullName = firstName + ' ' + middleName + ' ' + lastName;
      int age = 16;
      float height = 180.4F;
      bool isWorking = false;
      char firstInitial = 'M', middleInitial = 'J', lastInitial = 'N';
      Console.WriteLine("My name is " + fullName + '.');
      Console.WriteLine("My intials are: " + firstInitial + middleInitial + lastInitial);
      Console.WriteLine("I am " + age + " years old.");
      Console.WriteLine("I am " + height + " cm tall!");
      Console.WriteLine("Am I working?: " + isWorking);
    }
}
