/* Write a program to print the following pattern:     5\n   45\n  345\n 2345\n12345 */
#include <stdio.h>
int main(void){for(int start=5;start>=1;start--){for(int s=1;s<start;s++)putchar(' ');for(int n=start;n<=5;n++)printf("%d",n);putchar('\n');}return 0;}
