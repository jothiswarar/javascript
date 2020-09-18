#include <stdio.h>
int open();
int main()
{
    int a = open();
    printf("%d", a);
    return 0;
}
int open()
{
    enum open
    {
        close = 0,
        open = 1,
        no = 0,
        yes = 1,
        off = 0,
        on = 1,
    };
    scanf("%s", open);
    return open;
}