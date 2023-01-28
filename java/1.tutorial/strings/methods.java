public class strings {
  public static void main(String[] args) {
    String name = "Mevia Jane Nelson";
    // length()
    System.out.println("The length of 'name' is: " + name.length());
    // toUpperCase() and toLowerCase() make the string uppercase and lowercase respectively
    System.out.println(name.toUpperCase());
    System.out.println(name.toLowerCase());
    // indexOf() locates the first occurence of the inputted string
    System.out.println(name.indexOf("Mevia"));
  }
}
