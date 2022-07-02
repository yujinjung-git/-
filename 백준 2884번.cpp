#include<stdio.h>
int main(){
	int h,m;
	scanf("%d %d", &h,&m);
	if(m>=45){
		m-=45;
	}
	else{
		if(h==0){
			h=23, m+=15;
		}
		else{
			h-=1, m+=15;}
	}
	printf("%d %d", h, m);
}

/*#include <stdio.h>
 
int main(){
    int h, m;
    scanf("%d %d", &h, &m);
    if((m-=45) < 0){
        m+=60;
        if(--h<0) h+=24;
    }
    printf("%d %d", h, m);
}*/
