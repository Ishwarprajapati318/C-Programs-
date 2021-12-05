#include<stdio.h>
#include<malloc.h>
#include<string.h>
void mybubblesort(char **a){
	char temp[10];
	for(int i=0;i<5;i++){
		for(int j=0;j<5-1-i;j++){
			if(strcmp(a[j],a[j+1])>0){
				strcpy(temp,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],temp);
			}
		}
	}
}

int main(int argc, char *argv[]){
	char **str;
	str=(char **)malloc(5*10*sizeof(char));
	for(int i=0;i<5;i++){
		str[i]=(char *)malloc(10*sizeof(char));
	}
	printf("Enter string into the array\n");
	for(int i=0;i<5;i++){
		scanf("%s",str[i]);
	}
	printf("Data in array before sorting\n");
	for(int i=0;i<5;i++){
		printf("\n%s",str[i]);
	}
	mybubblesort(str);
	printf("Data in array after sorting\n");
        for(int i=0;i<5;i++){
                printf("\n%s",str[i]);
        }
	return 0;
}

