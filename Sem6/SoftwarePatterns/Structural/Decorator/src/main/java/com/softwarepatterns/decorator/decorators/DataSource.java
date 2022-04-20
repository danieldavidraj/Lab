/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Interface.java to edit this template
 */
package com.softwarepatterns.decorator.decorators;

/**
 *
 * @author 19pw09
 */
public interface DataSource {
    void writeData(String data);

    String readData();
}
