#include <stdio.h>

const char* retString(char a);

int main(void)
{
    char str[] = "hello world";
    retString( str);

}

const char* retString(char a)
{
    scanf("%s", a);
     printf("%s\n", a);
}