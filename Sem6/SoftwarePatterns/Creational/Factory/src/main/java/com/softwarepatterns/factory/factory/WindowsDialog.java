/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.softwarepatterns.factory.factory;

import com.softwarepatterns.factory.buttons.Button;
import com.softwarepatterns.factory.buttons.WindowsButton;
/**
 *
 * @author 19pw09
 */
public class WindowsDialog extends Dialog {

    @Override
    public Button createButton() {
        return new WindowsButton();
    }
}
