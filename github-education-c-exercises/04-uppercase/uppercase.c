#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");

    // TODO: loop through the string and print toupper(...) for each char

    printf("\n");
}
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main(void){string s=get_string("Before: ");printf("After: ");for(int
i=0,n=strlen(s);i<n;i++){printf("%c",toupper(s[i]));}printf("\n");}
