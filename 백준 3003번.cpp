#include<stdio.h>
int main(){
	int arr[6]={},arr2[6]={1,1,2,2,2,8},i,j;
	for(i=0; i<6; i++){
		scanf("%d", &arr[i]);
	}
	for(i=0; i<6; i++){
		printf("%d ", arr2[i]-arr[i]);
	}
}
