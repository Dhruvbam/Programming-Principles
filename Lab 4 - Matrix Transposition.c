#include <stdio.h>
int main()
{
    int  x, i, j, k;
       printf("\n\nPrint all unique elements of an array:\n");
       printf("------------------------------------------\n");	
       printf("Input the number of elements to be stored in the array: ");
       scanf("%d",&x);
       int arr[x];
       printf("Input %d elements in the array :\n",x);
       for(i=0;i<x;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr[i]);
	    }
    printf("\nThe unique elements found in the array are: \n");
    for(i=0; i<x; i++)
    {
        int c=0;
        for(j=0,k=x; j<k+1; j++)
        {
            if (i!=j)
            {
		       if(arr[i]==arr[j])
              {
                 c++;
               }
             }
        }
       if(c==0)
        {
          printf("%d ",arr[i]);
        }
    }
}

