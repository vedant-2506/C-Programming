#include<stdio.h>
#include<stdbool.h>
int main()
{
    int a ;
    float b;
    double c;
    char d;
    bool e;


    printf( "size of int  %lu byte \n" ,sizeof(a)) ;
    printf( "size of float %lu byte \n" ,sizeof(b)) ;
    printf( "size of  double %lu byte \n" ,sizeof(c)) ;
   // printf( "size of char %c byte \n" ,sizeof(d)) ;
    //printf( "size of bool byte  \n" ,sizeof(e)) ;

    return 0;

}