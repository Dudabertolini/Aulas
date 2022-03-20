//<span style="font-weight:400">ligando a ledinha</span>

int botao = 2;
int led = 4;
bool estadoLed = 0;

void setup()
{
  pinMode(botao,INPUT_PULLUP);//definindo "INPUT"
  pinMode(led,OUTPUT);
}

void loop()
{
 if(digitalRead(botao)== LOW)//botao apertado
 {
   estadoLed = !estadoLed;//troca o LED 
   digitalWrite(led,estadoLed);
   while(digitalRead(botao)== LOW);
   delay(100);
 }
}
