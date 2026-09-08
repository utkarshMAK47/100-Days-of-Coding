/* Write a program to print the following pattern:    *   ***  ***** *******  *****   ***    * */
#include <stdio.h>
int main(void){for(int r=1;r<=4;r++){for(int s=0;s<4-r;s++)putchar(' ');for(int c=0;c<2*r-1;c++)putchar('*');putchar('\n');}for(int r=3;r>=1;r--){for(int s=0;s<4-r;s++)putchar(' ');for(int c=0;c<2*r-1;c++)putchar('*');putchar('\n');}return 0;}
