/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package prototype;

import java.util.HashMap;
import java.util.Map;
import shoes.Shoe;
import shoes.AdidasShoe;
import shoes.NikeShoe;
/**
 *
 * @author 19pw09
 */
public class Store {
    
    private Map<String, Shoe> store = new HashMap<>();

    public Store() {
        AdidasShoe adidas = new AdidasShoe("Adidas");

        NikeShoe nike = new NikeShoe("Nike");

        store.put("Adidas Slippers", adidas);
        store.put("Nike Sports", nike);
    }

    public Shoe put(String key, Shoe shape) {
        store.put(key, shape);
        return shape;
    }

    public Shoe get(String key) {
        return store.get(key).clone();
    }
    
}
