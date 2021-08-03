package circle;
import java.util.*;


public class Circle {
    double radius = 1;
Circle(){}
Circle(double r){radius = r;}
 void setRadius(double r){radius = r;}
double getArea(){ return Math.PI*radius*radius;}

    public static void main(String[] args) {
        Scanner input=new Scanner(System.in); 
        String name;
        Random dice=new Random();
        int num,a,sum;
        
        //name=input.nextLine();
        //object.setname(name);
       
        //System.out.println(object.name);
        /*Circle c1 = new Circle(); //radius 1
System.out.printf("Area of c1 = %.2f\n",c1.getArea());
Circle c2 = new Circle(10);//radius = 10
System.out.printf("Area of c2 = %.2f\n",c2.getArea());
c1.setRadius(20);
System.out.printf("Area of c1 = %.2f\n",c1.getArea());*/
        // TODO code application logic here
    }
    
}
