float tempC; // Cria variável para armazenar temperatura
int tempPin = 0; // Declara o pin analógico 0
void setup()
{
 Serial.begin(9600); // Abre porta serial, inicializa dados a 9600 bps
}
void loop() // O código continuará a ficar em loop
{
 tempC = analogRead(tempPin); // Le o valor analógico do sensor LM35
 // Converte a entrada de temperatura em graus centigrados
 tempC = (5.0 * tempC * 100.0)/1024.0;
 // Imprime no monitor serial - Lendo temperatura...
 Serial.println("Lendo temperatura ... ");
 Serial.print((byte)tempC); // Envia dados para o computador
 Serial.println(" C"); // Imprime o C de Celsius no monitor serial
 delay(1000); // Espera 1 segundos
//condição para funcionamento ou não do alarme
if (-55>tempC>150)
// Armazena o valor de seno que fazer o valor se elevar e diminuir
float sinVal;
// Pega o valor armazenado em sinVal e converte-o para frequência...
//solicitada

int toneVal;
void setup() 
{
  pinMode(8, OUTPUT); // Declara o pino 8 como saída
}
void loop() 
// Converte graus para radianos, e depois obtém o valor do seno
for (int x=0; x<180; x++)
{
// Gera uma frequência a partir do valor do seno
sinVal = (sin(x*(3.1416/180)));// Pega 2000 e adiciona sinVal multiplicando por 1000, gerando um...
//bom intervalo de frequências para o tom crescente e decrescente da...
//onda senoidal
toneVal = 2000+(int(sinVal*1000));
// O comando ton( ) é definido como ton(pin, frequency), o pin...
//corresponde o pino digital de saída e frequency é a frequência do...
//tom em Hertz
tone(8, toneVal);
delay(2); // Espera dois milissegundos entre as alterações de frequência
}
if (tempC<=-55 ou tempC>=180)
int ledPin = 10; // Declaramos uma variável inteira com valor igual a...
//10 (conectada no pino 10 do Arduino)
void setup() { // Esta função é executada somente uma vez no início...
//do programa
pinMode(ledPin, OUTPUT); // Define ledPin como pino de saída
}
void loop() { // Esta é a função principal do programa, será executada...
//continuamente enquanto o Arduino estiver ligado
digitalWrite(ledPin, HIGH); // Esta enviado 5 volts para o pino 10 do Arduino
delay(1000); // Diz ao Arduino espera 1000 milisegundo antes de executar...
//a próxima instrução
digitalWrite(ledPin, LOW); // Diz para o Arduino desligar o pino 10...
//deixando-o em 0 volts
delay(1000); // Espera mais 1000 segundos


}
