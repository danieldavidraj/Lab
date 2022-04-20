/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Interface.java to edit this template
 */
package factories;

import buttons.Button;
import checkboxes.Checkbox;
/**
 *
 * @author 19pw09
 */
public interface GUIFactory {
    Button createButton();
    Checkbox createCheckbox();
}
