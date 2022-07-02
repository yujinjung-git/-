#include<stdio.h>
#include<string.h>
int main(){
	int T, i, idx, j;
	char str[80];
	
	scanf("%d", &T);
	for(i=0; i<T; i++){
		scanf("%d %s", &idx, &str);
		for(j=0; j<strlen(str); j++){
			if(j!=idx-1){
				printf("%c", str[j]);
			}
		}
		printf("\n");
	}
	
}
