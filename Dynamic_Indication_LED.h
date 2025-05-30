 // #include <stdio.h>  
  //#include <Arduino.h>

#ifndef DYNAMIC_INDICATION_LED_H
#define DYNAMIC_INDICATION_LED_H

class Indicator
{
  private:
  bool commonPIN; // Общий пин
  bool HIGH_Level;
  bool LOW_Level;
  uint8_t countSEG;

	uint8_t A;
	uint8_t B;
	uint8_t C;
	uint8_t D;
	uint8_t E;
	uint8_t F;
	uint8_t G;
	uint8_t DP;

	uint8_t SEG1;
	uint8_t SEG2;
  uint8_t SEG3;
	uint8_t SEG4;
  uint8_t SEG5;
	uint8_t SEG6;

  void display_segment(uint8_t segment, uint8_t digit);
  uint8_t calculate_zifra(uint32_t number, int position);
  void set_segment(uint8_t segment, bool on);
  void display_zifra(uint8_t digit);
  
  void display_zifra_1();
	void display_zifra_2();
	void display_zifra_3();
	void display_zifra_4();
	void display_zifra_5();
	void display_zifra_6();
	void display_zifra_7();
	void display_zifra_8();
	void display_zifra_9();
	void display_zifra_0();
	void zifra_off();

  public:
  Indicator(uint8_t pinA,uint8_t pinB,uint8_t pinC,uint8_t pinD,uint8_t pinE,uint8_t pinF,uint8_t pinG,uint8_t pinDP,
  uint8_t pinSEG1,uint8_t pinSEG2,uint8_t pinSEG3,uint8_t pinSEG4,uint8_t pinSEG5,uint8_t pinSEG6,bool comPIN);

  Indicator(uint8_t pinA,uint8_t pinB,uint8_t pinC,uint8_t pinD,uint8_t pinE,uint8_t pinF,uint8_t pinG,uint8_t pinDP,
  uint8_t pinSEG1,uint8_t pinSEG2,uint8_t pinSEG3,uint8_t pinSEG4,bool comPIN);

  Indicator(uint8_t pinA,uint8_t pinB,uint8_t pinC,uint8_t pinD,uint8_t pinE,uint8_t pinF,uint8_t pinG,uint8_t pinDP,
  uint8_t pinSEG1,uint8_t pinSEG2,bool comPIN);

  bool display (uint32_t chislo);

};

#endif 
