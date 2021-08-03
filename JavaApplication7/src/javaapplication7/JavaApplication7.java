/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication7;
import java.util.ArrayList;

class Circle extends GeometricObject {
private double radius;
Circle(){radius = 0.0;}
Circle(double r){radius = r;}
/** Return area */
public double getArea() {
return radius * radius * 3.14;
}
/** Return perimeter */
public double getPerimeter() {
return 2 * radius * 3.14;
}
}
class Rectangle extends GeometricObject {
private double width,height;
Rectangle(){ width = 0.0; height = 0.0;}
Rectangle(double w, double h){width = w; height = h;}
/** Return area */
public double getArea() {
return width * height;
}
/** Return perimeter */
public double getPerimeter() {
return 2 * (width + height);
}
}
abstract class GeometricObject {
/** Abstract method */
public abstract double getArea();
public abstract double getPerimeter();
}

/**
 *
 * @author User
 */
public class JavaApplication7 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       Integer a = new Integer(20);// change 15, answer:
Integer b = new Integer(10); // change 5,
System.out.println(a.compareTo(b)); //-1

}
    
//sub1 b = o; //ERROR
 // Explicit Casting

      
}
        // TODO code application logic here
    
