#include<stdio.h>
#include<string.h>
int main(){
	char str[10000]={""};
	int i,j,cntJ=0,cntI=0;
	
	scanf("%s", &str);
	for(i=0; i<strlen(str); i++){
		if(str[i]=='J'){
			if(str[i+1]=='O'){
				if(str[i+2]=='I'){
					cntJ++;
				}
			}
		}
		if(str[i]=='I'){
			if(str[i+1]=='O'){
				if(str[i+2]=='I'){
					cntI++;
				}
			}
		}
	}
	printf("%d\n%d", cntJ, cntI);
	
}
