/* Write a program to display the day of the week based on a number (1-7) using switch-case. */
#include <stdio.h>
int main(void){int n;if(scanf("%d",&n)!=1)return 1;switch(n){case 1:puts("Monday");break;case 2:puts("Tuesday");break;case 3:puts("Wednesday");break;case 4:puts("Thursday");break;case 5:puts("Friday");break;case 6:puts("Saturday");break;case 7:puts("Sunday");break;default:return 1;}return 0;}
