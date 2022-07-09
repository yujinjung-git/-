#include<stdio.h>
#include<stdlib.h>
void swap(char* z, char* x){
	char temp=*z;
	*z=*x;
	*x=temp;
}
int main(){
	int test,i=0,j,k;
	int check[20000]={0,};
	int min=20000;
	//char word[][50]={{","}};
	char *temp;
	char **word=NULL;
	word=(char**)malloc(sizeof(char*)*20000);
	for(i=0; i<20000; i++){
		word[i]=(char*)malloc(sizeof(char)*50);
	}
	
	scanf("%d", &test);
	for(i=0; i<test; i++){
		scanf("%s", word[i]);
		check[i]=strlen(word[i]);
		printf("%s %d %d\n", word[i], i, check[i]);
	}
	for(i=0; i<test; i++){
		printf("%s ", word[i]);
	}
	printf("\n");
	for(i=0; i<test; i++){
		for(j=0; j<test-1-i; j++){
			if(strcmp(word[j], word[j+1])>0){
				swap(word[j], word[j+1]);
			}
		}
	}
	for(i=0; i<test; i++){
		printf("%s\n", word[i]);
	}
		

}
