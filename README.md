# Bluetooth-car

Hi, in this project we will make a wireless car which we will control with our phone.
## Components
• HC-05 Bluetooth Module 

• Arduino Uno

• Android Phone 

• L298n Motor Driver Module

• 12-15VDC Battery

• 4 DC Motors

**NOTE:** 
    You can use the HC-06 module as well, but if you are planning to upgrade the project with more communication sensors, than it is best to use HC-05 because it can work both as *Master mode* and *Slave mode*.
  
**NOTE 2:** 
    IOS phones uses a different type of bluetooth communication protocols so it wouldn't work with HC-05 or HC-06 
    
    
    
## Connecting Phone to BT Module
#### Step 1
Once you connect VCC and GND pins of the HC-05 module to Arduino board, go to the bluetooth settings of your phone. Once you are in the settings, scan the devices and you should see the HC-05 module. While connecting it will ask for a password, the default password is *1234* or *0000* try both of them. You can change this password and the name of the device if you like via serial port of Arduino IDE using AT commands. But it is not necessary for our project.

Here is a link how to do it https://www.youtube.com/watch?v=8BTfSze_23I
#### Step 2
Once you paired your phone and HC-05 module download the app named *Bluetooth RC controller* in google play store.

![alt text](https://cdn.apk-cloud.com/detail/image/braulio.calle.bluetoothRCcontroller-w250.png)

#### Step 3
Open the app and go to settings and scan for devices, you should see HC-05 module. Select it and wait for them to pair. Once they are paired the red circle on the top left should turn green. And now you can controll the car using the app.

## Problems You Could Face

• Be careful while uploding the code to Arduino, be sure to disconnect *RX* and *TX* pins while uploding the code.

• If the directions of the car doesn't match with the controller, try to change the code's first lines or change the cables of the L298n module's *IN* ports.

• If you have another problem, send me an e-mail.
