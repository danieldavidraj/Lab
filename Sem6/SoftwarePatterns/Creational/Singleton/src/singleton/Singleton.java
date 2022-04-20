/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package singleton;

/**
 *
 * @author 19pw09
 */
public class Singleton {
    private static Singleton instance;
    public String value;

    private Singleton(String value) {
        this.value = value;
    }

    public static Singleton getInstance(String value) {
        if (instance == null) {
            instance = new Singleton(value);
        }
        return instance;
    }
    
    public static void main(String[] args) { 
        Singleton x = Singleton.getInstance("FOO");
        Singleton y = Singleton.getInstance("BOO");
        Singleton z = Singleton.getInstance("ZOO");
 
        System.out.println("x is " + x.value);
        System.out.println("y is " + y.value);
        System.out.println("z is " + z.value);
    }
}
