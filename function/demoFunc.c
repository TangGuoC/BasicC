#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "calculateFunc.h"


/*函数名*/
/*函数参数：可以没有 也可以有*/
/*函数返回值：可以没有 也可以有
            没有的情况要加void
            如果有，返回你想要的数据类型{int long short char double float}
*/

/*什么叫API: 应用程序接口 函数*/

//函数的定义

#if 0
// case1:没有参数，没有返回值
void purchaseAppoinThing()
{
  printf("purchase a phone\n");
} 

#endif

#if 0
//case2：有参数，没有返回值
// 函数参数一定有数据类型 
void myAddNum1(int num1, int num2 )
   {
      int sum  = num1 + num2;
      printf("sum:%d\n", sum);
   }
#endif

#if 0
 //case3:有参数， 有返回值
 int myAddNum2 (int num1, int num2 )
   {
      int sum  = num1 + num2;
      printf("sum:%d\n", sum);
      return sum;//有返回值写return
   }

#endif

#if 0
int main()
 {
      //函数的调用 
      purchaseAppoinThing();

      int num1 = 5;
      int num2 = 6;

      //函数的使用
      myAddNum1(num1, num2);
      int totalSum = myAddNum2(num1, num2);
      int transFormerPrice = 10;
      if (totalSum > transFormerPrice)
      {
         printf("get a transFormerPrice\n");
      }
      else
      {
        printf("l not a totalSum\n");
      }
 }
   return 0;
#endif

#if 0

/*枚举  他是一种数据类型*/
typedef enum STATUS_CODE
{
   ON_SUCCESS,
   ON_ERROR,
   ON_NULLPTR,
   ON_MALLOCFAIL,
   ON_INVALIDACCESS,
} STATUS_CODE;


/*取别名*/
typedef enum STATUS_CODE STATUS_CODE;                                                                                                                                                                                                                                                                                                                                                                                                                                                                        

#endif 

#if 0
int main()
{
   STATUS_CODE status;
   int len = sizeof(status);
   printf("len:%d\n", len);
}
return 0;
#endif

#if 1
  int main ()
  {
      int num1 = 50;
      int num2 = 60;
      int sum = calculateAdd(num1, num2);
      printf("sum:%d\n", sum);

      int num3 = calculateSub(num1, num2);
      printf("sum:%d\n", num3);

      int amass = calculateMul(num1, num2);
      printf("sum:%d\n", amass);


      int num4 = calculateDiv(num1, num2);
      printf("sum4:%d\n", num4);


      return 0;
  }
  



#endif


 