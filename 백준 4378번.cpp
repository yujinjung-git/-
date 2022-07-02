#include<stdio.h>
#include<string.h>
int main(){
	int i,j;
	char str[100]={""};
	char arr[47]={'`','1','2','3','4','5','6','7','8','9','0','-','=','Q','W','E','R','T','Y','U','I','O','P','[',']','\\','A','S','D','F','G','H','J','K','L',';','\'','Z','X','C','V','B','N','M',',','.','/'};
	while(gets(str)){
		for(i=0; i<strlen(str); i++){
			for(j=0; j<47; j++){
				if(arr[j]==str[i]){
					str[i]=arr[j-1];
					break;
				}
			}
		}
		printf("%s\n", str);
	}	
}
