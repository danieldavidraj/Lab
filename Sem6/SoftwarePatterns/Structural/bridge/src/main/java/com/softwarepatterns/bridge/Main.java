package com.softwarepatterns.bridge;

import com.softwarepatterns.bridge.devices.Device;
import com.softwarepatterns.bridge.devices.Radio;
import com.softwarepatterns.bridge.devices.Tv;
import com.softwarepatterns.bridge.remotes.AdvancedRemote;
import com.softwarepatterns.bridge.remotes.BasicRemote;

public class Main {
    public static void main(String[] args) {
        testDevice(new Tv());
        testDevice(new Radio());
    }

    public static void testDevice(Device device) {
        System.out.println("Tests with basic remote.");
        BasicRemote basicRemote = new BasicRemote(device);
        basicRemote.power();
        device.printStatus();

        System.out.println("Tests with advanced remote.");
        AdvancedRemote advancedRemote = new AdvancedRemote(device);
        advancedRemote.power();
        advancedRemote.mute();
        device.printStatus();
    }
}