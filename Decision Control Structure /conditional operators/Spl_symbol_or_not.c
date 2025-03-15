//wether the given character is special symbol or not 
#include <stdio.h>
#include <ctype.h>
int main ()
{
    char a;
    printf("Enter a character: ");
    scanf("%c",&a);

    !isalnum(a) ? printf("%c is a special symbol\n", a) : printf("%c is not a special symbol\n", a);
    //isalnum = al (alphabet) num (number) checks if the given character is alphabet or number
    return 0;

}