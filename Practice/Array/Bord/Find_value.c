#include<stdio.h>
int main()
{
    int i=0 ,x=0 ;
    int f=0;
    int arr[10];

    //accept values from user 
    printf("Enter values in array   \n ");

    for(i=0;i<10;i++)
    {
        scanf("%d", &arr[i]);
    }
    
    //print array
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    //enter no.to find 
    printf("Enter a number to find from array :");
    scanf("%d",&x);
    
    for(i=0;i<10;i++)
    {
        if(arr[i]=x)
        {
        f =1;
        break;
        }


        else
          continue;
    }
    if(f =1)
    printf("%d is present in array \n ",x);
    else
    printf("%d is present in array \n",x);

    return 0;
}