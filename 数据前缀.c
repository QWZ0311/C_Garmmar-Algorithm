//各种前缀 
#include <stdio.h>
int main ()
{
    int a=1;
    printf("%d\n",a);//十进制整数
    printf("%o\n",a);//八进制整数
    printf("%x\n",a);//十六进制整数
    printf("%#o\n",a);//八进制整数并显示前缀
    printf("%#x\n",a);//十六进制整数并显示前缀
    float b=1.0;
    printf("%f\n",b);//浮点数
    printf("%.2f\n",b);//保留两位的浮点数
    printf("%u\n",a);//无符号整数
    printf("%ld\n",a);//长整数，其余进制同理
    printf("%hd\n",a);//短整数，其余进制同理
    printf("%lf\n",b);//双精度

//   指定长度、浮点，以及左端对齐
//     int a =0,b=0;
//     float c=0.0;
//     scanf("%d %d %f",&a,&b,&c);  
//     printf("%-*.*f",a,b,c);
//     return 0;



    return 0;

}