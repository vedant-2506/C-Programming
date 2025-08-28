//swaping vairable without using tried vairable 

#include<stdio.h>
int main()
{
    int a,b;
    

    printf("Enter valueof A :");   //read A value 
    scanf("%d",&a);

    printf("Enter valueof B:");   //read B value 
    scanf("%d",&b);

    a=b+a;
    b=a-b;
    a=a-b;

    printf("value of A=%d and B=%d .\n",a,b);

    return 0;
}