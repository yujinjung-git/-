#include<stdio.h>
int main(){
	int arr[5]={},i,a=0;
	for(i=0; i<5; i++){
		scanf("%d", &arr[i]);
		if(arr[i]<40){
			arr[i]=40;
		}
		a+=arr[i];
		
	}
	printf("%d", a/5);
}
