class Box {
    double length, breadth;

    // Constructor
    Box(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    // Area of rectangle
    double area() {
        return length * breadth;
    }
}

class Box3D extends Box {
    double height;

    // Constructor
    Box3D(double length, double breadth, double height) {
        super(length, breadth);
        this.height = height;
    }

    // Volume of box
    double volume() {
        return length * breadth * height;
    }
}

public class Main {
    public static void main(String[] args) {
        Box b = new Box(10, 5);
        System.out.println("Area = " + b.area());

        Box3D b3 = new Box3D(10, 5, 4);
        System.out.println("Area = " + b3.area());
        System.out.println("Volume = " + b3.volume());
    }
}