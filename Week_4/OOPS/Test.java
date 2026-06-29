// Test.java
interface Test {
    int square(int n);
}

// Arithmetic.java
class Arithmetic implements Test {
    public int square(int n) {
        return n * n;
    }
}

// ToTestInt.java
public class ToTestInt {
    public static void main(String[] args) {
        Arithmetic obj = new Arithmetic();
        System.out.println("Square = " + obj.square(5));
    }
}