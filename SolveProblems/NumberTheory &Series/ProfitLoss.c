//Program of Finding profit loss.

#include<stdio.h>
int main(){
    float sp=0,cp=0;
    float pf=0,ls=0;

    printf("Enter a selling price : ");
    scanf("%f",&sp);
    printf("Enter a cost price : ");
    scanf("%f",&cp);


    if(sp > cp)
    {
        pf = (sp - cp);
        printf("Profit is %f. \n",pf);
    }
    else{
    ls= (cp - sp);
    printf("Loss is %f. \n",ls);
    }
    
    return 0; 
}
