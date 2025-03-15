#include<stdio.h>
#include<ctype.h>
int main ()
{
    char a;
    printf("Enter a letter: ");
    scanf("%c",&a);

 
   (islower(a)) ? printf("%c is now capital: %c\n", a, toupper(a)) : printf("Given letter is Upper case\n");

    return 0;
}