#include<stdio.h>
/**
*main -print out sizes of data in c
*Return:0
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of char is %lu byte(s)\n",(unsigned long)Sizeof(a));
printf("Size of int is %lu byte(s)\n",(unsigned long)Sizeof(b));
printf("Size of long int is %lu byte(s)\n", (unsigned long)Sizeof(c));
printf("Size of long long int is %lu byte(s)\n",(unsigned long)Sizeof(d);
printf("Size of float %lu byte(s)\n",(unsigned long)Sizeof(f));
return (0);
}
