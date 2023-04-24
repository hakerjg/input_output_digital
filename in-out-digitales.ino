int boton1=3;
int boton2=7;
int led=5;
int motor=2;
int estado1=0;
int estado2=0;
void setup() {
  // put your setup code here, to run once:
pinMode(boton1,INPUT_PULLUP);
pinMode(boton2,INPUT_PULLUP);
pinMode(led,OUTPUT);
pinMode(motor,OUTPUT);

}
void loop() {
  // put your main code here, to run repeatedly:
  estado1=digitalRead(boton1);
  estado2=digitalRead(boton2);
if (estado1==LOW){
digitalWrite(led,HIGH);
}
else{
  digitalWrite(led,LOW);
}
if (estado2==LOW){
digitalWrite(motor,HIGH);
}
else{
  digitalWrite(motor,LOW);
}


}
