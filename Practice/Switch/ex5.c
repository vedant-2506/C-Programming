//Given a number, output "small" if less than 10, "large" if more than 10, "equal" if exactly 10.


#include <stdio.h>
int main()
 {
    int num=0 ;
    int flag;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 10)
    {
        flag = -1;
     }
    else if (num == 10) 
    {
        
        flag = 0;
    }

    else
    {
        flag = 1;

    }
        

    switch (flag) 
    {
        case -1:
            printf("small\n");
            break;
        case 0:
            printf("equal\n");
            break;
        case 1:
            printf("large\n");
            break;
    }

    return 0;
}
