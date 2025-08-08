// Print message based on multiple ranges:
// a.​ If number <100 print “small”,
// b.​ 100–200 “large”,
// c.​ 201–300 “bigger”,
// d.​ 301–400 “largest”,
// e.​ >400 “very large”#include <stdio.h>
#include<stdio.h>
int main()
 {
   int num;

    
    printf("Enter number  : ");
    scanf("%d", &num);
  
    if (num <101 )
    {
        printf("small \n");
    }
    else if  ( 100<num && num>201 ) 
    {
        printf("Large\n");
    }

    else   if (200< num && num <301 )
    {
        printf("Biger \n");
    }
    else if  ( 300<num && num>401 ) 
    {
        printf("Large\n");
    }
    else   if (num <400 )
    {
        printf("Biger \n");
    }
   
    return 0;
}

