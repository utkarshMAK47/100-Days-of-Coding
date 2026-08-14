/* Write a program to calculate the area and perimeter of a rectangle given its length and breadth. */
#include <stdio.h>
int main(void){double l,b;if(scanf("%lf %lf",&l,&b)!=2||l<0||b<0)return 1;printf("Area=%.15g, Perimeter=%.15g\n",l*b,2*(l+b));return 0;}
