#include<stdio.h>
int main(){
	char a[][15]={
		{"Praja"},
		{"Kumar"},
		{"Ishwar"}
	};
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf(" %c",a[i][j]);
		}
	
	}
	return 0;
}
