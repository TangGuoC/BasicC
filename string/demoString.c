#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 32


/*作业：手写字符串*/
int main()
{
#if 0

     /*字符数组*/
    char array[BUFFER_SIZE];
    /*数组初始化*/
    memset(array , 0, sizeof(array));

    int len = sizeof(array);
    printf("len:%d\n", len);
    
#endif

#if 0

    char array[BUFFER_SIZE] = "hello world";
    int len = sizeof(array);
    printf("len:%d array:%s\n", len, array);

#endif

#if 0

    /*字符串（字符数组）*/
    char array[BUFFER_SIZE] = "hello world";
    /*第一个 strlen 获取字符串的长度*/
     int len = strlen(array);
     printf("len:%d\n", len);

    /*第二个 strcpy*/
    char array2[BUFFER_SIZE];
    memset(name, 0, sizeo(name));
    strcpy(name, "zhangsan");
    printf("name:%s\n", name);

    /*第三个 strcat*/
    strcat(name, "is a boy");
    printf("name:%s\n", name);

    /*第四个 strcmp*/
    char name2[BUFFER_SIZE] ="wangwu";
    int ret = strcmp(name, name2);
    printf("ret:%d\n", ret);

#endif

#if 1
    /*字符串（常量）*/
    /*指针出入*/
    char * ptr = "hello world"
    int len = strlen(ptr);
    int size = sizeof(ptr);

    printf("len:%d\n", len);
    printf("size:%d\n", size); 

    printf("*ptr:%c\t *(ptr + 1)%c\t, ptr:%s\t", *ptr, *(ptr + 1), ptr);

    *(ptr + 1) = 'H';   
     printf("*ptr:%c\t *(ptr + 1)%c\t, ptr:%s\t", *ptr, *(ptr + 1), ptr);

#endif

    return 0;
}