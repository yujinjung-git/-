#include<stdio.h>
int main(){
	int t,arr[10]={},i,temp,j,k,l;
	scanf("%d", &t);
	for(i=0; i<t; i++){
		for(j=0; j<10; j++){
			scanf("%d", &arr[j]);
		}
		for(k=0; k<10; k++){
			for(l=0; l<9-k; l++){
				if(arr[l]>arr[l+1]){
				temp=arr[l];
				arr[l]=arr[l+1];
				arr[l+1]=temp;
				}
			}
	
		}
		printf("%d\n", arr[7]);
	}
}
/*#include <stdio.h>
int main(){
	int arr[10] = {0, }, i, j, k, l, n, res, temp;
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		for(j = 0; j < 10; j++){
			scanf("%d", &arr[j]);
		}
		for(k = 0; k < 10; k++){
			for(l = 0; l < 9; l++){
				if(arr[l] > arr[l + 1]){
					temp = arr[l];
					arr[l] = arr[l + 1];
					arr[l + 1] = temp;
				}
			}
		}
		printf("%d\n", arr[7]);
	}
}*/
