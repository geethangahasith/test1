#include <ESP8266WiFi.h>

const char* ssid = "Geeth";
const char* password = "1114geethanga";

int ledPin0 = D0;
int ledPin1 = D1;
int ledPin2 = D2;
int ledPin3 = D8;
int ledPin4 = D4;
int ledPin5 = D5;
int ledPin6 = D6;
int ledPin7 = D7;
WiFiServer server(80);

void setup() {
  
  pinMode(ledPin0,OUTPUT);
  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin2,OUTPUT);
  pinMode(ledPin3,OUTPUT);
  pinMode(ledPin4,OUTPUT);
  pinMode(ledPin5,OUTPUT);
  pinMode(ledPin6,OUTPUT);
  pinMode(ledPin7,OUTPUT);
  
  digitalWrite(ledPin0,HIGH);
  digitalWrite(ledPin1,HIGH);
  digitalWrite(ledPin2,HIGH);
  digitalWrite(ledPin3,HIGH);
  digitalWrite(ledPin4,HIGH);
  digitalWrite(ledPin5,HIGH);
  digitalWrite(ledPin6,HIGH);
  digitalWrite(ledPin7,HIGH);

  Serial.begin(115200);
  Serial.println();
  Serial.print("Wifi connecting to ");
  Serial.println( ssid );

  WiFi.begin(ssid,password);

  Serial.println();
  Serial.print("Connecting");

  while( WiFi.status() != WL_CONNECTED ){
      delay(500);
      Serial.print(".");        
  }

  
  Serial.println();

  Serial.println("Wifi Connected Success!");
  Serial.print("NodeMCU IP Address : ");
  Serial.println(WiFi.localIP() );

  server.begin();
  Serial.println("NodeMCU Server started");

  // Print the IP address
  Serial.print("Use this URL to connect: ");
  Serial.print("http://");
  Serial.print(WiFi.localIP());
  Serial.println("/");
  
}

void loop() {

    // Check if a client has connected
  WiFiClient client = server.available();
  if (!client) {
    return;
  }

  // Wait until the client sends some data
  Serial.println("Hello New client");
  while(!client.available()){
    delay(1);
  }

   // Read the first line of the request
  String request = client.readStringUntil('\r');
  Serial.println(request);
  client.flush();

   // Match the request
 
  int value0 = LOW;
  if (request.indexOf("/D0=ON") != -1)  {
    digitalWrite(ledPin0, LOW);
    value0 = HIGH;
  }
  if (request.indexOf("/D0=OFF") != -1)  {
    digitalWrite(ledPin0, HIGH);
    value0 = LOW;
  }

  
  int value1 = LOW;
  if (request.indexOf("/D1=ON") != -1)  {
    digitalWrite(ledPin1, LOW);
    value1 = HIGH;
  }
  if (request.indexOf("/D1=OFF") != -1)  {
    digitalWrite(ledPin1, HIGH);
    value1 = LOW;
  }


  int value2 = LOW;
  if (request.indexOf("/D2=ON") != -1)  {
    digitalWrite(ledPin2, LOW);
    value2 = HIGH;
  }
  if (request.indexOf("/D2=OFF") != -1)  {
    digitalWrite(ledPin2, HIGH);
    value2 = LOW;
  }

  
  int value3 = LOW;
  if (request.indexOf("/D3=ON") != -1)  {
    digitalWrite(ledPin3, LOW);
    value3 = HIGH;
  }
  if (request.indexOf("/D3=OFF") != -1)  {
    digitalWrite(ledPin3, HIGH);
    value3 = LOW;
  }

  
  int value4 = LOW;
  if (request.indexOf("/D4=ON") != -1)  {
    digitalWrite(ledPin4, LOW);
    value4 = HIGH;
  }
  if (request.indexOf("/D4=OFF") != -1)  {
    digitalWrite(ledPin4, HIGH);
    value4 = LOW;
  }

  
  int value5 = LOW;
  if (request.indexOf("/D5=ON") != -1)  {
    digitalWrite(ledPin5, LOW);
    value5 = HIGH;
  }
  if (request.indexOf("/D5=OFF") != -1)  {
    digitalWrite(ledPin5, HIGH);
    value5 = LOW;
  }

  
  int value6 = LOW;
  if (request.indexOf("/D6=ON") != -1)  {
    digitalWrite(ledPin6, LOW);
    value6 = HIGH;
  }
  if (request.indexOf("/D6=OFF") != -1)  {
    digitalWrite(ledPin6, HIGH);
    value6 = LOW;
  }

  
  int value7 = LOW;
  if (request.indexOf("/D7=ON") != -1)  {
    digitalWrite(ledPin7, LOW);
    value7 = HIGH;
  }
  if (request.indexOf("/D7=OFF") != -1)  {
    digitalWrite(ledPin7, HIGH);
    value7 = LOW;
  }

 
// Set ledPin0 according to the request
//digitalWrite(ledPin0, value0);
 
  // Return the response
  client.println("HTTP/1.1 200 OK");
  client.println("Content-Type: text/html");
  client.println(""); //  do not forget this one
  client.println("<!DOCTYPE HTML>");
  client.println("<html>");
 
  client.print("D0 pin is now: ");
  if(value0 == HIGH) {
    client.print("On");
  } else {
    client.print("Off");
  }
  client.println("<br><br>");
  client.println("<a href=\"/D0=ON\"\"><button>Turn On </button></a>");
  client.println("<a href=\"/D0=OFF\"\"><button>Turn Off </button></a><br />"); 
  client.println("<br><br>");

    client.print("D1 pin is now: ");
  if(value1 == HIGH) {
    client.print("On");
  } else {
    client.print("Off");
  }
  client.println("<br><br>");
  client.println("<a href=\"/D1=ON\"\"><button>Turn On </button></a>");
  client.println("<a href=\"/D1=OFF\"\"><button>Turn Off </button></a><br />"); 
  client.println("<br><br>");

    client.print("D2 pin is now: ");
  if(value2 == HIGH) {
    client.print("On");
  } else {
    client.print("Off");
  }
  client.println("<br><br>");
  client.println("<a href=\"/D2=ON\"\"><button>Turn On </button></a>");
  client.println("<a href=\"/D2=OFF\"\"><button>Turn Off </button></a><br />"); 
  client.println("<br><br>");

    client.print("D3 pin is now: ");
  if(value3 == HIGH) {
    client.print("On");
  } else {
    client.print("Off");
  }
  client.println("<br><br>");
  client.println("<a href=\"/D3=ON\"\"><button>Turn On </button></a>");
  client.println("<a href=\"/D3=OFF\"\"><button>Turn Off </button></a><br />"); 
  client.println("<br><br>");

    client.print("D4 pin is now: ");
  if(value4 == HIGH) {
    client.print("On");
  } else {
    client.print("Off");
  }
  client.println("<br><br>");
  client.println("<a href=\"/D4=ON\"\"><button>Turn On </button></a>");
  client.println("<a href=\"/D4=OFF\"\"><button>Turn Off </button></a><br />"); 
  client.println("<br><br>");

    client.print("D5 pin is now: ");
  if(value5 == HIGH) {
    client.print("On");
  } else {
    client.print("Off");
  }
  client.println("<br><br>");
  client.println("<a href=\"/D5=ON\"\"><button>Turn On </button></a>");
  client.println("<a href=\"/D5=OFF\"\"><button>Turn Off </button></a><br />"); 
  client.println("<br><br>");

    client.print("D6 pin is now: ");
  if(value6 == HIGH) {
    client.print("On");
  } else {
    client.print("Off");
  }
  client.println("<br><br>");
  client.println("<a href=\"/D6=ON\"\"><button>Turn On </button></a>");
  client.println("<a href=\"/D6=OFF\"\"><button>Turn Off </button></a><br />"); 
  client.println("<br><br>");

    client.print("D7 pin is now: ");
  if(value7 == HIGH) {
    client.print("On");
  } else {
    client.print("Off");
  }
  client.println("<br><br>");
  client.println("<a href=\"/D7=ON\"\"><button>Turn On </button></a>");
  client.println("<a href=\"/D7=OFF\"\"><button>Turn Off </button></a><br />"); 
  client.println("<br><br>");


  client.println("</html>");
 
  delay(1);
  Serial.println("Client disonnected");
  Serial.println("");
  
}
