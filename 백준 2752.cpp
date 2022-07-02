#include<stdio.h>
int main(){
	int arr[3]={},i=0,j=0,temp;
	for(i=0; i<3; i++){
		scanf("%d", &arr[i]);
	}
	for(i=0; i<3; i++){
	
		for(j=0; j<3-i-1; j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				}
		
		}
	}
	for(i=0; i<3; i++){
		printf("%d ", arr[i]);
	}
}
