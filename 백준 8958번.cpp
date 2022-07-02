/*#include<stdio.h>
#include<string.h>
int main(){
	char str[81];
	int n,i,j,check=1,sum=0;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%s", &str);
		for(j=0; j<strlen(str); j++){
			if(str[j]=='O'){
				sum+=check;
				check++;
			}
			else{
				check=1;
			}
		}
		printf("%d\n", sum);
	}
}*/

#include<stdio.h>
#include<string.h>
 
int main(){
    int n,i;
    scanf("%d",&n);
    
    for(i=0; i<n; i++){
        char OX[81];
        int add = 1,score = 0;
        scanf("%s",&OX);
        
        for(int j=0;j<strlen(OX);j++){
            if(OX[j]=='O'){
                score+=add;
                add++;
            }
            else{
                add = 1;
            }
        }
        printf("%d\n",score);
    }
}
