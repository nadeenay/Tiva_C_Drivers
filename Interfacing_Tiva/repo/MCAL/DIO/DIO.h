

#ifndef REPO_MCAL_DIO_DIO_H_
#define REPO_MCAL_DIO_DIO_H_


/* Configuration for the pin */
struct GPIO_Config
{
   unsigned int  PORT;  /* Port Required */
   const u8 PIN;   /* Pin Required */
   const PIN_DIR DIR;  /* Pin direction */
   const Pin_Drive_C C_strength;  /*Required current strength*/
   const Pin_Func FUNC ;    /* Pin FUNC (pull_up,pull_Down...) */
};


/* UNLOCK CODE FOR REGISTER GPIOCR */
/* We should unlock (GPIOLOCK register by put the unlock code in it
 * and Set the pins of GPIOCR So we can use the special consideration pins */
#define Unlock_Code 0x4C4F434B


//-----------------------------------------> public functions <-----------------------------------------//

void GPIO_Set_Current_Str(Pin_Drive_C Drive,ul* BASE,u8 Pin_Num);


void GPIO_Set_Pin_Functionality(Pin_Func Func,ul* BASE,u8 Pin_Num);


 ul* GPIO_Get_BASE(unsigned int Port);


void GPIO_SetPinDirection( ul* BASE,u8 Pin_Num, PIN_DIR Direction);


void GPIO_SetPinValue(const ul* BASE,u8 Pin_Num,PIN_VAL Pin_Value);


u8 GPIO_GetPinValue(const ul* BASE,u8 Pin_Num);


void GPIO_Digital_Pin_Enable( ul* BASE,u8 Pin_Num);


void GPIO_Port_Enable(u8 Port);


void GPIO_Config(struct GPIO_Config C1);


#endif /* REPO_MCAL_DIO_DIO_H_ */
