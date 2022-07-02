#include<stdio.h>
int main(){
	int arr[42]={0,},i,cnt=0,n;
	for(i=0; i<10; i++){
		scanf("%d", &n);
		arr[n%42]=1;
	}
	for(i=0; i<42; i++){
		if(arr[i]==1){
			cnt++;
		}
	}
	printf("%d", cnt);		
}
