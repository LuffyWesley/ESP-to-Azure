// Physical device information for board and sensor
#define DEVICE_ID "Feather HUZZAH ESP8266 WiFi"
#define DHT_TYPE DHT22

// Pin layout configuration
#define LED_PIN 0
#define DHT_PIN 2

#define TEMPERATURE_ALERT 30

// Interval time(ms) for sending message to IoT Hub
#define INTERVAL 5000

// If don't have a physical DHT sensor, can send simulated data to IoT hub
// False to use sensor, true to use simulated data 
#define SIMULATED_DATA false

#define MESSAGE_MAX_LEN 256

#define WIFI_SSID "University of Washington"
#define WIFI_PASS ""

// Copy and paste conection string (primary key)
#define CONNECTION_STRING "HostName=DHT-Test.azure-devices.net;DeviceId=DHT-Sensor;SharedAccessKey=C9f4a7+FnNHsDd0mLPE3dltb7jkJTPgF+cE5+JkUXnw="
