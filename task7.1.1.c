#include<stdio.h>
/*
        5
      4 5
    3 4 5
  2 3 4 5
1 2 3 4 5*/
main()
{
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf(" ");
		}
		for(k=i;k<=5;k++)
		{
			printf("%d",k);
		}
		printf("\n");
	}	
}