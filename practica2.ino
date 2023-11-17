// agregamos la libreria:
#include <LiquidCrystal.h>

// inicialice la biblioteca asociando cualquier pin de interfaz LCD necesario
// con el número de pin arduino al que está conectado
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
const int inputPin = 7;

int value = 0;
bool toggle = false;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup()
{
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Matricula: 202245606");
  // Print a message to the LCD.

  pinMode(inputPin, INPUT); // sets the digital pin 7 as input
}

void loop()
{
  value = digitalRead(inputPin);

  if (value)
  {
    lcd.clear();
    lcd.setCursor(0, 0);
    if (toggle)
    {
      lcd.print("202245606");
      toggle = false;
    }
    else
    {
      lcd.print("202249731");
      toggle = true;
    }
    delay(2000);
  }
}