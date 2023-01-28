public class arrays {
  public static void main(String[] args) {
    // this is how we make an array
    String[] friends = {"Bethany", "Jake", "Ben", "Parker"};
    System.out.println(friends[3]);
    // this is how to print the length of an array
    System.out.println(friends.length);
    // this is how to print an entire array
    for (int i = 0; i < friends.length; i++) {
      System.out.println(friends[i]);
    }
  }
 }
