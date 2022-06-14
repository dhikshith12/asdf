#include<stdio.h>
const char* string = "Dhikshith";
int main()
{
    char cstr1[10] = "Dhikshith";
    char* const str1;
    char const * str2;
    str2 = (char*) &cstr1;
    printf("%d",4);
    getchar();
    return 0;
}
