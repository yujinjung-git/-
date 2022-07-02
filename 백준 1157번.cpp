/*
#include<stdio.h>
#include<string.h>
int main(){
	int i,j,max,cnt=0,arr[26]={0,},a=0,k=0;
	char str[1000001];
	
	scanf("%s", &str);
	for(j=65; j<91; j++){
		for(i=0; i<strlen(str); i++){
			if(str[i]==j||str[i]==j+32){
				cnt++;
				}
			
		}
		arr[j-'A']=cnt;
	}
	max=arr[0];
	for(i=1; i<26; i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	for(i=0; i<26; i++){
		if(max==arr[i]) {
			a++;
			k=i;
		}
	}
	if(a==1) printf("%c\n", k+65);
	else if(a>1) printf("?\n");
}
*/
#include<stdio.h>
int main(){
	char str[1000001];
	int i,max,mi=0;
	int num[26]={0,};

	scanf("%s",str);
	for(i=0;str[i]!='\0'; i++){
    	if(str[i]<97)
        	str[i]+=32;
    	num[str[i]-97]++;
	}
    	max=num[0];
    	for(i=1; i<26; i++){
        	if(max<num[i]){
            	max=num[i];
            	mi=i;
        	}
        	else if(max==num[i]&&num[i]!=0){
            	mi=-1;
        	}
    	}
    	if(mi!=-1)
        	printf("%c",65+mi);
    	else
        	printf("?\n");
}
