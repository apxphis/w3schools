public class parameters {
  static void namer(String name) {
    System.out.println("Hello, " + name + "!");
  }
  static int add(int x, int y) {
    return x + y;
  }
  public static void main(String[] args) {
    namer("Mevia");
    System.out.println(add(5, 10));
  }
}
