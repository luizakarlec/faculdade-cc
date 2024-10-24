/* 

*/
#include <Keypad.h>
int position = 0; //conta posicao da senha
char* senha ="1234";

const byte ROWS = 4;
const byte COLS = 4; 
int buzzer = 2;

char keys[ROWS][COLS] = {
  {'1','2','3', 'A'},
  {'4','5','6', 'B'},
  {'7','8','9', 'C'},
  {'*','0','#', 'D'}
};

byte rowPins[ROWS] = {4, 5, 6, 7}; 
byte colPins[COLS] = {8, 9, 10, 11}; 

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup(){
  Serial.begin(9600);
  set_locked(true);
  pinMode(buzzer, OUTPUT);
}
  
void loop(){
  char key = keypad.getKey();

  //resetar senha
  if(key == '*' || key == '#'){
    position = 0;
    set_locked(true);
  }
  //caso senha nao completa, passa a posicao
  if(key == senha[position]){ //senha passa a posicao apenas na senha certa
    position++;
  }
  //manda senha para set_locked
  if(position == 4){
    set_locked(false);
  }
  delay(100);
}

void set_locked (int locked){
  if (locked){
    //senha errada
    }else{
      //senha certa
      tone(buzzer, 1500);
      delay(1000);
      noTone(buzzer);
    }
}
