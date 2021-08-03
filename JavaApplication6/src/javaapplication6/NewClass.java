/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication6;

/**
 *
 * @author User
 */
public enum NewClass {
    sagor("nice","30"),
    amir("awesome","14"),
    sarowar("beautiful","8");
    
    private final String quality;
    private final String year;
    
    
    NewClass(String st,String str){
        quality=st;
        year=str;
    }
    public String getquality(){
        return quality;
    }
    public String getyear(){
       return year;
    }
    
}
