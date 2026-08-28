/* Write a program to calculate electricity bill based on units consumed with these rates: first 100 at 5/unit, next 100 at 7/unit, next 100 at 10/unit, above at 12/unit. */
#include <stdio.h>
int main(void){double u,b;if(scanf("%lf",&u)!=1||u<0)return 1;b=u<=100?u*5:u<=200?500+(u-100)*7:u<=300?1200+(u-200)*10:2200+(u-300)*12;printf("Bill: %.15g\n",b);return 0;}
