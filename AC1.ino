variaveis da led; 
const int vermelho = 5;
const int verde = 6;
const int azul = 7;

bool estadoLedVermelho = false;

const int botao1 = 2;
unsigned long lastDebounceTime1 = 0;
const int botaoDelay = 100;

 @@ - 22,7 +22,7 @@ void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  
  pinMode(vermelho, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, saida);
  
  Serial.begin(9600);
	
  Serial.println("AC1 - Meu Primeiro Projeto 2021");
  Serial.println("                           V1.0");
  Serial.println("Grupo: RAPOSOS AVENTUREIROS                ");
}

@@ -33,33 +33,33 @@ void loop()
{
  if((millis() - lastDebounceTime1) > botaoDelay && digitalRead(botao1)){
  	Serial.println("botao 1 apertado");
    ledVermelho();
  	lastDebounceTime1 = millis();
  }
  
  verificador de temperatura 
  if(getTemperatura() > 15){
    ledAzul(true);
  }else{
  	ledAzul(falso); 
  }
  	
  delay(15);
}

void ledVermelho(){
  estadoLedVermelho = !estadoLedVermelho;
  digitalWrite(vermelho,estadoLedVermelho);
}
void ledVerde(){
  estadoledVerde = !estadadoledVerde;
  digitalWrite(verde , estadoLedVerde); 
}
void ledAzul(){
 estadoledAzul = !estadoledAzul; 
digitalWrite(azul,estadoLedAzul);
}

int getTemperatura(){
  	int temperaturaC;
	temperaturaC = map(((analogRead(A0) - 20) * 3.04), 0, 1023, -40, 125);
  	return temperaturaC;
} 
funcao de leitura da luminosidade; 
int getLuminosidade(){
  	int luminosidade;
	luminosidade = map(analogRead(A1), 6, 619, -3, 10);
  	return luminosidade;
}
