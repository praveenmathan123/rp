#include<stdio.h>
#include<string.h>
void main()
{
	char a[10];
	int n,i;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i] > '0' && a[i] < '9')
		printf("%c",a[i]);
	}

	
}
