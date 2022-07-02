#include<stdio.h>
int main(){
	int n, arr[101]={},i,cnt=0;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);		
	}
	for(i=n-1; i>=1; i--){
		while(arr[i]<=arr[i-1]){
			if(arr[i-1]-1>0){
				arr[i-1]--;
				cnt++;
			}
			else break;
		}
	}
	printf("%d", cnt);
}
