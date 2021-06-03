#define c4 554
#define e4 659
#define a3 440
#define b3 494
#define g4 831
#define a4 880
#define no 0


int melody[]={a3,a3,a3,b3,a3,b3,c4,no,e4,c4,b3,a3,a3,no,
              a3,a3,a3,b3,a3,b3,a3,a4,g4,
              e4,c4,b3,b3,c4,b3,a3,b3,a3,no
              };
int duration[]={2,5,5,2,4,4,1,4,2,2,1,4,1,4,
                4,3,2,2,3,2,2,2,1,
                4,3,2,5,4,2,5,4,1,
               };

void setup(){

}

void loop(){
 
  for(int i=0;i<34;i++){  
  int noneduration=1000/duration[i];
  tone(8,melody[i],noneduration);
  int pause = noneduration*1.4;  
  delay(pause);
  noTone(8);   
}
  delay(1000);
}