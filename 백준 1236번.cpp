#include<stdio.h>
#include<string.h>
int main(){
	int n,m,i,j,sum=0,cnt=0;
	char arr[51][51]={""};
	int ara[51]={0,};
	
	scanf("%d %d", &n, &m);
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%c", &arr[i][j]);
		}
	}
	for(i=0; i<51; i++){
		ara[i]=0;
	}
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			if(arr[i][j]=='X'){
				cnt++;
			}
		}
		ara[i]+=cnt;
	}
	for(i=0; i<n; i++){
		if(ara[i]<1){
			sum++;
		}
	}
	printf("%d", sum);
}
