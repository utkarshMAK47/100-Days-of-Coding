/* Write a program to calculate the area and circumference of a circle given its radius. */
#include <stdio.h>
int main(void){double r;if(scanf("%lf",&r)!=1||r<0)return 1;printf("Area=%.2f, Circumference=%.2f\n",3.141592653589793*r*r,2*3.141592653589793*r);return 0;}
