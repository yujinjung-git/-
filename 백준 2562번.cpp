#include<stdio.h>
int main(){
	int arr[9]={},i,BIG=0,idx=0;
	for(i=0; i<9; i++){
		scanf("%d", &arr[i]);
	}
	for(i=0; i<9; i++){
		if(arr[i]>BIG){
			idx=i;
			BIG=arr[i];
		}
	}
	printf("%d\n%d", BIG, idx+1);
		
	
}
