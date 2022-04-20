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
public class ExchangeStudent extends Student {
    
    Date endDate;
    String Country;
    
    ExchangeStudent(String rollno, 
                    String first_name, 
                    String last_name, 
                    Date dob, 
                    Date doj, 
                    Date end,
                    String country) {
        super(rollno, first_name, last_name, dob, doj);
        endDate = end;
        Country = country;
    }
    
    
}
