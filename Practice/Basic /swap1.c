//swaping vairable using tried vairable 

#include<stdio.h>
int main()
{
    int a,b;
    int c;           //trid vairable

    printf("Enter valueof A :");   //read A value 
    scanf("%d",&a);

    printf("Enter valueof B:");   //read B value 
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;

    printf("value of A=%d and B=%d ./n",a,b);

    return 0;
}