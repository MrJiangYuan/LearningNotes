// main函数的参数
#include <stdio.h>

int main(int argc,char *argv[])
{
    for(int i = 1; i < argc; i++)
    {
        printf("argv[%d]=%s\n",i,argv[i]);
    }
    
    return 0;
}
