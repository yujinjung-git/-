#include<stdio.h>
int main(){
	int n,arr[10001]={},i,j,cnt=0,temp;
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
	for(i=0; i<n-1; i++){
		if(arr[i+1]-arr[i]==1) cnt++;
	}
	printf("%d", 5-cnt-1);
}
