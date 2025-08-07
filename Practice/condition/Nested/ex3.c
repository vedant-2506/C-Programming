#include <stdio.h>

int main() 
{
    float a,b,c;

     printf("Enter angle and check this is tringle  ");
    printf("Enter angle  ");
    scanf("%f%f%f", &a,&b,&c);

    
    if (a==0 && b==0 && c==0 ) 
    {
        printf("This is not tringle ");
    } 
    else if (a+b+c==180) 
    {
        printf("It is Triangle");
    }
    

    return 0;
}
