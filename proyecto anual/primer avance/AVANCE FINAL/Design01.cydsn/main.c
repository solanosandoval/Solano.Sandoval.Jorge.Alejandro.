/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <stdio.h>

int main(void)
{
    PWM_Servo_Start();
    Clock_Start();
    
    
    
    
    int x=12000,y,z;
    
    //for(;;){
        
        for(x=12000; x<=30000; x+=500){
            PWM_Servo_WriteCompare(x);
            x--;
            y=(x/50)-115;
            CyDelay(400);
        }
            //for(x=29600; x<=12000; x+=500){
            //PWM_Servo_WriteCompare(x);
            //x++;
            //z=(x/50)-115;
            //CyDelay(100);
        //}
            
}
//}


/* [] END OF FILE */
