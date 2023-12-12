#ifndef _CALCULATE_FUNC_H_
#define _CALCULATE_FUNC_H_


// 尽量不要在.h文件里打头文件
/*避免头文件重复包含*/

/*头文件（.h）一般是函数的声明*/
 


/*加法*/
int calculateAdd(int num1, int num2)
{
    return num1 + num2;
}
/*减法*/
int calculateSub(int num1, int num2)
{
    return num1 - num2;
}

/*乘法*/
int calculateMul(int num1, int num2)
{
    return num1 * num2;
}

/*除法*/
int calculateDiv(int num1, int num2)
{
    return num1 / num2;
}


#endif //_CALLCULATE_FUNC_H_