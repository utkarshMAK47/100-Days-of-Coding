/* Write a program to calculate library fine based on late days as follows: First 5 days late: 2/day, next 5 days late: 4/day, next 20 days late: 6/day, more than 30 days: Membership Cancelled. */
#include <stdio.h>
int main(void){int d,f=0;if(scanf("%d",&d)!=1||d<0)return 1;if(d>30)puts("Membership Cancelled");else{f=(d>5?10:d*2);if(d>10)f+= (d-10)*6;else if(d>5)f+=(d-5)*4;printf("Fine %d\n",f);}return 0;}
