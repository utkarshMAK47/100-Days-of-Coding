/* Write a program to print the following pattern: 1 12 123 1234 12345 */
#include <stdio.h>
int main(void){for(int r=1;r<=5;r++){for(int c=1;c<=r;c++)printf("%d",c);putchar('\n');}return 0;}
