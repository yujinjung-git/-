#include<stdio.h>
int main(){
	int n,arr[5]={},i,cnt=0;
	scanf("%d", &n);
	for(i=0; i<5; i++){
		scanf("%d", &arr[i]);
		if(arr[i]%10==n) cnt++;
	}
	printf("%d", cnt);
}

