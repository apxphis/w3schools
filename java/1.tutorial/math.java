public class Maths {
  public static void main(String[] args) {
    int x = 5, y = 10, z = 81;
    double a = -4.7;
    int randomNum = (int)(Math.random() * 101);  // 0 to 100
    System.out.println(Math.max(x, y)); // outputs 10
    System.out.println(Math.min(x, y)); // outputs 5
    System.out.println(Math.sqrt(z)); // outputs 9.0
    System.out.println(Math.abs(a)); // outputs 4.7
    System.out.println(randomNum); // outputs somethin'
  }
}
