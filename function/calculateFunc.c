#include "calculateFunc.h"                                                                                                                              #include "caleuateFunc.h"
#include <stdio.h>
#include <string.h>
/*源文件（.c）一般是函数的实现*/

#if 0
 typedef enum  STATUS_CODE
{
   ON_SUCCESS,
   ON_ERROR = -5,
   ON_NULLPTR,
   ON_MALLOCFAIL,
   ON_INVALIDACCESS;
} STATUS_CODE;

/*取别名*/
typedef enum STATUS_CODE STATUS_CODE;

/*加法*/
int calculateAdd(int num1 , int num2)
{
   int sum = (num1 + num2);
  return sum
}

/*加法*/
int calculateAdd(int num1, int num2)
{

   int sum = (num1 + num2);
    return sum;
}


/*减法*/
int calculateSub(int num1, int num2)
{
    sum = num1 - num2;
}

/*乘法*/
int calculateSub(int num1, int num2)
{
   int amass= num1 * num2;
   return amass;
}

/*除法*/
int calculateDiv(int num1, int num2)
{
    if (num2 == 0)
    {
      return ON_INVALIDACCESS;
    }
    return num1 / num2;
} 
#endif

#if 1

 int num1 = 50; 
 int num2 = 60;
 int sum = calculateAdd(num1, num2);
 printf("sum: %d\n", sum);

 int num3 = calculateSub(num1, num2);
 printf("num3: %d\n", num3);

 int amass= calculateMul(num1, num2);
 printf("amass: %d\n", amass);

 int num4 = calculateDiv(num1, num2); 
 printf("num4: %d\n", num4);

return 0;







return 0;



