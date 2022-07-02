#include<stdio.h>
#include<string.h>
char arr[60], copy[60], answer[60];
int len;
int compare(){
	for(int i=0; i<len; i++){
		if(copy[i]<answer[i])
			return 1;
		else if(copy[i]>answer[i])
			return 0;
	}
	return 0;
}

void COPY(char *c, char* cod){
	for(int i=0; i<len; i++){
		c[i]=cod[i];
	}
}

void reverse(int x, int y){
	char temp;
	for(int i=0; i<(x+1)/2; i++){
		temp=copy[i];
		copy[i]=copy[x-i];
		copy[x-i]=temp;
	}
	for(int i=0; i<(y-x)/2; i++){
		temp=copy[x+1+i];
		copy[x+1+i]=copy[y-i];
		copy[y-i]=temp;
	}
	
	for(int i=0; i<(len-y)/2; i++){
		temp=copy[y+1+i];
		copy[y+1+i]=copy[len-1-i];
		copy[len-1-i]=temp;
	}
}

int main(){
	scanf("%s", arr);
	len=strlen(arr);
	for(int i=0; i<len; i++){
		answer[i]='a'+26;
	}
	for(int i=0; i<len; i++){
		for(int j=0; j<len-1; j++){
			if(i>=j) continue;
			COPY(copy, arr);
			reverse(i,j);
			if(compare()){
				COPY(answer, copy);
			}
		}
	}
	printf("%s\n", answer);
	return 0;
}


