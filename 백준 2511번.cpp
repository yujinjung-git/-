#include<stdio.h>
int main(){
	int a[10], b[10], i, acnt=0, bcnt=0,p;
	char s[10];
	
	for(i=0; i<10; i++){
		scanf("%d", &a[i]);
	}
	for(i=0; i<10; i++){
		scanf("%d", &b[i]);
	}
	
	for(i=0; i<10; i++){
		if(a[i]>b[i]) {
			s[i]='A';
			acnt+=3;
			p=0;	
		}
		else if(b[i]>a[i]) {
			s[i]='B';
			bcnt+=3;	
			p=1;
		}
		else{
			s[i]='D';
			acnt+=1;
			bcnt+=1;
		}
	}
	printf("%d %d\n", acnt, bcnt);
	if(acnt>bcnt) printf("A");
	else if(bcnt>acnt) printf("B");
	else if(acnt==10&&bcnt==10) printf("D");
	else printf("%c", p+'A');
	
}
