#include <stdio.h>

main()
{
    int i, j, k;
   

  
    for (i = 0; i < 5; i++)
	 {
       
        for (j = 1; j <= 5 - i; j++) 
		{
            printf("%d ", j);
        }

       
        for (k = 0; k < 2 * i - 1; k++)
		 {
            printf("  ");  
        }

      
        for (j = 5 - i; j >= 1; j--) 
		{
            if (j != 5 - i)
			 {
                printf("%d ", j);
            }
        }

       
        printf("\n");
    }

    return 0;
}
