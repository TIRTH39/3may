#include <stdio.h>

main() 
{
    int arr[5] = {1, 2, 3, 4, 5},i,j,NP,LE;
    
        printf("Original Array=");
    
    for(i=0;i<5;i++) 
	{
        printf("%d",arr[i]);
    }
        NP=2;
    
    for(i=0;i<NP;i++) 
	{
        LE=arr[4];
        
        for(j=3;j>=0;j--)
		{
            arr[j+1]=arr[j];
        }
            arr[0]=LE;
    }
    
        printf("\nRotated Array=");
        
        for(i=0;i<5;i++s)
	    {
            printf("%d",arr[i]);
        }   
}
