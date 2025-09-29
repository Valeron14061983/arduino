#include <Wire.h> 
#include <DHT.h>
#include <LiquidCrystal_I2C.h>
#include <LCDI2C_Multilingual.h>
#define DHTPIN 12    // Цифровой пин, к которому подключен датчик
#define DHTTYPE DHT12
DHT dht(DHTPIN, DHTTYPE);
//LiquidCrystal_I2C lcd(0x27, 16, 2);
int x =0;
boolean f = 0;
 float h;
 float t ;

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);
  
 Wire.begin(9); // 9 здесь адрес Slave (упоминается также в коде основной платы) 
  Wire.onReceive(receiveEvent);
  
  Serial.begin(115200);


  
  Serial.println("-----------privet ---------");
   
}
void receiveEvent(int bytes) {
  x = Wire.read(); // Получаем значения х от основной платы
  Serial.println(x);
}

void loop() {
 
   delay(5000);
   Serial.println(" XXX");

  // Чтение влажности
 
  // Чтение температуры в градусах Цельсия
//t = dht.readTemperature();
//h = dht.readHumidity();
  

   
}
