namespace default
{
  class def
  {
    static void Home(string country = "United States")
    {
      Console.WriteLine("Anonymous User is from: " + country);
    }
    static void Main()
    {
      Home();
      Home("Poland");
      Home("Germany");
    }
  }
}
