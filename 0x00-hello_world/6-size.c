#include<stdio.h>

/**
*main -print out sizes of data in c
*
* Return:0 on success
*/

int main(void)
{
printf("Size of  char: %lu bytes(s)", sizeof(char));
printf("Size of  int: %lu bytes(s)", sizeof(int));
printf("Size of  long int: %lu bytes(s)", sizeof(long int));
printf("Size of  long long int: %lu bytes(s)", sizeof(long long int));
printf("Size of float: %lu bytes(s)", sizeof(float));
return (0);
}
