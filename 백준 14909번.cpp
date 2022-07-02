#include<stdio.h>
int main(){
	int n,i,arr[1000000]={};
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	for(i=0; i<n; i++){
		if(arr[i]>0){
			n+=1;
		}
	}
	printf("%d", n);
} 
