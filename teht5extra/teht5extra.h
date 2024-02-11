#ifndef TEHT5EXTRA_H
#define TEHT5EXTRA_H

#include <iostream>

class DeviceMouse {
public:
    DeviceMouse();
    void setPrimaryButton();
    short getPrimaryButton();
private:
    short primaryButton;
};

class DeviceTouchPad {
public:
    DeviceTouchPad();
    void setTouchPadSensitivity();
    void getTouchPadSensitivity();
private:
    short touchPadSensitivity;
};

class DeviceDisplay {
public:
    DeviceDisplay();
    void setDisplayResolution();
    short getDisplayResolution();
private:
    short displayResolution;
};

class DeviceBaseClass : public DeviceDisplay, public DeviceTouchPad, public DeviceMouse {
public:
    DeviceBaseClass();
    void setDeviceID();
    short getDeviceID();
protected:
    short deviceID;
};

class MyDeviceUI {
public:
    MyDeviceUI() {
        objectDeviceMouse = new DeviceMouse();
        objectDeviceTouchPad = new DeviceTouchPad();
        objectDeviceDisplay = new DeviceDisplay();
    }
    ~MyDeviceUI(){
        delete objectDeviceMouse;
        delete objectDeviceTouchPad;
        delete objectDeviceDisplay;
    }
    void uiShowMenu();
    void uiSetMouseInformation();
    void uiSetTouchPadInformation();
    void uiSetDisplayInformation();
    void uiShowDeviceInformation();
private:
    DeviceMouse* objectDeviceMouse;
    DeviceTouchPad* objectDeviceTouchPad;
    DeviceDisplay* objectDeviceDisplay;

};

#endif // TEHT5EXTRA_H
