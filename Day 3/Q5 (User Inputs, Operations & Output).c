/* Write a program to convert temperature from Celsius to Fahrenheit. */
#include <stdio.h>
int main(void){double c;if(scanf("%lf",&c)!=1)return 1;printf("Fahrenheit=%.15g\n",c*9.0/5.0+32.0);return 0;}
