#include<stdio.h>
int main(){
	int n,arr[51]={0,},i,j,temp=0;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	for(i=0; i<n; i++){
		for(j=0; j<n-i-1; j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	printf("%d", arr[n-1]*arr[0]);
}

