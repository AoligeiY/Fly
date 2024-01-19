#ifndef _MPU6050_H_
#define _MPU6050_H_

typedef struct 
{
	int16_t AccX;
	int16_t AccY;
	int16_t AccZ;
	int16_t GyroX;
	int16_t GyroY;
	int16_t GyroZ;
}MPU6050_DataTypeDef;

void MPU6050_WriteReg(uint8_t reg, uint8_t data);
uint8_t MPU6050_MPUReadReg(uint8_t reg);
void MPU6050_Init(void);
uint8_t MPU6050_GetID(void);
void MPU6050_GetData(MPU6050_DataTypeDef* Data);
//void MPU6050_GetData(int16_t *AccX, int16_t *AccY, int16_t *AccZ, 
//						int16_t *GyroX, int16_t *GyroY, int16_t *GyroZ);

#endif
