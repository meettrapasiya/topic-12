#include <stdio.h>

main()
 {
    int i, j;


    for (i = 5; i >= 1; i--)
	 {
        
        for (j = 1; j <= i; j++)
		 {
            if ((j + i) % 2 == 0) 
			{
                printf("1 ");
            } else
			 {
                printf("0 ");
            }
        }
    
        printf("\n");
    }
}
