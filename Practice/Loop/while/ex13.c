//​Find the power (𝑥^y ) without using pow()

# include<stdio.h>
int main ()
{
    int x=0,y=0;
    float ans =1;

    printf("Emter yalue x and y to x^y :");
    scanf("%d%d",&x,&y);

    while(y>0)
    {
        ans*=x;
        --y;
    }

    printf("%f \n ",ans);

    return 0;
}