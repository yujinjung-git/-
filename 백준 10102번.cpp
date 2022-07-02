#include<stdio.h>
int main(){
	int n,i,a=0,b=0;
	char c[15]={""};
	
	scanf("%d", &n);
	scanf("%s", &c);
	for(i=0; i<n; i++){
		if(c[i]=='A'){
			a++;
		}
		if(c[i]=='B'){
			b++;
		}
	}
	if(a>b) printf("A");
	if(b>a) printf("B");
	if(a==b) printf("Tie");
}
