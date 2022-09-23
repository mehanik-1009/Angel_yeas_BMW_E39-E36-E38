/*#######################################################################################
################################Designed ARSindustries###################################
#######################################################################################*/

//leds[i].nscale8_video( 192); // Reduce color to 75% (192/256ths) of its previous value (яркость для светодиода)


#define LED_PIN_right_1 27//пин для правой фары
#define LED_NUM_right_1 8//кол-во элементов(чипов) массива ленты для правой фары
#define LED_PIN_left_1 12//пин для левой фары
#define LED_NUM_left_1 8//кол-во элементов(чипов) массива ленты для левой фары
#include "FastLED.h"
CRGB leds_right_1[LED_NUM_right_1];//массив для правой фары
CRGB leds_left_1[LED_NUM_left_1];//массив для левой фары

unsigned long timer_segment;
unsigned long timer_zajiganie;
int zajiganie;
boolean flag_zajiganie=true;
boolean flag_angel_yeas=true;


void setup() {
  Serial.begin(115200);
  FastLED.addLeds<WS2812, LED_PIN_right_1, RGB>(leds_right_1, LED_NUM_right_1); //задаем параметры для работы библиотеки(правая фара)
  FastLED.addLeds<WS2812, LED_PIN_left_1, RGB>(leds_left_1, LED_NUM_left_1); //задаем параметры для работы библиотеки (левая фара)
  //FastLED.setBrightness(255);
  //digitalWrite(rele, LOW);
  angel_yeas_ON();//функция анимации загорания наших глазок
  flag_angel_yeas=true;
}
//#######################################################################################################################################################################
void angel_yeas_ON(){  
  for(int i=0; i<=255; ){
    leds_right_1[6].setRGB(255, 255, 255);
    if(i==254) i=255;
    leds_right_1[6] %= i;
    leds_left_1[6].setRGB(255, 255, 255);
    leds_left_1[6] %= i;
    FastLED.show();
    i+=2;
  }
  for(int i=0; i<=255; ){
    leds_right_1[5].setRGB(255, 255, 255);
    if(i==254) i=255;
    leds_right_1[5] %= i;
    leds_left_1[5].setRGB(255, 255, 255);
    leds_left_1[5] %= i;
    FastLED.show();
    i+=2;
  }
  for(int i=0; i<=255; ){
    leds_right_1[4].setRGB(255, 255, 255);
    if(i==254) i=255;
    leds_right_1[4] %= i;
    leds_left_1[4].setRGB(255, 255, 255);
    leds_left_1[4] %= i;
    FastLED.show();
    i+=2;
  }
  for(int i=0; i<=255; ){
    leds_right_1[3].setRGB(255, 255, 255);
    if(i==254) i=255;
    leds_right_1[3] %= i;
    leds_left_1[3].setRGB(255, 255, 255);
    leds_left_1[3] %= i;
    FastLED.show();
    i+=2;
  }
  for(int i=0; i<=255; ){
    leds_right_1[2].setRGB(255, 255, 255);
    if(i==254) i=255;
    leds_right_1[2] %= i;
    leds_left_1[2].setRGB(255, 255, 255);
    leds_left_1[2] %= i;
    FastLED.show();
    i+=2;
  }
  for(int i=0; i<=255; ){
    leds_right_1[1].setRGB(255, 255, 255);
    if(i==254) i=255;
    leds_right_1[1] %= i;
    leds_left_1[1].setRGB(255, 255, 255);
    leds_left_1[1] %= i;
    FastLED.show();
    i+=2;
  }
  for(int i=0; i<=255; ){
    leds_right_1[0].setRGB(255, 255, 255);
    if(i==254) i=255;
    leds_right_1[0] %= i;
    leds_left_1[0].setRGB(255, 255, 255);
    leds_left_1[0] %= i;
    FastLED.show();
    i+=2;
  }
  timer_segment=millis();
  boolean k=false;
    while(k==false){
      if(millis()-timer_segment>=1000){
        leds_right_1[7].setRGB(0, 79, 255);
        leds_left_1[7].setRGB(0, 79, 255);
        FastLED.show();
        k=true;
      }
    }
}
//########################################################################################################################################################################
void angel_yeas_OFF(){
  int j=0;
  boolean g=false;
  while(g==false){
    if(j==0){
      leds_right_1[6].setRGB(0, 0, 0);
      FastLED.show();
      timer_segment=millis();
      j++;
    }
    if(j==1 && millis()-timer_segment>=100){
      leds_left_1[6].setRGB(0, 0, 0);
      FastLED.show();
      timer_segment=millis();
      j++;
    }
    if(j==2 && millis()-timer_segment>=100){
      leds_right_1[5].setRGB(0, 0, 0);
      FastLED.show();
      timer_segment=millis();
      j++;
    }
    if(j==3 && millis()-timer_segment>=100){
      leds_left_1[5].setRGB(0, 0, 0);
      FastLED.show();
      timer_segment=millis();
      j++;
    }
    if(j==4 && millis()-timer_segment>=100){
      leds_right_1[4].setRGB(0, 0, 0);
      FastLED.show();
      timer_segment=millis();
      j++;
    }
    if(j==5 && millis()-timer_segment>=100){
      leds_left_1[4].setRGB(0, 0, 0);
      FastLED.show();
      timer_segment=millis();
      j++;
    }
    if(j==6 && millis()-timer_segment>=100){
      leds_right_1[3].setRGB(0, 0, 0);
      FastLED.show();
      timer_segment=millis();
      j++;
    }
    if(j==7 && millis()-timer_segment>=100){
      leds_left_1[3].setRGB(0, 0, 0);
      FastLED.show();
      timer_segment=millis();
      j++;
    }
    if(j==8 && millis()-timer_segment>=100){
      leds_right_1[2].setRGB(0, 0, 0);
      FastLED.show();
      timer_segment=millis();
      j++;
    }
    if(j==9 && millis()-timer_segment>=100){
      leds_left_1[2].setRGB(0, 0, 0);
      FastLED.show();
      timer_segment=millis();
      j++;
    }
    if(j==10 && millis()-timer_segment>=100){
      leds_right_1[1].setRGB(0, 0, 0);
      FastLED.show();
      timer_segment=millis();
      j++;
    }
    if(j==11 && millis()-timer_segment>=100){
      leds_left_1[1].setRGB(0, 0, 0);
      FastLED.show();
      timer_segment=millis();
      j++;
    }
    if(j==12 && millis()-timer_segment>=100){
      leds_right_1[0].setRGB(0, 0, 0);
      FastLED.show();
      timer_segment=millis();
      j++;
    }
    if(j==13 && millis()-timer_segment>=100){
      leds_left_1[0].setRGB(0, 0, 0);
      FastLED.show();
      timer_segment=millis();
      j++;
    }
    if(j==14 && millis()-timer_segment>=1000){
      for(int i=256; i>=1; ){
        i--;
        leds_right_1[7] %= i;
        leds_left_1[7] %= i;
        FastLED.show();
      }
      j++;
      g=true;
    }
  }
}

void loop() {
  zajiganie=analogRead(32);
  if(zajiganie>1000 && flag_zajiganie==false){
    flag_zajiganie=true;
  }
  if(zajiganie<1000 && flag_zajiganie==true){
    timer_zajiganie=millis();
    flag_zajiganie=false;
  }
  if(flag_angel_yeas==false && flag_zajiganie==true){
    angel_yeas_ON();
    flag_angel_yeas=true;
  }
  if(millis()-timer_zajiganie>=20000 && flag_zajiganie==false && flag_angel_yeas==true){
    angel_yeas_OFF();
    flag_angel_yeas=false;
  }
}
