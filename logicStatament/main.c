#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
#if 0
    /*判断语句*/
    int budget = 5000;
    int apple = 6500;
    int mi14pro = 4399;
    int huaweip60 = 6000;

    if (budget > mi14pro)
    {
        printf("get a apple!\n");   
    }
    else if (budget > mi14pro );
    {
        /* code */
        printf("get a mi14proe!\n");
    }
    else if (budget > mi14pro );
    {
         printf("get a huaweip60!\n");
    }
#endif


#if 0
    int budget = 5000;
    int minbudget = 5500;
    int maxbudget = 8000;


    int apple = 6500;
    int mi14pro = 4399;
    int huaweip60 = 6000;
     /*只要有一个条件符合，就回到1*/
    if (budget < apple || budget > mi14pro)
    {  
       printf ("l am happy, get a phone \n ");
    }
    else 
    {
      printf ("l am sad, no phone \n ");
    }

     /*两边都被满足，就返回1，否则返回0*/
    if ((minbudget < budget) && (budget > maxbudget))
    {
     printf ("success get a phone \n ");
    }
     else
    {
     printf ("error get a phone \n ");
    }
#endif

/*代码规范：一个函数尽量不要超过80行 最多不要超过120行*/ 
#if 0
     /*坑：每一个case都需要一个break*/
     int choice = 0;
     printf("输入你的选项");
     scanf(%d ,&choice);

    switch (choice)
    {
    case REGISTER :
    {
    /*坑2：如果case里面的语句过多，一定需要加{}包括*/  
        printf("welcome to register\n");
    }
        break; 

    case LOGIN :
    {
        printf("welcome to login\n");
    }
        break;

    case QUIT :
    {  
        printf("welcome to quit\n");
    }
        break;

    default:
    {
        printf("input choice invalid\n");
    } 
        break;
    }

#endif


#if 0
/*状态码*/
enum STATUS_CODE
{

  REGISTER = 1;
  LOGIN 
  QUIT

}

  /*宏定义*/
  /*代码规范：宏必须全部大写*/
  #define COUNT_NUM  100


#endif

#if 0
    srand(time(NULL));

     /* 循环 */
     /* for 循环 */

     /*编码规范:不允许使用i*/
     /*编码规范:不允许使用魔鬼数字*/
     int andomNum = 1; 
     for (int idx = 0; idx  < COUNT_NUM; idx++)
     {
        /* code */
        randomNum = rand() % RANGE_NUM + 1;
        printf("randomNum:%d\n", randomNum );
     }

#endif
#if 1

     /*写了一个100以内的数 [1 - 100]*/
     int randomNum = rand() % 100 + 1;
     printf ("randomNumv:%d\n", randomNum );

     randomNum = rand() % 100 + 1;
     printf ("randomNum :%d\n", randomNum );
#endif


#if 0
  /*代码规范：变量尽量用驼峰式命名*/
  int circleTimes = COUNT_NUM >> 1; 
  int randomNum = 0;

  /*一定需要有退出的条件*/
  while (--circleTimes)
  {
    randomNum = rand() % RANGE_NUM + 1;
    printf("randomNum:%d\n", randomNum );
  }
  
#endif
#if 1
    
     int varaNum = 0;\
     do
     {
        /* code */
        printf("varaNum:%d\n",varaNum );
     } while (varaNum);
     
 
   

#endif

    return 0;
}