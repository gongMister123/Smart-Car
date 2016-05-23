#ifndef B_h
#define B_h

//#include <mc9s12xs128.h>
//#include "KBD.h"

//////////////////////////////////////////
//	��ʱ����
//
//////////////////////////////////////////
 void init_key(void)
{
	PUCR_PUPBE = 1;	//�������� 
}



void delayms(word time)
{
    word x,y;
    for(x=10000;x>0;x--) //40MHz 0.5ms
    {
      for(y=time;y>0;y--);
    }
}

//////////////////////////////////////////
//	kscan	����ɨ�����
//
//////////////////////////////////////////
byte kscan(byte mod)   // mod ģʽ	
{						// mod = 1	�����ͷź����Ч mod = 0 ���������������ؼ�ֵ
  byte key = 20;
  byte temp = 0,temp1 = 0,temp2 = 0;
  
  DDRB = 0xF0;
  PORTB = 0x0F; 
	
	if((PORTB&0x0F)==0x0F);
	else
  {
     delayms(1);
    if((PORTB&0x0F)!=0x0F)         //����ȥ��
    {
      temp1=PORTB&0x0F;
      DDRB = 0x0F;
  		PORTB = 0xF0;
  		
  	 delayms(1);
  		temp2=PORTB&0xF0;  
      
      if(mod == 1)
        while((PORTB&0xF0)!=0xF0);    //�ȴ����ͷ�
      else;  
      
    delayms(20);
        temp = temp1|temp2;
    	
      	switch(temp)
      	{
      		case 0b01110111:key=1;break;
      		case 0b01111011:key=2;break;
      		case 0b01111101:key=3;break;
      		case 0b01111110:key=4;break;
      		
      		case 0b10110111:key=5;break;
      		case 0b10111011:key=6;break;
      		case 0b10111101:key=7;break;
      		case 0b10111110:key=8;break;
      		
      		case 0b11010111:key=9;break;
      		case 0b11011011:key=10;break;
      		case 0b11011101:key=11;break;
      		case 0b11011110:key=12;break;
      		
      		case 0b11100111:key=13;break;
      	  case 0b11101011:key=14;break;
      		case 0b11101101:key=15;break;
      		case 0b11101110:key=16;break;
      		
      		default :break;
      }
    }
  }
  return key;		
}
//////////////	˵�� 	///////////////
//	���̳�ʼ��ֻҪ�����̵Ķ˿��ڲ�����
//	��û�м�����ʱ�����صļ�ֵΪ20




#endif