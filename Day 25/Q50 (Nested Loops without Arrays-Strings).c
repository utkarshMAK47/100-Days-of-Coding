/* Write a program to print the following pattern: *****\n ****\n  ***\n   **\n    * */
#include <stdio.h>
int main(void){for(int r=5;r>=1;r--){for(int s=0;s<5-r;s++)putchar(' ');for(int c=0;c<r;c++)putchar('*');putchar('\n');}return 0;}
