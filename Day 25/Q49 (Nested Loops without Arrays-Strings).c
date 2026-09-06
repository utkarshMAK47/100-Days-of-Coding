/* Write a program to print the following pattern: 5 45 345 2345 12345 */
#include <stdio.h>
int main(void){for(int start=5;start>=1;start--){for(int n=start;n<=5;n++)printf("%d",n);putchar('\n');}return 0;}
