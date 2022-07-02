#include<stdio.h>
int main(){
	int n,m,arr1[]={},arr2[]={},i,j;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &arr1[i]);
	}
	scanf("%d", &m);
	for(i=0; i<m; i++){
		scanf("%d", &arr2[i]);
	}
	int total[500000]={0,};
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			if(arr2[i]==arr1[j]){
				total[i]++;
			}
		}
	}
	for(i=0; i<m; i++){
		printf("%d ", total[i]);
	}
	 
}
