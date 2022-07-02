#include<stdio.h>
#include<string.h>
int main(){
	int arr[99999][99999]={},i,cnt=0;
	while(1){
		scanf("%d", &arr[0]);
		if(arr[0]==0) break;
		if(strlen(arr[0])%2==1){
			for(i=0; i<strlen(arr[0])/2; i++){
				if(arr[strlen(arr[0])/2-i]==arr[strlen(arr[0]/2+i)]){
					cnt++;
				}
				else printf("no");
				break;
			}
			if(cnt==strlen(arr[0])/2) printf("yes");
		}
		if(strlen(arr[0])%2==0){
			for(i=0; i<strlen(arr[0])/2-1; i++){
				if(arr[strlen(arr[0])/2]==arr[strlen(arr[0])/2-1]){
					if(arr[strlen(arr[0])/2-i]==arr[strlen(arr[0])/2+i+1]){
						cnt++;
					}
				}
				else printf("no");
				break;
			}
			if(cnt==strlen(arr[0])/2) printf("yes");
		}
	}
}
