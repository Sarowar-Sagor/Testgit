/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication1;
import java.lang.StringBuilder;
/**
 *
 * @author User
 */
public class JavaApplication1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
         StringBuilder st = new StringBuilder();
st.append("Welcome to ");
st.append("Java");
System.out.println(st);//Welcome to Java
st.insert(11, "HTML and ");
System.out.println(st);//Welcome to HTML and Java
st.delete(8, 11);
System.out.println(st);//Welcome HTML and Java
        st.deleteCharAt(8);
System.out.println(st);
//Welcome TML and Java
st.reverse();//avaJ dna LMT emocleW
System.out.println(st);
st.reverse();
//Welcome TML and Java
st.replace(8, 11, "HTML");
System.out.println(st);
//Welcome HTML and Java
st.setCharAt(0, 'W');
System.out.println(st);
//welcome HTML and Java
    }
    
}
