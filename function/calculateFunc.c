#include <stdio.h>               
#include "calculateFunc.h" 
/*源文件（.c）一般是函数的实现*/


 typedef enum  STATUS_CODE
{
   ON_SUCCESS,
   ON_ERROR,
   ON_NULLPTR,
   ON_MALLOCFAIL,
   ON_INVALIDACCESS,
} STATUS_CODE;

/*加法*/
int calculateAdd(int num1, int num2)
{
   int sum = (num1 + num2);
   return sum;
}

/*减法*/
int calculateSub(int num1, int num2)
{
   return num1 - num2;
}

/*乘法*/
int calculateMul(int num1, int num2)
{
   int amass= num1 * num2;
   return amass;
}

/*除以*/
int calculateDiv(int num1, int num2)
{
    if (num2 == 0)
    {
      return ON_INVALIDACCESS;
    }
      return num1 / num2;
}