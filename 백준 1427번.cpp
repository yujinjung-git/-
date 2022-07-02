#include<stdio.h>
#include<string.h>
int main(){
	char n[11];
	int temp,i,j;
	gets(n);
	for(i=0; i<strlen(n)-1; i++){
		for(j=i; j<strlen(n); j++){
			if(n[i]<n[j]){
				temp=n[j];
				n[j]=n[i];
				n[i]=temp;
			}
		}
	}
	puts(n);
}
