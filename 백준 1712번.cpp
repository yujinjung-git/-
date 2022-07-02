/*#include<stdio.h>
int main(){
	long a,b,c,sum=0,sell=0;	
	int i,cnt=0;
	scanf("%ld %ld %ld", &a, &b, &c);
	for(i=1; ; i++){
		sum=a+b*i;
		sell=c*i;
		if(sum<sell){
			break;
		}
	}
	printf("%d", i);
}*/
#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	if(b>=c) printf("%d", -1);
	else printf("%d", (a/(c-b))+1);
}
