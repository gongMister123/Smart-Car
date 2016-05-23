#include "PIT.H"

void Pit_Init(void)
{    
        PITCFLMT_PFLMT=pitcflmt_pflmt;                                                    
        PITFLT_PFLT=pitflt_pflt;     
        PITMUX_PMUX=pitmux_pmux;       
        PITINTE_PINTE=pitinte_pinte;                                                 
        PITCFLMT_PITE=pitcflmt_pite;
        PITCE_PCE=pitce_pce;

        PITMTLD0=pitmtld0;     //8-bit time=(PITMTLD0+1)*(PITLD0+1)/fbus              
        PITLD0=pitld0;     //16-bit   
    
        RDRT_RDRT7=0; //������ʹ��
        DDRT_DDRT7=0;
        PTT_PTT7=1;
        PERT_PERT7=1;//��ʹ��
        PPST_PPST7=1;//����
               
}


//////////////////////////////////////////////////////////////////��������ģ��
void Pit2_Init(void)
{     
        PITCFLMT_PFLMT=pitcflmt_pflmt2;//PITǿ��װ�ص�С�Ͷ�ʱ��ʹ��  ��micro time base 0or1��.                                                   
        
        PITFLT_PFLT=pitflt_pflt2; //��ʱ��0ʹ��    
        
        PITMUX_PMUX=pitmux_pmux2;  //16λ��ʱ�����ӵ�΢ʱ��0��micro time base 0��.     
        
        PITINTE_PINTE=pitinte_pinte2; //  PIT  Channel 1��ʱ�ݳ��ж�ʹ��                                        
        
        PITCFLMT_PITE=pitcflmt_pite2; //  �ܼ�����ʹ��
        
        PITCE_PCE=pitce_pce2; //PITͨ��1ʹ��
               
        PITLD1=pitld02;     //16-bit   
        
        PITMTLD1=pitmtld02 ; //8-bit*/
       
        /*PITCFLMT_PITE=1;
        PITCE_PCE1=1;
        PITMTLD1=250-1;
        PITLD1=40000-1;
        PITINTE_PINTE1=1;
        PITCFLMT_PITE= 1;  */
      
                             
}
//////////////////////////////////////////////////////////////////////////////
