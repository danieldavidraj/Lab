/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package prototype;

import shoes.Shoe;
/**
 *
 * @author 19pw09
 */
public class Prototype {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Store store = new Store();

        Shoe shoe1 = store.get("Adidas Slippers");
        Shoe shoe2 = store.get("Nike Sports");
        Shoe shoe3 = store.get("Nike Sports");

        if (shoe1 != shoe2 && !shoe1.equals(shoe2)) {
            System.out.println("Adidas slippers != Nike Sports");
        } else {
            System.out.println("Adidas slippers == Nike Sports");
        }

        if (shoe2 != shoe3) {
            System.out.println("Nike Sports are two different objects");
            if (shoe2.equals(shoe3)) {
                System.out.println("And they are identical");
            } else {
                System.out.println("But they are not identical");
            }
        } else {
            System.out.println("Nike objects are the same");
        }
    }
}
