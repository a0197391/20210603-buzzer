#define pc2  2
#define pc3  3
#define pd3  4
#define pe3  5
#define pg3  6
#define pno  7


#define c2 129
#define c3 131
#define d3 147
#define e3 165
#define g3 196
#define no 0

int melody[]={c2,c3,c2,d3,c3,d3,e3,no,g3,e3,d3,c3,c2};

int duration[]={2,5,5,2,4,4,1,4,2,2,1,4,1};
int ledState;

void setup(){
  pinMode(pc2,OUTPUT);
  pinMode(pc3,OUTPUT);
  pinMode(pd3,OUTPUT);
  pinMode(pe3,OUTPUT);
  pinMode(pg3,OUTPUT);
  //pinMode(pno,OUTPUT);

}


void loop(){
  
  for(int i=0;i<13;i++){  
    if(melody[i]==c2)ledState=2;
  else if(melody[i]==c3)ledState=3;
  else if(melody[i]==d3)ledState=4;
  else if(melody[i]==e3)ledState=5;
  else if(melody[i]==g3)ledState=6;
 // else if(melody[i]==no)ledState=7;
  digitalWrite(ledState,HIGH);
  int noneduration=1000/duration[i];
  tone(10,melody[i],noneduration);
  int pause = noneduration*1.1;  
  delay(pause);
  noTone(10);   
  digitalWrite(ledState,LOW);
}
  delay(1000);
}  