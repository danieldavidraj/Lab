/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package student;
import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author 19pw09
 */
public class Main {
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Date dob = new Date(1,2,2001);
        Date doj = new Date(1,1,2001);
        Student[] a = new Student[10];
        a[0] = new Student("12345", "Jack", "Marvin", dob, doj);
        a[1] = new Student("123", "Jack", "Marvin", dob, doj);
        a[1].Display();
        
        List<Student> l = new ArrayList<Student>();
        l.add(a[0]);
        l.add(a[1]);
        System.out.println(l.contains(new Student("12345", "Jack", "Marvin", dob, doj)));
        System.out.println(a[0].equals(new Student("12345", "Jack", "Marvin", dob, doj)));
        for(int i = 0; i < l.size(); i++) {
            l.get(i).Display();
        }
        
        for(int i = 0; i < l.size(); i++) {
            l.get(i).Display();
        }
    }
}
