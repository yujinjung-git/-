#include<stdio.h>
int main(){
	int arr[101]={0,},i,n,a,cnt=0;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &a);
		if(arr[a]==0)
			arr[a]=a;
		else if(arr[a]!=0)
			cnt++;
	}
	printf("%d", cnt);
}
