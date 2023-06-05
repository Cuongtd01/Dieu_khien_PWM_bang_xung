#include <main.h>

void main()
{
   setup_timer_2(T2_DIV_BY_16,100,1);//tan so chia nho 16 lan, Tmax, ti le
   setup_ccp1(CCP_PWM);
   setup_ccp2(CCP_PWM);
   set_pwm1_duty(50);
   set_pwm2_duty(0);//Tat xung 2 se quay cung chieu kdh va xung 1 se ngc lai
   //ca 2 cung bat voi chu ky may bang nhau thi se k quay
   
   while(TRUE)
   {


      //TODO: User Code
   }

}
