#include<stdio.h>
#include<string.h>
int main(){
	int a,i,cnt=0;
	char arr[20];
	scanf("%s", &arr);
	a=strlen(arr);
	if(a%2==0){
		for(i=0; i<a/2; i++){
			if(arr[a/2-1-i]==arr[a/2+i]){
				cnt++;
			}
		}
	}
	else if(a%2==1){
		for(i=0; i<a/2; i++){
			if(arr[a/2-1-i]==arr[a/2+1+i]){
				cnt++;
			}
		}
	}
	if(cnt==a/2) printf("true");
	else printf("false");	
}
