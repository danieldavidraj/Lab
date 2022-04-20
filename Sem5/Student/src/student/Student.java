/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package student;

/**
 *
 * @author 19pw09
 */
public class Student {

    String RollNo;
    String firstName;
    String lastName;
    Date DOB;
    Date DOJ;
    
    Student(String rollno, String first_name, String last_name, Date dob, Date doj) {
        firstName = first_name;
        lastName = last_name;
        DOB = new Date(dob.day, dob.month, dob.year);
        DOJ = new Date(doj.day, doj.month, doj.year);  
    }
    
    void Display() {
        System.out.println("Roll No.: " + RollNo);
        System.out.println("First Name: "+firstName);
        System.out.println("Last Name: "+lastName);
        System.out.println("Date of Birth");
        DOB.toString();
        System.out.println("Date of joining");
        DOJ.toString();
    }
    
    @Override
    public boolean equals(Object o) {
        if (o == this) {
            return true;
        }
        if (!(o instanceof Student)) {
            return false;
        }
        Student s = (Student) o;
        return RollNo==s.RollNo && firstName==s.firstName && lastName==s.lastName && DOB.equals(s.DOB) && DOJ.equals(s.DOJ);
    }
}
