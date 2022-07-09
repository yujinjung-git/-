#include<stdio.h>
#include<stdlib.h>
int main(){
	int test,i=0,j,k,temt,tnum;
	int check[20000]={0,};
	int bc[20000]={0,};
	int ord[20000]={0,};
	int min=50,flag=-1;
	char *temp;
	char word[][50]={{","}};
	
	scanf("%d", &test);
	tnum=test-1;
	for(i=0; i<test; i++){
		scanf("%s", word[i]);
		check[i]=strlen(word[i]);
		printf("%s %d \n", word[i], i);
	}
	for(i=0; i<test; i++){
		for(j=0; j<test-1; j++){
			if(strcmp(word[j],word[j+1])==1){
				word[j+1]=word[tnum];
				word[tnum]={","};
				tnum--;
			}
		}
	}
	for(i=0; i<tnum; i++){
		printf("%s", word[i]);
	}
	/*for(i=0; i<test; i++){
		for(j=0; j<test; j++){
			if(check[j]<min){
				if(bc[j]!=0) continue;
				min=check[j];
				flag=j;
			
			}
		}
		ord[i]=flag;
		bc[flag]=1;
		min=50;
		flag=-1;
	}
	
	for(i=0; i<test; i++){
		temt=ord[i];
		printf("%d %d %s\n", check[i], ord[i], word[temt]);
	}
	
	/*for(i=0; i<test; i++){
		for(j=0; j<test-i-1; j++){
			check
		}
	}
	for(i=0; i<test; i++){
		for(j=0; j<test-i-1; j++){
			if(strlen(word[j])>strlen(word[j+1])){
				temp=word[j];
				word[j]=word[j+1];
				word[j+1]=temp;
			}
		}
	}
	for(i=0; i<test; i++){
		printf("%s\n", word[i]);
	}*/


}
