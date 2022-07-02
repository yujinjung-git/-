#include<stdio.h>
#include<string.h>
int main(){
	int n,i,j,k,cnt=0;
	char str[101][14];
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%s", str[i]);
	}
	
	
	
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(strlen(str[i])==strlen(str[j])){
				for(k=0; k<strlen(str[i]); k++){
					if(str[i][k]==str[j][strlen(str[i])-k-1]){
						cnt++;
					}
				}
			}
		}
		if(cnt==strlen(str[i])){
			printf("%d %c\n", strlen(str[i]), str[i][strlen(str[i])/2]);
			return 0;
		}
	}
}

//printf("%d\n", strlen(str[i])); /*str[i][(strlen(str[i]))/2])*/;
