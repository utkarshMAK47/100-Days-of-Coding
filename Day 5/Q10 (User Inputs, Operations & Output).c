/* Write a program to input time in seconds and convert it to hours:minutes:seconds format. */
#include <stdio.h>
int main(void){int s;if(scanf("%d",&s)!=1||s<0)return 1;printf("%d:%d:%d\n",s/3600,(s%3600)/60,s%60);return 0;}
