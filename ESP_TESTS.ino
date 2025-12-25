////Testing the ESP8266 board with an Analog Input

//#include <ESP8266WiFi.h>
//#define POT A0
//
//const String ssid = "YieldEx_E3D8";
//const String password = "25434019yEX";
//
//void setup(void){
//  Serial.begin(115200);
//  pinMode(POT, INPUT);
//  pinMode(LED_BUILTIN, OUTPUT);
//
//  WiFi.begin(ssid, password);
//  while (WiFi.status() != WL_CONNECTED) {
//    delay(500);
//    Serial.print(".");
//  }
//  Serial.println("");
//  Serial.println("WiFi connected");
//
//  Serial.println(WiFi.localIP());
//}
//void loop(){}
//  int value = analogRead(POT);
//
//  Serial.print("Value: ");
//  Serial.print(value);
//  Serial.print("  |  Const: ");
//
//  value = map(value, 0, 1024, 0, 255);
//  Serial.println(value);
//
//  if(value > 150){
//    digitalWrite(LED_BUILTIN, LOW);
//  }else{
//    digitalWrite(LED_BUILTIN, HIGH);
//  }
//
//  delay(300);
//}

////Reading data from a Website

//#include <ESP8266WiFi.h>
//
//#define button 5
//// WiFi parameters
//const char* ssid = "YieldEx_E3D8";
//const char* password = "25434019yEX";
//// Host
//const char* host = "example.com";
//const char* url = "https://www.iana.org/help/example-domains";
//
//void setup() {
//  pinMode(button, INPUT);
//  digitalWrite(button, HIGH);
//  Serial.begin(115200);
//  Serial.println();
//  Serial.println();
//  Serial.print("Connecting to ");
//  Serial.println(ssid);
//  WiFi.begin(ssid, password);
//
//  while (WiFi.status() != WL_CONNECTED) {
//    delay(500);
//    Serial.print(".");
//  }
//
//  Serial.println("");
//  Serial.println("WiFi connected");
//  Serial.println("IP address: ");
//  Serial.println(WiFi.localIP());
//  Serial.print("Waiting for Button Press  ");
//}
//
//int value = 0;
//
//void loop(){
////  int state = digitalRead(button);
////  if(state == 0){
////    Serial.print(".");
////    delay(500);
////    return;
////  }
//  
//  Serial.println();
//  Serial.print("Connecting to ");
//  Serial.println(host);
//  // Use WiFiClient class to create TCP connections
//  WiFiClient client;
//  const int httpPort = 80;
//
//  if (!client.connect(host, httpPort)) {
//    Serial.println("Connection failed");
//    return;
//  }
//
//  // This will send the request to the server
//  client.print(String("GET /") + url + " HTTP/1.1\r\n" + "Host: " + host + "\\r\\n" + "Connection: close\r\n\r\n");
//  delay(10);
//  // Read all the lines of the reply from server and print them to Serial
//
//  while(client.available()){
//    String line = client.readStringUntil('\r');
//    Serial.print(line);
//    delay(5);
//  }
//
//  Serial.println();
//  Serial.println("Closing connection");
//  delay(2000);
//}

////Testing AP and Client Mode

//#include <ESP8266WiFi.h> // Include the WiFi library
//const char *ssid = "ESP8266 Access Point"; // The name of the Wi-Fi network that will be created
//const char *password = "thereisnospoon"; // The password required to connect to it, leave blank for an open network
//const char *Wssid = "YieldEx_E3D8";
//const char *Wpassword = "25434019yEX";
//void setup(){
//  Serial.begin(115200);
//  delay(10);
//  Serial.println('\n');
//  Serial.print("Connecting to ");
//  Serial.println(Wssid);
//  WiFi.begin(Wssid, Wpassword);
//  while(WiFi.status() != WL_CONNECTED){
//    Serial.print(".");
//    delay(500);
//  }
//  Serial.println("Connected.");
//  Serial.print("IP: ");
//  Serial.println(WiFi.localIP());
//  
//  WiFi.softAP(ssid, password); //Start the access point
//  Serial.print("Access Point \"");
//  Serial.print(ssid);
//  Serial.println("\" started");
//  Serial.print("IP address:\t");
//  Serial.println(WiFi.softAPIP()); // Send the IP address of the ESP8266 to the computer
//}
//void loop(){}

//#include <ESP8266WiFi.h>        // Include the Wi-Fi library
////#include <ESP8266WiFiMulti.h>   // Include the Wi-Fi-Multi library
//#include <ESP8266mDNS.h>        // Include the mDNS library
//
////ESP8266WiFiMulti wifiMulti;     // Create an instance of the ESP8266WiFiMulti class, called 'wifiMulti'
//
//const char* ssid = "Dauda's A12";
//const char* password = "ABCD1234";
//const char* DNSssid = "myesp";
//void setup(){
//  Serial.begin(115200);         // Start the Serial communication to send messages to the computer
//  delay(10);
//  Serial.println('\n');
//
//  WiFi.begin(ssid, password);   // add Wi-Fi networks you want to connect to
////  wifiMulti.addAP("ssid_from_AP_2", "your_password_for_AP_2");
////  wifiMulti.addAP("ssid_from_AP_3", "your_password_for_AP_3");
//
//  Serial.println("Connecting ...");
//  int i = 0;
//  while (WiFi.status() != WL_CONNECTED) { // Wait for the Wi-Fi to connect: scan for Wi-Fi networks, and connect to the strongest of the networks above
//    delay(500);
//    Serial.print(".");
//  }
//  Serial.println('\n');
//  Serial.print("Connected to ");
//  Serial.println(WiFi.SSID());              // Tell us what network we're connected to
//  Serial.print("IP address:\t");
//  Serial.println(WiFi.localIP());           // Send the IP address of the ESP8266 to the computer
//
//  MDNS.begin(DNSssid);
//  
//  if (!MDNS.begin(DNSssid)) {             // Start the mDNS responder for esp8266.local
//    Serial.println("Error setting up MDNS responder!");
//  }
//  Serial.println("mDNS responder started");
//  Serial.print("mDNS Name: ");
//  Serial.println(DNSssid);
//}
//
//void loop(){}

/*
  CH340 Stability Diagnostic for ESP8266
  --------------------------------------
  Purpose:
  - Continuously toggles GPIO pins to create small current surges.
  - Sends frequent Serial messages to check if COM port disappears.
  - If Serial Monitor freezes or disconnects, the issue is power/USB instability.
*/

//void setup() {
//  Serial.begin(115200);
//  pinMode(LED_BUILTIN, OUTPUT);
//  pinMode(2, OUTPUT); // another GPIO to add switching noise
//  Serial.println("\n[CH340 Diagnostic Test Started]");
//}
//
//void loop() {
//  static unsigned long counter = 0;
//
//  // Toggle pins rapidly to create fluctuating load
//  digitalWrite(LED_BUILTIN, HIGH);
//  digitalWrite(2, HIGH);
//  delay(5);
//  digitalWrite(LED_BUILTIN, LOW);
//  digitalWrite(2, LOW);
//  delay(5);
//
//  // Continuously print data to serial
//  counter++;
//  Serial.print("Ping #");
//  Serial.println(counter);
//
//  // Every 100 pings, print a separator to monitor stability
//  if (counter % 100 == 0) {
//    Serial.println("--- Stable so far ---");
//  }
//}

////mDNS ESP8266 Test

//#include <ESP8266WiFi.h>
//#include <WiFiClient.h>
////#include <ESP8266WiFiMulti.h> 
//#include <ESP8266mDNS.h>
//#include <ESP8266WebServer.h>   // Include the WebServer library
//
////ESP8266WiFiMulti wifiMulti;     // Create an instance of the ESP8266WiFiMulti class, called 'wifiMulti'
//
//ESP8266WebServer server(80);    // Create a webserver object that listens for HTTP request on port 80
//
//const char* ssid = "Dauda's A12";
//const char* password = "ABCD1234";
//
//void handleRoot();              // function prototypes for HTTP handlers
//void handleNotFound();
//
//void setup(void){
//  Serial.begin(115200);         // Start the Serial communication to send messages to the computer
//  delay(10);
//  Serial.println('\n');
//
////  wifiMulti.addAP("ssid_from_AP_1", "your_password_for_AP_1");   // add Wi-Fi networks you want to connect to
////  wifiMulti.addAP("ssid_from_AP_2", "your_password_for_AP_2");
////  wifiMulti.addAP("ssid_from_AP_3", "your_password_for_AP_3");
//  WiFi.begin(ssid, password);
//
//  Serial.println("Connecting ...");
//  int i = 0;
//  while (WiFi.status() != WL_CONNECTED) { // Wait for the Wi-Fi to connect: scan for Wi-Fi networks, and connect to the strongest of the networks above
//    delay(250);
//    Serial.print('.');
//  }
//  Serial.println('\n');
//  Serial.print("Connected to ");
//  Serial.println(WiFi.SSID());              // Tell us what network we're connected to
//  Serial.print("IP address:\t");
//  Serial.println(WiFi.localIP());           // Send the IP address of the ESP8266 to the computer
//
//  if (MDNS.begin("esp8266")) {              // Start the mDNS responder for esp8266.local
//    Serial.println("mDNS responder started");
//  } else {
//    Serial.println("Error setting up MDNS responder!");
//  }
//
//  server.on("/", handleRoot);               // Call the 'handleRoot' function when a client requests URI "/"
//  server.onNotFound(handleNotFound);        // When a client requests an unknown URI (i.e. something other than "/"), call function "handleNotFound"
//
//  server.begin();                           // Actually start the server
//  Serial.println("HTTP server started");
//}
//
//void loop(void){
//  server.handleClient();                    // Listen for HTTP requests from clients
//}
//
//void handleRoot() {
//  server.send(200, "text/plain", "Hello world!");   // Send HTTP status 200 (Ok) and send some text to the browser/client
//}
//
//void handleNotFound(){
//  server.send(404, "text/plain", "404: Not found"); // Send HTTP status 404 (Not Found) when there's no handler for the URI in the request
//}

////Controlling an LED from a local web server

//#include <ESP8266WiFi.h>
////#include <WiFiClient.h>
////#include <ESP8266WiFiMulti.h> 
//#include <ESP8266mDNS.h>
//#include <ESP8266WebServer.h>
//
//#define Red_led 14
//#define Blue_led 5
//#define Yellow_led 4
//
////ESP8266WiFiMulti wifiMulti;     // Create an instance of the ESP8266WiFiMulti class, called 'wifiMulti'
//
//ESP8266WebServer server(80);    // Create a webserver object that listens for HTTP request on port 80
//
////const int led = D6;
//const char* ssid = "YieldEx_E3D8";
//const char* password = "25434019yEX";
//
//void handleRoot();              // function prototypes for HTTP handlers
//void handleRedLED();
//void handleBlueLED();
//void handleYellowLED();
//void handleNotFound();
//
//void setup(void){
//  Serial.begin(115200);         // Start the Serial communication to send messages to the computer
//  delay(10);
//  Serial.println('\n');
//
//  pinMode(Red_led, OUTPUT);
//  pinMode(Blue_led, OUTPUT);
//  pinMode(Yellow_led, OUTPUT);
//
//  WiFi.begin(ssid, password);
//
//  Serial.println("Connecting ...");
//  int i = 0;
//  while (WiFi.status() != WL_CONNECTED) { // Wait for the Wi-Fi to connect: scan for Wi-Fi networks, and connect to the strongest of the networks above
//    delay(500);
//    Serial.print('.');
//  }
//  
//  Serial.println('\n');
//  Serial.print("Connected to ");
//  Serial.println(WiFi.SSID());              // Tell us what network we're connected to
//  Serial.print("IP address:\t");
//  Serial.println(WiFi.localIP());           // Send the IP address of the ESP8266 to the computer
//  //delay(5);
//
//  if (MDNS.begin("esp8266")) {              // Start the mDNS responder for esp8266.local
//    Serial.println("mDNS responder started");
//  } else {
//    Serial.println("Error setting up MDNS responder!");
//  }
//
//  server.on("/", HTTP_GET, handleRoot);     // Call the 'handleRoot' function when a client requests URI "/"
//  server.on("/Red_LED", HTTP_POST, handleRedLED);  // Call the 'handleLED' function when a POST request is made to URI "/LED"
//  server.on("/Blue_LED", HTTP_POST, handleBlueLED);
//  server.on("/Yellow_LED", HTTP_POST, handleYellowLED);
//  server.onNotFound(handleNotFound);        // When a client requests an unknown URI (i.e. something other than "/"), call function "handleNotFound"
//
//  server.begin();                           // Actually start the server
//  Serial.println("HTTP server started");
//}
//
//void loop(void){
//  server.handleClient();                    // Listen for HTTP requests from clients
//  //delay(2);
//}
//
////void handleRoot() {                         // When URI / is requested, send a web page with a button to toggle the LED
////  //Serial.println("A user accessed the URI.");
////  //delay(1);
////  server.send(200, "text/html", "<form action=\"/Red_LED\" method=\"POST\"><input type=\"submit\" value=\"Toggle Red LED\"></form>");
////  server.send(200, "text/html", "<form action=\"/Blue_LED\" method=\"POST\"><input type=\"submit\" value=\"Toggle Blue LED\"></form>");
////  server.send(200, "text/html", "<form action=\"/Yellow_LED\" method=\"POST\"><input type=\"submit\" value=\"Toggle Yellow LED\"></form>");
////}
//
//void handleRoot() {
//  String html = "<form action=\"/Red_LED\" method=\"POST\"><input type=\"submit\" value=\"Toggle Red LED\"></form><br>";
//  html += "<form action=\"/Blue_LED\" method=\"POST\"><input type=\"submit\" value=\"Toggle Blue LED\"></form><br>";
//  html += "<form action=\"/Yellow_LED\" method=\"POST\"><input type=\"submit\" value=\"Toggle Yellow LED\"></form>";
//  server.send(200, "text/html", html);
//}   
//
//void handleRedLED() {                          // If a POST request is made to URI /LED
//  //Serial.println("A user interfaced with the button.");
//  digitalWrite(Red_led,!digitalRead(Red_led));      // Change the state of the LED
//  //delay(4);
//  server.sendHeader("Location","/");        // Add a header to respond with a new location for the browser to go to the home page again
//  server.send(303);                         // Send it back to the browser with an HTTP status 303 (See Other) to redirect
//  //delay(1);
//}
//
//void handleBlueLED() {                          // If a POST request is made to URI /LED
//  //Serial.println("A user interfaced with the button.");
//  digitalWrite(Blue_led,!digitalRead(Blue_led));      // Change the state of the LED
//  //delay(4);
//  server.sendHeader("Location","/");        // Add a header to respond with a new location for the browser to go to the home page again
//  server.send(303);                         // Send it back to the browser with an HTTP status 303 (See Other) to redirect
//  //delay(1);
//}
//
//void handleYellowLED() {                          // If a POST request is made to URI /LED
//  //Serial.println("A user interfaced with the button.");
//  digitalWrite(Yellow_led,!digitalRead(Yellow_led));      // Change the state of the LED
//  //delay(4);
//  server.sendHeader("Location","/");        // Add a header to respond with a new location for the browser to go to the home page again
//  server.send(303);                         // Send it back to the browser with an HTTP status 303 (See Other) to redirect
//  //delay(1);
//}
//
//void handleNotFound(){
//  //Serial.println("A user tried to access an invalid URI.");
//  server.send(404, "text/plain", "404: Not found"); // Send HTTP status 404 (Not Found) when there's no handler for the URI in the request
//  //delay(1);
//}


////Collecting user Input from web server

//#include <ESP8266WiFi.h>
////#include <WiFiClient.h>
////#include <ESP8266WiFiMulti.h> 
//#include <ESP8266mDNS.h>
//#include <ESP8266WebServer.h>
//
////ESP8266WiFiMulti wifiMulti;     // Create an instance of the ESP8266WiFiMulti class, called 'wifiMulti'
//
//ESP8266WebServer server(80);    // Create a webserver object that listens for HTTP request on port 80
//const char* ssid = "YieldEx_E3D8";
//const char* password = "25434019yEX";
//
//void handleRoot();              // function prototypes for HTTP handlers
//void handleLogin();
//void handleNotFound();
//
//void setup(void){
//  Serial.begin(115200);         // Start the Serial communication to send messages to the computer
//  delay(10);
//  Serial.println('\n');
//
//  WiFi.begin(ssid, password);
////  wifiMulti.addAP("ssid_from_AP_1", "your_password_for_AP_1");   // add Wi-Fi networks you want to connect to
////  wifiMulti.addAP("ssid_from_AP_2", "your_password_for_AP_2");
////  wifiMulti.addAP("ssid_from_AP_3", "your_password_for_AP_3");
//
//  Serial.println("Connecting ...");
//  int i = 0;
//  while (WiFi.status() != WL_CONNECTED) { // Wait for the Wi-Fi to connect: scan for Wi-Fi networks, and connect to the strongest of the networks above
//    delay(250);
//    Serial.print('.');
//  }
//  Serial.println('\n');
//  Serial.print("Connected to ");
//  Serial.println(WiFi.SSID());               // Tell us what network we're connected to
//  Serial.print("IP address:\t");
//  Serial.println(WiFi.localIP());            // Send the IP address of the ESP8266 to the computer
//
//  if (MDNS.begin("esp8266")) {              // Start the mDNS responder for esp8266.local
//    Serial.println("mDNS responder started");
//  } else {
//    Serial.println("Error setting up MDNS responder!");
//  }
//
//  server.on("/", HTTP_GET, handleRoot);        // Call the 'handleRoot' function when a client requests URI "/"
//  server.on("/login", HTTP_POST, handleLogin); // Call the 'handleLogin' function when a POST request is made to URI "/login"
//  server.onNotFound(handleNotFound);           // When a client requests an unknown URI (i.e. something other than "/"), call function "handleNotFound"
//
//  server.begin();                            // Actually start the server
//  Serial.println("HTTP server started");
//}
//
//void loop(void){
//  server.handleClient();                     // Listen for HTTP requests from clients
//}
//
//void handleRoot() {                          // When URI / is requested, send a web page with a button to toggle the LED
//  String html = "<form action=\"/login\" method=\"POST\"><input type=\"text\" name=\"username\" placeholder=\"Username\"></br><input type=\"password\" name=\"password\" placeholder=\"Password\"></br><input type=\"submit\" value=\"Login\"></form><p>Try 'John Doe' and 'password123' ...</p>";
//  server.send(200, "text/html", html);
//}
//
//void handleLogin() {                         // If a POST request is made to URI /login
//  if( ! server.hasArg("username") || ! server.hasArg("password") 
//      || server.arg("username") == NULL || server.arg("password") == NULL) { // If the POST request doesn't have username and password data
//    server.send(400, "text/plain", "400: Invalid Request");         // The request is invalid, so send HTTP status 400
//    return;
//  }
//  if(server.arg("username") == "John Doe" && server.arg("password") == "password123") { // If both the username and the password are correct
//    server.send(200, "text/html", "<h1>Welcome, " + server.arg("username") + "!</h1><p>Login successful</p>");
//  } else {                                                                              // Username and password don't match
//    server.send(401, "text/plain", "401: Unauthorized");
//  }
//}
//
//void handleNotFound(){
//  server.send(404, "text/plain", "404: Not found"); // Send HTTP status 404 (Not Found) when there's no handler for the URI in the request
//}


////

#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WiFiMulti.h>
#include <ESP8266mDNS.h>
#include <ESP8266WebServer.h>
#include "FS.h"   // Include the SPIFFS library

const char* ssid = "YieldEx_E3D8";
const char* password = "25434019yEX";
//ESP8266WiFiMulti wifiMulti;     // Create an instance of the ESP8266WiFiMulti class, called 'wifiMulti'

ESP8266WebServer server(80);    // Create a webserver object that listens for HTTP request on port 80

String getContentType(String filename); // convert the file extension to the MIME type
bool handleFileRead(String path);       // send the right file to the client (if it exists)

void setup() {
  Serial.begin(115200);         // Start the Serial communication to send messages to the computer
  delay(10);
  Serial.println('\n');

//  wifiMulti.addAP("ssid_from_AP_1", "your_password_for_AP_1");   // add Wi-Fi networks you want to connect to
//  wifiMulti.addAP("ssid_from_AP_2", "your_password_for_AP_2");
//  wifiMulti.addAP("ssid_from_AP_3", "your_password_for_AP_3");

  WiFi.begin(ssid, password);
  
  Serial.println("Connecting ...");
  int i = 0;
  while (WiFi.status() != WL_CONNECTED) { // Wait for the Wi-Fi to connect
    delay(250);
    Serial.print('.');
  }
  Serial.println('\n');
  Serial.print("Connected to ");
  Serial.println(WiFi.SSID());              // Tell us what network we're connected to
  Serial.print("IP address:\t");
  Serial.println(WiFi.localIP());           // Send the IP address of the ESP8266 to the computer

  if (MDNS.begin("esp8266")) {              // Start the mDNS responder for esp8266.local
    Serial.println("mDNS responder started");
  } else {
    Serial.println("Error setting up MDNS responder!");
  }

  SPIFFS.begin();                           // Start the SPI Flash Files System
  
  server.onNotFound([]() {                              // If the client requests any URI
    if (!handleFileRead(server.uri()))                  // send it if it exists
      server.send(404, "text/plain", "404: Not Found"); // otherwise, respond with a 404 (Not Found) error
  });

  server.begin();                           // Actually start the server
  Serial.println("HTTP server started");
}

void loop(void) {
  server.handleClient();
}

String getContentType(String filename) { // convert the file extension to the MIME type
  if (filename.endsWith(".html")) return "text/html";
  else if (filename.endsWith(".css")) return "text/css";
  else if (filename.endsWith(".js")) return "application/javascript";
  else if (filename.endsWith(".ico")) return "image/x-icon";
  return "text/plain";
}

bool handleFileRead(String path) { // send the right file to the client (if it exists)
  Serial.println("handleFileRead: " + path);
  if (path.endsWith("/")) path += "index.html";         // If a folder is requested, send the index file
  String contentType = getContentType(path);            // Get the MIME type
  if (SPIFFS.exists(path)) {                            // If the file exists
    File file = SPIFFS.open(path, "r");                 // Open it
    size_t sent = server.streamFile(file, contentType); // And send it to the client
    file.close();                                       // Then close the file again
    return true;
  }
  Serial.println("\tFile Not Found");
  return false;                                         // If the file doesn't exist, return false
}
