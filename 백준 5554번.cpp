#include<stdio.h>
#include<stdlib.h>
int main(){
	int arr[4]={},i,m=0,s=0;
	for(i=0; i<4; i++){
		scanf("%d", &arr[i]);
		s+=arr[i];
	}
	m=s/60; s=s%60;
	printf("%d\n%d", m, s);
}
