/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Interface.java to edit this template
 */
package com.softwarepatterns.builder.builders;

import com.softwarepatterns.builder.cars.CarType;
import com.softwarepatterns.builder.components.Engine;
import com.softwarepatterns.builder.components.Transmission;
import com.softwarepatterns.builder.components.TripComputer;
import com.softwarepatterns.builder.components.GPSNavigator;
/**
 *
 * @author 19pw09
 */
public interface Builder {
    void setCarType(CarType type);
    void setSeats(int seats);
    void setEngine(Engine engine);
    void setTransmission(Transmission transmission);
    void setTripComputer(TripComputer tripComputer);
    void setGPSNavigator(GPSNavigator gpsNavigator);
}
