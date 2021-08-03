
//import javaapplication6.NewClass;

//import javaapplication6.NewClass;

package javaapplication6;
class animal{
    public void move(){System.out.println("animal");}
    public void move2(){System.out.println("animal2");}
    
}
class dog extends animal{
    public void move(){System.out.println("dog");}
    public void move3(){System.out.println("dog2");}
}
class cat extends animal{
    public void move(){
        System.out.println("Cat");
    }
}
class bat{
    public void digest(animal x){
        x.move();
    }
}
public class JavaApplication6 {

    public static void main(String[] args) {
        animal obj=new dog();
        obj.move();
        bat obj2=new bat();
        obj2.digest(obj);
  
        /*animal a=new animal();
        animal b=new dog();
        a.move();
        b.move();*/
    }
    
}
