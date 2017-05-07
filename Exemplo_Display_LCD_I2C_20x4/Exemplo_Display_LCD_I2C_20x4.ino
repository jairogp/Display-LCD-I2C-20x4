    /*
    Pinagem do LCD
    
    GND => (-)
    VCC => 5V
    SDA => A4
    SCL => A5 
    */
    
   #include <Wire.h> 
   #include <LiquidCrystal_I2C.h>

   LiquidCrystal_I2C lcd(0x3F,20,4);  

   void setup()
   {
   lcd.init();           // initializa o lcd 
   lcd.backlight();      // acende a luz de fundo no lcd
   lcd.setCursor(8,0);
   lcd.print("Teste");
   lcd.setCursor(7,1);
   lcd.print("Escrita");
   lcd.setCursor(9,2);
   lcd.print("com");
   lcd.setCursor(7,3);
   lcd.print("LCD 20x4");
   }

   void loop()
   {
   }
