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
public class AdidasShoe extends Shoe {
    public AdidasShoe(String name) {
        super(name);
    }

    @Override
    public Shoe clone() {
        return new AdidasShoe(this.name);
    }

    @Override
    public boolean equals(Object object2) {
        if (!(object2 instanceof AdidasShoe) || !super.equals(object2)) return false;
        AdidasShoe shoe2 = (AdidasShoe) object2;
        return shoe2.name.equals(name);
    }
}
