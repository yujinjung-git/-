#include<stdio.h>
int main(){
	int arr[8]={},arr2[8]={},arr3[8]={},i,j,sum=0,temp=0;
	for(i=0; i<8; i++){
		scanf("%d", &arr[i]);
		arr2[i]=arr[i];
	}
	for(i=0; i<8; i++){
		for(j=0; j<8-i-1; j++){
			if(arr2[j]<arr2[j+1]){
			temp=arr2[j];
			arr2[j]=arr2[j+1];
			arr2[j+1]=temp;
			}
		
		}
	}
	for(i=0; i<5; i++){
		sum+=arr2[i];
	}
	for(i=0; i<5; i++){
		for(j=0; j<8; j++){
			if(arr[j]==arr2[i]){
				arr3[j]=j+1;
			}
		}
	}
	printf("%d\n", sum);
	for(i=0; i<8; i++){
		if(arr3[i]!=0){
			printf("%d ", arr3[i]);
		}
	}
}
