/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package shoes;

import java.util.Objects;
/**
 *
 * @author 19pw09
 */
public abstract class Shoe {
    public String name;

    public Shoe(String name) {
        this.name = name;
    }
    
    @Override
    public abstract Shoe clone();

    @Override
    public boolean equals(Object object2) {
        if (!(object2 instanceof Shoe)) return false;
        Shoe shoe2 = (Shoe) object2;
        return Objects.equals(shoe2.name, name);
    }
}
