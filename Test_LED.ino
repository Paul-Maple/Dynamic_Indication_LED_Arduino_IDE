  /*
  Библиотека предназначена для работы с индикаторами как с общим катодом (ОК), так и с общим анодом (ОА)
  Работает только с 2-х, 4-х или 6-ти разрядным индикатором
  Двухразрядный отображает числа от 0 до 99
  Четырёхразрядный отображает числа от 0 до 9 999
  Шестиразрядный отображает числа от 0 до 999 999
  ВАЖНО!!!!!!!
  Внутри void loop() нельзя писать delay(). 
  НИКАКИХ delay!!!!!!! 
  Даже delay(1)!!!!!!!!!!!!
  Иначе РАБОТАТЬ НЕ БУДЕТ!!!!!!!!!!!!
  */
  //Это пример для 4-х разрядного индикатора с общим катодом

  #include "Dynamic_Indication_LED.h"
  // Определяем пины к которым подключёны сегменты индикатора (Слева - сегменты индикатора, справа - пины Arduino)
  #define A A5 // Сегмент А
  #define B A4 // Сегмент B
  #define C A3 // Сегмент C
  #define D A2 // Сегмент D
  #define E A1 // Сегмент E
  #define F A0 // Сегмент F
  #define G 13 // Сегмент G
  #define DP 4 // Сегмент точка // В данном примере точка не используется (Не отображается никогда)
  
  #define  SEG1 9 // Общий пин сегмента 1
  #define  SEG2 10 // Общий пин сегмента 2
  #define  SEG3 11 // Общий пин сегмента 3
  #define  SEG4 2 // Общий пин сегмента 4
  #define  SEG5 1 // Общий пин сегмента 3
  #define  SEG6 0 // Общий пин сегмента 4

  #define  commonPIN 0 // Общий катод (ОК) - "1", общий анод (ОА) - "0"
  // Создаём объект "MyLED"

  //Indicator MyLED (A,B,C,D,E,F,G,DP,SEG1,SEG2,commonPIN); // 2-ти сегментный индикатор
  //Indicator MyLED (A,B,C,D,E,F,G,DP,SEG1,SEG2,SEG3,SEG4,commonPIN); // 4-ти сегментный индикатор
  Indicator MyLED (A,B,C,D,E,F,G,DP,SEG1,SEG2,SEG3,SEG4,SEG5,SEG6,commonPIN); // 6-ти сегментный индикатор
  
void setup() 
{
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(DP, OUTPUT);

  pinMode(SEG1, OUTPUT);
  pinMode(SEG2, OUTPUT);
  pinMode(SEG3, OUTPUT);
  pinMode(SEG4, OUTPUT);
  pinMode(SEG5, OUTPUT);
  pinMode(SEG6, OUTPUT);
}

void loop() 
{
  MyLED.display(123456); // Отображаем число 123456
}
