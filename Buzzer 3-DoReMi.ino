#define c3 131
#define d3 147
#define e3 165
#define f3 175
#define g3 196
#define a3 220
#define b3 247
#define c4 262

int button1 = 0;
int button2 = 0;
int button3 = 0;
int button4 = 0;
int button5 = 0;
int button6 = 0;
int button7 = 0;
int button8 = 0;

void setup()
{
   pinMode(2, INPUT_PULLUP);
   pinMode(3, INPUT_PULLUP);
   pinMode(4, INPUT_PULLUP);
   pinMode(5, INPUT_PULLUP);
   pinMode(6, INPUT_PULLUP);
   pinMode(7, INPUT_PULLUP);
   pinMode(8, INPUT_PULLUP);
   pinMode(9, INPUT_PULLUP);
}

void loop()
{
   button1 = digitalRead(2);
    button2 = digitalRead(3);
    button3 = digitalRead(4);
    button4 = digitalRead(5);
    button5 = digitalRead(6);
    button6 = digitalRead(7);
    button7 = digitalRead(8);
    button8 = digitalRead(9);
  
  if(button1==LOW){
    tone(10,c3,10);
    noTone(100);}
  else if(button2==LOW){
    tone(10,d3,10);
    noTone(100);}
  else if(button3==LOW){
    tone(10,e3,10);
    noTone(100);}
  else if(button4==LOW){
    tone(10,f3,10);
    noTone(100);}
  else if(button5==LOW){
    tone(10,g3,10);
    noTone(100);}
  else if(button6==LOW){
    tone(10,a3,10);
    noTone(100);}
  else if(button7==LOW){
    tone(10,b3,10);
    noTone(100);}
  else if(button8==LOW){
    tone(10,c4,10);
    noTone(100);}
}