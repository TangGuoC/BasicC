#include <stdio.h>

int main()
{

    /*如何获取数组有多少个元素：数组的总长度 / 每个元素的长度/
    int array[BUFFER_SIZE] = { 0 };

    int arrayLen = sizeof (array);
    printf("len:%d\n", arrayLen);

    int elementLen = sizeof(array[0]);
    printf("len:%d\n", elementLen);

    int length = arrayLen \ elementLen ;
    printf("length:%d\n", length);


    /* 字符数组*/
    /*Q1:什么叫做字符？*/
    char pNum = 'a';
    printf("pNum:%c\n", pNum);

    /*只要是指针的变量，变量定义第一个需要是p开头*/
    char * ptr = "hello world";
    printf("ptr:%s\n", ptr);
      
    char buffer[] = {'h', 'e' , 'l' , 'l', 'o', 'w', 'o', 'r' ,'l', 'd'};
    int buflen = sizeof(buffer);
    printf("buflen:%d\n",buffer = %s\n, buflen , buffer );

#if 1
    /*字符数组初始化定义的二种方式*/
    char buffer1[] = "hello world";
    /*如果是以双引号（字符串）的方式 默认加上'\0'*/
    char buffer2[] = {'h', 'e' , 'l' , 'l' , 'o' , 'w' , 'o' , 'r' , 'l' , 'd' };
    /*如果是以单引号（字符串）的方式 默认不会加上'\0'*/

    int buflen1 = sizeof (buffer1);
    int buflen2 = sizeof (buffer2);

    printf("&buffer1:%p\n", buffer1);
    printf("&buffer2:%p\n", buffer2);
    printf("&buffer3:%p\n", buffer3);


    printf("buflen1:%d, \tbuflen2:%d\n", buflen1 , buflen2);
    printf("&buffer1:%s\n", buffer1);
    printf("&buffer2:%s\n", buffer2);
    printf("&buffer3:%s\n", buffer3);
    return 0 ;





}