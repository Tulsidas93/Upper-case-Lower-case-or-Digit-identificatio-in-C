#include<stdio.h>                     //header file decleration

int main()
{
    char check;                         //veriabel decleration
    
printf("Enter the character:");           //print statement
scanf("%c",&check);                       // read character
    
    if(check>='A'&& check<='Z')
    {
        printf("The character is Upper Case");
    }
    else if(check>='a'&&check<='z')
    {
        printf("The character is Lower Case");
    }
    
   else if(check>='0'&&check<='9')
    {
        printf("The character is Digit");
    }
    else
    {
        printf("The character not an alphabet or digit.");
    }
    
    
    
}

