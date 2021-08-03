
package circle;
public class NewClass {
    private String name;
    private String name1;
    private int member=0;
    public NewClass(String st,String str)
    { 
        name=st;
        name1=str;
        member++;
        System.out.printf("%s\t%s\t%d\n",name,name1,member);
    }
    public String getname(){
        return name;
    }
    public void print(){
        System.out.printf("The name is %s\n",getname());
    }
    
}
