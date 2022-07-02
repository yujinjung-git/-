#include<stdio.h>
#include<string.h>
int main(){
	int cnt=0, i,j;
	char str[101]={""};
	scanf("%s", str);
	for(i=0; i<strlen(str)-1; i++){
		if(str[i+1]=='j'){
			if(str[i]=='l'){
				cnt++;
				str[i]=str[i+1]='/';
			}
			else if(str[i]=='n'){
				cnt++;
				str[i]=str[i+1]='/';
			}
		}
		if(str[i+1]=='='){
			if(str[i]=='c'){
				cnt++;
				str[i]=str[i+1]='/';
			}
			else if(str[i-1]=='d'&&str[i]=='z'){
				cnt++;
				str[i-1]=str[i]=str[i+1]='/';
			}
			else if(str[i]=='s'){
				cnt++;
				str[i]=str[i+1]='/';
			}
			else if(str[i]=='z'){
				cnt++;
				str[i]=str[i+1]='/';
			}
		}
		if(str[i+1]=='-'){
			if(str[i]=='c'){
				cnt++;
				str[i]=str[i+1]='/';
			}
			else if(str[i]=='d'){
				cnt++;
				str[i]=str[i+1]='/';
			}
		}
	}
	for(i=0; i<strlen(str); i++){
		if(str[i]>=97&&str[i]<=122){
			cnt++;
		}
	}
	printf("%d", cnt);	
}
