package com.stock.stock;

import java.io.Serializable;

public class Product implements Serializable {

    private int id;
    private String PRODUCT_NAME;
    private float PRODUCT_PRICE;
    private String PRODUCT_CATEGORY;


    public String getProductName() {
        return PRODUCT_NAME;
    }

    public void setProductName(String productName) {
        this.PRODUCT_NAME = productName;
    }

    public float getProductPrice() {
        return PRODUCT_PRICE;
    }

    public Product(int id, String productName, float productPrice, String productCategory) {
        this.id = id;
        this.PRODUCT_NAME = productName;
        this.PRODUCT_PRICE = productPrice;
        this.PRODUCT_CATEGORY = productCategory;
    }

    public void setProductPrice(float productPrice) {
        this.PRODUCT_PRICE = productPrice;
    }

    public String getProductCategory() {
        return PRODUCT_CATEGORY;
    }

    public void setProductCategory(String productCategory) {
        this.PRODUCT_CATEGORY = productCategory;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }
}
