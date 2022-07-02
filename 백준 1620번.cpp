#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct pocketmon{
	char name[21];
	int i;
};

int isinteger(char *);
int pocketmonSearch(struct pocketmon*, char *, int, int);
void quickSort(struct pocketmon*, int, int);
int inPlacePartition(struct pocketmon*, int, int, int);

int main(){
	int n,m;
	struct pocketmon *pocketmon;
	struct pocketmon *tmp;
	
	int i;
	
	char search[21];
	scanf("%d %d", &n, &m);
	
	pocketmon=(struct pocketmon*)malloc(sizeof(struct pocketmon)*n);
	tmp=(struct pocketmon*)malloc(sizeof (struct pocketmon)*n);
	for(i=0; i<n; i++){
		scanf("%s", pocketmon[i].name);
		pocketmon[i].i=(i+1);
		
		strcpy(tmp[i].name, pocketmon[i].name);
		tmp[i].i=(i+1);
	}
	
	quickSort(pocketmon, 0, n-1);
	for(i=0; i<m; i++){
		scanf("%s", search);
		
		if(isinteger(search)){
			printf("%s\n", tmp[atoi(search)-1].name);
		}
		else{
			printf("%d\n", pocketmonSearch(pocketmon, search, 0, n-1));
		}
	}
	return 0;
}

int isinteger(char *str){
	int i;
	for(i=0; str[i]; i++){
		if(!('0'<=str[i]&&str[i]<='9')) return 0;
		else return 1;
	}
}

int pocketmonSearch(struct pocketmon *pocketmon, char *search, int l, int r){
	int m=(l+r)/2;
	if(strcmp(pocketmon[m].name, search)==0)
		return pocketmon[m].i;
	else if(strcmp(pocketmon[m].name, search)<0)
		return pocketmonSearch(pocketmon, search, m+1, r);
	else
		return pocketmonSearch(pocketmon, search, l, m-1);
	return 0;
}

void quickSort(struct pocketmon *po, int l, int r){
	int a,b;
	if(l>=r)
		return ;
	a=b=inPlacePartition(po, l, r, r);
	quickSort(po, l, a-1);
	quickSort(po, b+l, r);
}

int inPlacePartition(struct pocketmon *po, int l, int r, int k){
	struct pocketmon p;
	struct pocketmon tmp;
	
	int i,j;
	p=po[k];
	
	tmp=po[k];
	po[k]=po[r];
	po[r]=tmp;
	i=l;
	j=r-1;
	
	while(i<=j){
		while(i<=j&&(strcmp(po[i].name, p.name)<=0)){
			i++;
		}
		while(j>=i&&(strcmp(po[j].name, p.name)>=0)){
			j--;
		}
		if(i<j){
			tmp=po[i];
			po[i]=po[j];
			po[j]=tmp;
		}
	}
	tmp=po[i];
	po[i]=po[r];
	po[r]=tmp;
	
	return i;
}



#include <iostream>
#include <string>
#include <cstdio>
#include <map>
#include <cstdlib>
 
using namespace std;
 
int n; //포켓몬의 수
int m; //입력받을 문제의 수
 
char str[21];   //포켓몬 이름
 
map<string, int> mp1;   //문자열 기준으로 정렬
string mp2[100001];     //번호 기준으로 정렬
 
void input(){
    cin >> n;
    cin >> m;
 
    for(int i=0; i<n; i++){
        scanf("%s", str);
        string s = str;
 
        mp1.insert(pair<string, int>(s, i));
        mp2[i] = s;
    }
}
 
 
void solution(){
 
    for(int i=0; i<m ; i++) {
        scanf("%s", str);
 
        if(isdigit(str[0])) {
            cout << mp2[atoi(str)-1] << "\n";
        }else{
 
            string s = str;
            printf("%d\n", mp1[s] + 1);
        }
 
    }
}
 
 
int main(void){
    input();
    solution();
    return 0;
}
