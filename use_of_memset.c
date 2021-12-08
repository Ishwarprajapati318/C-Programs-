#include<stdio.h>
#include<string.h>
int main()
{
	char a[100]={'a','I','v','w','g'};
	memset(a,'\0',sizeof(a));
	printf("The string is :%s",a);
	char str1[20],str2[20];
	strcpy(str1,"Ishwar");
	memcpy(str2,str1,sizeof(sizeof(str1)));
	printf("\n The string is: %s\n",str2);
	return 0;
}
