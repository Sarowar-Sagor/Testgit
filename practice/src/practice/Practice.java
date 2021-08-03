package Practice;

class Circle{
double radius = 1;
Circle(){}
Circle(double r){radius = r;}
void setRadius(double r){radius = r;}
double getArea(){ return 2*Math.PI*radius*radius;}

}

public class Practice {
public static void main(String[] args) {
Circle c1 = new Circle(); //radius 1
System.out.printf("Area of c1 = %.2f\n",c1.getArea());
Circle c2 = new Circle(10);//radius = 10
System.out.printf("Area of c2 = %.2f\n",c2.getArea());
c1.setRadius(20);
System.out.printf("Area of c1 = %.2f\n",c1.getArea());
}
}