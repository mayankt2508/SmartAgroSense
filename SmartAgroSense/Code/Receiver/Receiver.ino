#include <SPI.h> 
#include <RF24.h> 
 
RF24 radio(22, 21);  // CE, CSN 
const byte node1Addr[] = "NODE1"; 
const byte node2Addr[] = "NODE2"; 
const byte node3Addr[] = "NODE3"; 
 
void setup() { 
  Serial.begin(115200); 
  radio.begin(); 
  radio.setPALevel(RF24_PA_LOW); 
  radio.setChannel(108); 
  radio.openReadingPipe(1, node1Addr); 
  radio.openReadingPipe(2, node2Addr); 
  radio.openReadingPipe(3, node3Addr); 
  radio.startListening(); 
  Serial.println("Central RX Node Ready"); 
} 
 
void loop() { 
  if (radio.available()) { 
    char message[64] = ""; 
    radio.read(&message, sizeof(message)); 
    Serial.println(message); 
  } 
} 