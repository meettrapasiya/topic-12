#include <stdio.h>

main(){
    int i, j, k;
    int rows = 2;  
  
    for (i = 1; i <= 2; i++)
	{
        
        for (j = 2; j > i; j--) 
		{
            printf(" ");
        }

        
        for (k = 1; k <= i; k++)
   	  {
            printf("%d", k);
        }

        for (k = i - 1; k >= 1; k--) 
		{
            printf("%d", k);
        }

       
        printf("\n");
    }

    return 0;
}

