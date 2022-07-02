#include<stdio.h>
int main(){
	int arr[1001]={0,}, k=1, a,b,sum=0,i,j;
	scanf("%d %d", &a, &b);
	for(i=1; i<=1000;){
		for(j=1; j<=k&&i<=1000; j++)
			arr[i++]=k;
		k++;	
	}
	for(i=a; i<=b; i++)
		sum+=arr[i];
	printf("%d", sum);
}
