//Calculate and print the sum of the series 1 + 1/2 + 1/3 + ... + 1/n

#include<stdio.h>
int main()
{
    float i=1;
    int n=0;
    float ans=0;

   
    printf("Enter a number :");
    scanf("%d",&n);


    while(i<=n)
    {
        ans +=(1/i); 
        i++;
    }

    printf("%f\n",ans);

    return 0;

}