#include<stdio.h>
#include<string.h>
int main(){
	int t,i,idx[26],total=0;
	char s[1000]={" "};
	scanf("%d", &t);
	while(t--){
		scanf("%s", s);
		
		for(i=0; i<26; i++){
			idx[i]=0;
		}
	
		for(i=0; i<strlen(s); i++){
			idx[s[i]-'A']=1;
			}
		for(i=0; i<26; i++){
			if(idx[i]==0){
				total+=i+'A';
			}
		}
		printf("%d\n", total);
		total=0;
	}
}
