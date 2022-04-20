/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package shoes;

/**
 *
 * @author 19pw09
 */
public class NikeShoe extends Shoe {
    
    public NikeShoe(String name) {
        super(name);
    }

    @Override
    public Shoe clone() {
        return new NikeShoe(this.name);
    }

    @Override
    public boolean equals(Object object2) {
        if (!(object2 instanceof NikeShoe) || !super.equals(object2)) return false;
        NikeShoe shoe2 = (NikeShoe) object2;
        return shoe2.name.equals(name);
    }
}
