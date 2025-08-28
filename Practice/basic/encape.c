#include <stdio.h>
int main() 
{
    char name[10];

    printf("Enter your full name :");
    //scanf("%s",name);

    fgets(name ,sizeof(name),stdin);  


    printf("//new line  name is %s\n",name);  //new line 
    printf("//tab name is %s\t",name);  //tab
    printf("// move to the cursor beginning current line name is %s\r",name);  // move to the cursor beginning current line 
    printf("// back slash  name is %s\\",name);  // back slash 
    printf("//print double quotname is %s\"",name); //print double quot
    printf("// single quot name is %s\n'",name); // single quot 
    printf("// back space  name is %s\b",name);  // back space 

    printf("Your full name is %s\a",name);  //beep
    printf("Your full name is %s\f",name);
    printf("Your full name is %s\v",name); //vertical tab 
    


    return 0;
}