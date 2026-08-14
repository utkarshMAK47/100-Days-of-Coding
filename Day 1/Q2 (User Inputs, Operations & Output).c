/* Write a program to input two numbers and display their sum, difference, product, and quotient. */
#include <stdio.h>
int main(void){double a,b;if(scanf("%lf %lf",&a,&b)!=2)return 1;printf("Sum=%.15g, Diff=%.15g, Product=%.15g, ",a+b,a-b,a*b);if(b==0)printf("Quotient=undefined\n");else printf("Quotient=%.15g\n",a/b);return 0;}
