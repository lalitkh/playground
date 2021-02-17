package oops.practice;

public class TestOOP {
    public static void main(String[] args) {

        Circle c = new Circle();

        System.out.println("Radius: " + c.getRadius());
        System.out.println("Area:" +c.getArea());

        System.out.println("-----------------");

        Circle c2 = new Circle(7);

        System.out.println("Radius: " + c2.getRadius());
        System.out.println("Area:" +c2.getArea());


    }
}
