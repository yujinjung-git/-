#include<stdio.h>
#include<string.h>
int main(){
	char str[101]={""};
	int cnt=0, i;
	scanf("%s", str);
	if(strlen(str)%2==1){
		//strlen(str)/2 //±âÁØ
		for(i=0; i<(strlen(str))/2; i++){
			if(str[i]==str[strlen(str)-i-1]) cnt++;
		} 
		if(cnt==strlen(str)/2) printf("1");
		else printf("0");
	}
	if(strlen(str)%2==0){
		if(str[strlen(str)/2]==str[strlen(str)-1]){
			for(i=0; i<(strlen(str))/2-1; i++){
				if(str[i]==str[strlen(str)-i-1]) cnt++;
			}
			if(cnt==strlen(str)/2-1) printf("1");
			else printf("0");
		}
		else printf("0");
		
	}
}
