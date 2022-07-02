#include<stdio.h>
#define size 10001
int main(){
	int n,idx;
	int arr[size]={0,};
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &idx);
		arr[idx]++;
	}
	for(int i=0; i<size; i++){
		if(arr[i]!=0){
			for(int j=0; j<arr[i]; j++)
				printf("%d\n", i);
		}
	}
}
