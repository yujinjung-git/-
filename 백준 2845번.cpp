#include<stdio.h>
int main(){
	int l,p,arr[5]={},i;
	scanf("%d %d", &l, &p);
	for(i=0; i<5; i++){
		scanf("%d", &arr[i]);
	}
	for(i=0; i<5; i++){
		printf("%d ", arr[i]-l*p);
	}
}
