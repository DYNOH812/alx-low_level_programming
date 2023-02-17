#include<stdio.h>
/**
*main -print out sizes of data in c
*Return: 0
*/
int main(void)
{
printf("Size of char is %lu byte(s)\n", Sizeof(char));
printf("Size of int is %lu byte(s)\n", Sizeof(int));
printf("Size of long int is %lu byte(s)\n", Sizeof(long int));
printf("Size of long long int is %lu byte(s)\n", Sizeof(long long int));
printf("Size of float %lu byte(s)\n", Sizeof(float));
return (0);
}
