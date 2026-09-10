/* Merge two arrays. */
#include <stdio.h>
int main(void){int n,m,a[500],b[500];if(scanf("%d",&n)!=1||n<1||n>500)return 1;for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;if(scanf("%d",&m)!=1||m<1||m>500)return 1;for(int i=0;i<m;i++)if(scanf("%d",&b[i])!=1)return 1;for(int i=0;i<n;i++)printf("%d ",a[i]);for(int i=0;i<m;i++)printf("%d%c",b[i],i==m-1?'\n':' ');return 0;}
