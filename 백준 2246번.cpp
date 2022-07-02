#include<stdio.h>
int main(){
	int n,c[]={},d[]={},i,j,cnt=0;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d %d", &d[i], &c[i]);
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(d[i]>d[j]){
				if(c[i]>c[j]) cnt++;
				else if(c[i]<c[j]) break;
			}
			
			else if(d[i]<d[j]){
				if(c[i]>c[j]) break;
				else if(c[i]<c[j]) cnt++;
			}
		}
	}
	printf("%d", cnt);
}
