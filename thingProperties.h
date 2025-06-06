// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char SSID[]     = SECRET_SSID;    // Network SSID (name)
const char PASS[]     = SECRET_OPTIONAL_PASS;    // Network password (use for WPA, or use as key for WEP)

void onSpeedChange();
void onBackwardChange();
void onForwardChange();
void onLeftChange();
void onRightChange();

int speed;
bool backward;
bool forward;
bool left;
bool right;

void initProperties(){

  ArduinoCloud.addProperty(speed, READWRITE, ON_CHANGE, onSpeedChange);
  ArduinoCloud.addProperty(backward, READWRITE, ON_CHANGE, onBackwardChange);
  ArduinoCloud.addProperty(forward, READWRITE, ON_CHANGE, onForwardChange);
  ArduinoCloud.addProperty(left, READWRITE, ON_CHANGE, onLeftChange);
  ArduinoCloud.addProperty(right, READWRITE, ON_CHANGE, onRightChange);



}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
