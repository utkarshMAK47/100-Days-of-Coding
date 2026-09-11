/* Search in a sorted array using binary search. */
#include <stdio.h>
int main(void){int n,a[1000],target;if(scanf("%d",&n)!=1||n<1||n>1000)return 1;for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;if(scanf("%d",&target)!=1)return 1;int left=0,right=n-1;while(left<=right){int mid=left+(right-left)/2;if(a[mid]==target){printf("Found at index %d\n",mid);return 0;}if(a[mid]<target)left=mid+1;else right=mid-1;}puts("-1");return 0;}
