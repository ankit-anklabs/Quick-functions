//Variable Declaration
const float voltage = 5;          //set ADC voltage
const int Resolution = 1023;      //set ADC Resolution
float qcal=0;                     //Temporary global variable

void LM35_begin();                //run once
float LM35_Celsius(int adcval);   //Input pararmeter RAW ADC VAL
float LM35_fahrenheit(int adcval);//Input pararmeter RAW ADC VAL
float LM35_Kelvin(int adcval);    //Input pararmeter RAW ADC VAL

LM35_begin();
LM35_Celsius();
LM35_fahrenheit();
LM35_Kelvin();

float LM35_Celsius(int adcval){
  float Temp = 0;
  Temp = (adcval * qcal);
  return Temp;
}
float LM35_fahrenheit(int adcval){
  float Temp = 0;
  Temp = ((adcval * qcal)* 1.8) + 32;
  return Temp;
}
float LM35_Kelvin(int adcval){
  float Temp = 0;
  Temp = (adcval * qcal) + 273.15;
  return Temp;
}
