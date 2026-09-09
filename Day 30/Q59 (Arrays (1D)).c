/* Count even and odd numbers in an array. */
#include <stdio.h>
int main(void){int n,x,even=0,odd=0;if(scanf("%d",&n)!=1||n<1||n>1000)return 1;for(int i=0;i<n;i++){if(scanf("%d",&x)!=1)return 1;if(x%2==0)even++;else odd++;}printf("Even=%d, Odd=%d\n",even,odd);return 0;}
