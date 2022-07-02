#include<stdio.h>
int main(){
	int arr[5]={},i,num=0;
	for(i=0; i<5; i++){
		scanf("%d", &arr[i]);
		num+=arr[i]*arr[i];
	}
	printf("%d", num%10);
}
