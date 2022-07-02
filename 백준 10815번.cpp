/*#include<stdio.h>
int main(){
	long long int arr[20000001]={0,};

	long long int t;
	
	long int n,m,i;
	
	scanf("%ld", &n);
	for(i=0; i<n; i++){
		scanf("%lld", &t);
		arr[t+10000000]=1;
	}
	
	scanf("%ld", &m);
	for(i=0; i<m; i++){
		scanf("%lld", &t);
		if(arr[t+10000000]) printf("%d", 1);
		else printf("%d", 0);
	}
	
}*/

#include<iostream>
using namespace std;
int arr[20000001]={0,};
int n,m,i,t;
int main(){
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &t);
		arr[t+10000000]=1;
	}
	
	scanf("%d", &m);
	for(i=0; i<m; i++){
		scanf("%d", &t);
		if(arr[t+10000000]) printf("%d ", 1);
		else printf("%d ", 0);
	}
	return 0;
}
