#include<stdio.h>
int main(){
	int n,arr[9]={},i,sum=0;
	scanf("%d", &n);
	for(i=0; i<9; i++){
		scanf("%d", &arr[i]);
		sum+=arr[i];
	}
	printf("%d", n-sum);
}
