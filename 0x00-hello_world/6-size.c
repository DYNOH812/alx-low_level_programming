#include<stdio.h>
/**
*main -print out sizes of data in c
*
* Return:0
*/
int main(void)
{
printf("Size of  char: %lu bytes(s)\n", sizeof(char));
printf("Size of  int: %lu bytes(s)\n", sizeof(int));
printf("Size of  long int: %lu bytes(s)\n", sizeof(long int));
printf("Size of  long long int: %lu bytes(s)\n", sizeof(long long int));
printf("Size of float: %lu bytes(s)", sizeof(float));
return (0);
}
