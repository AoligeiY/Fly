#include "stm32f4xx.h"                  // Device header
#include "MPU6050.h"
#include "HMC5883L.h"
#include "Delay.h"
#include "Serial.h"
#include "PWM.h"
#include "IC.h"
#include "ICa.h"

//MPU6050_DataTypeDef Data1;
//HMC5883L_DataTypeDef Data2;

	float motor1, motor2, motor3, motor4;
	
	int16_t AX, AY, AZ, GX, GY, GZ;
	
	uint32_t	num;
int main(void)
{
	Serial_Init();
//	MPU6050_Init();
//	HMC5883L_Init();
	
	PWM_Init();
//	Motor_Start();	
	TIM_SetCompare1(TIM3,600);
//	Delay_s(7);
//	TIM_SetCompare1(TIM3,0);
	
	
//	IC_Init();
	ICa_Init();

	//printf("1234");
	

	while(1)
	{
//		TIM_SetCompare1(TIM3,PWM_IN_CH[0]*PWM_IN_OUT_VAL);
//		num = PWM_IN_CH[0];
		num = ICa_GetFreq();
//		num = PWM_IN_CH[0]*PWM_IN_OUT_VAL;
		//(1000000*155)
//		num =	TIM_GetCapture1(TIM4);
		printf("%d   ",num);
		
		/*  串口发送GY86数据  */
		

//		MPU6050_GetData(&Data1);
//		printf(" AccX: %d   ",Data1.AccX);
//		printf(" AccY: %d   ",Data1.AccY);
//		printf(" AccZ: %d   ",Data1.AccZ);
//		printf(" GyroX: %d   ",Data1.GyroX);
//		printf(" GyroY: %d   ",Data1.GyroY);
//		printf(" GyroZ: %d   ",Data1.GyroZ);
		
		//123
//		HMC5883L_GetData(&Data2);

//		printf(" AX: %d \n",AX);
//		printf(" AY: %d \n",AY);
//		printf(" AZ: %d ",AZ);
//		printf(" GX: %d ",GX);
//		printf(" GY: %d ",GY);
//		printf(" GZ: %d ",GZ);
		
		Delay_ms(100);
		
		

	}
}
