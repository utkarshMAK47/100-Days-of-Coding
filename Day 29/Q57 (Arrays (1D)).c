/* Find the sum of array elements. */
#include <stdio.h>
int main(void){int n,a,sum=0;if(scanf("%d",&n)!=1||n<1||n>1000)return 1;for(int i=0;i<n;i++){if(scanf("%d",&a)!=1)return 1;sum+=a;}printf("%d\n",sum);return 0;}
