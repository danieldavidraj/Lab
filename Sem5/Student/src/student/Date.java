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
public class Date {
    int day;
    int month;
    int year;
    String format;
    
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
        format = "dd/mm/yy";
    }
    
    Date add_days(int days) {
        Date temp = new Date(day, month, year);
        int[] months = {31,28,31,30,31,30,31,31,30,31,20,31};
        temp.day += days;
        if(temp.day > months[month]) {
            temp.day -= months[month];
            temp.month += 1;
        }
        return temp;
    }
    
    Date subtract_days(int days) {
        Date temp = new Date(day, month, year);
        int[] months = {31,28,31,30,31,30,31,31,30,31,20,31};
        temp.day -= days;
        if(temp.day <= 0) {
            temp.month -= 1;
            temp.day += months[month];
        }
        return temp;
    }
    
    @Override
    public boolean equals(Object o) {
        if (o == this) {
            return true;
        }
        if (!(o instanceof Date)) {
            return false;
        }
        Date d = (Date) o;
        return day == d.day && month == d.month && year == d.year;
    }
    
    public int compare(Date d) {
        if (year > d.year) {
            return 1;
        }
        else if(month > d.month && year >= d.year) {
            return 1;
        }
        else if(day > d.day && month >= d.month && year >= d.year) {
            return 1;
        }
        else if (day == d.day && month == d.month && year == d.year) {
            return 0;
        }
        else {
            return -1;
        }
    }
    
    public int diff_dates(Date d) {
        int difference = 0;
        int year_difference = year - d.year;
        difference += 365 * year_difference;
        int month_difference = month - d.month;
        difference += 31 * month_difference;
        difference += day - d.month;
        return difference; 
    }
    
    public void setFormat(String dateFormat) {
        if( (dateFormat.charAt(2) == '-' || dateFormat.charAt(2) == '/') &&
            (dateFormat.charAt(5) == '-' || dateFormat.charAt(5) == '/') ) {
            format = dateFormat;
        }
        else {
            System.out.println("Invalid Format");
        }
    }
    
    @Override
    public String toString() {
        String d = String.valueOf(day);
        String m = String.valueOf(month);
        String y = String.valueOf(year);
        String date = "";
        
        System.out.println(format);
        int n = format.length();
        for (int i = 0; i < n; i=i+3) {
            if (format.charAt(i) == 'd' || format.charAt(i+1) == 'd') {
                date += d;
            }
            else if (format.charAt(i) == 'm' || format.charAt(i+1) == 'm') {
                date += m;
            }
            else if (format.charAt(i) == 'y' || format.charAt(i+1) == 'y') {
                date += y;
            }
            if(i+2 < n) {
                date += format.charAt(i+2);
            }
        }
        return date;
    }
}
