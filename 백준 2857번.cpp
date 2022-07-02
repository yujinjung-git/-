#include<stdio.h>
#include<string.h>
int main(){
	char str[11]={""};
	int i,j,arr[5]={0,},cnt=0;
	
	for(i=0; i<5; i++){
		scanf("%s", str);
		for(j=0; j<strlen(str); j++){
			if(str[j]=='F'&&str[j+1]=='B'&&str[j+2]=='I'){
				arr[i]=i+1;
				cnt++;
			}
		}
	}
	for(i=0; i<5; i++){
		if(cnt>=1&&arr[i]!=0){
			printf("%d ", arr[i]);
		}
	}
	if(cnt<1){
		printf("HE GOT AWAY!");
	}
}
