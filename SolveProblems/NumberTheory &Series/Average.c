//Write a program for Find the average of given number .

#include<stdio.h>
int main(){
    int n=0,num=0;
    int sum=0;

    printf("Enter total numbers :");
    scanf("%d",&n);

    printf("Enter a number : \n");
    for(int i= 1;i<=n;i++){
        scanf("%d",&num);

        sum += num;
    }

    float avg = (sum/n);
    
    printf("Averege of following number is %f",avg);

    return 0;
}
