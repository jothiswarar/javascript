#include <stdio.h>
#include <conio.h>
int main()
{
    int c = '\xA3'; // Symbol for pounds sterling
    printf("Character: %c Code: %d\n", c, c);
    c=getchar();
    printf("%c",c);
    getch();
    return 0;
}