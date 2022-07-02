#include<stdio.h>
#include<stdlib.h>

int intcmp(const void *a, const void *b){
	return *(int *)a > *(int *)b ? 1 : (*(int *)a < *(int *)b ? -1 : 0);
}


int binarysearch(int *arr, int key, int size){
	int front, rear, mid;
	front=0, rear=size-1;
	while(1){
		mid=(front+rear)/2;
		if(arr[mid]==key) return 1;
		if(arr[front]==key) return 1;
		if(arr[rear]==key) return 1;
		
		if(arr[mid]<key) front=mid+1;
		else rear=mid-1;
		if(rear<=front) return 0;
	}
}

int main(){
	int n,m,j;
	scanf("%d", &n);
	int arr[100000]={0,};
	int brr[100000]={0,};
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	qsort(arr, n, sizeof(int), intcmp);
	
	scanf("%d", &m);
	for(int i=0; i<m; i++){
		scanf("%d", &brr[i]);
		brr[i]=binarysearch(arr, brr[i], n);
	}
	for(int i=0; i<m; i++) printf("%d ", brr[i]);
}
