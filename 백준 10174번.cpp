#include<stdio.h>
#include<string.h>
int main(){
	int a,i,j,n,cnt=0;
	char arr[][20]={};
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%[^\n]", &arr[i]);
	}
	for(i=0; i<n; i++){
		a=strlen(arr[i]);
		if(a%2==0){
			for(j=0; j<a/2; j++){
				if(arr[i][a/2-1-j]==arr[i][a/2+j]){
					cnt++;
				}
				
			}
		}
		else if(a%2==1){
			for(j=0; j<a/2; j++){
				if(arr[i][a/2-1-j]==arr[i][a/2+1+j]){
					cnt++;
				}
			}
		}
		if(cnt==a/2) printf("true");
		else printf("false");
	}
		
}
