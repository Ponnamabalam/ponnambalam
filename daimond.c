#include<stdio.h>
long pascal(int);
main()
{
	int line,i,j;
	printf("Enter the range:");
	scanf("%d",&line);
	for(i=0;i<line;i++){
		for(j=0;j<line-i-1;j++)
			printf(" ");
	
		for(j=0;j<=i;j++)
			printf("%ld ",pascal(i)/(pascal(j)*pascal(i-j)));
		printf("\n");
	}
	for(i=line-2;i>=0;i--){
		for(j=line-i-1;j>0;j--)
			printf(" ");
	
		for(j=i;j>=0;j--)
			printf("%ld ",pascal(i)/(pascal(j)*pascal(i-j)));
		printf("\n");
	}
	return 0;
}
long pascal(int n)
{
	long f=1;
	int i=1;
	while(i<=n)
	{
		f=f*i;
		i++;
	}
	return f;
}
