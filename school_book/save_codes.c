#include <stdio.h>
#include <string.h>
struct cppcodes
{
    char code[1000][1000];
} book;
void store_cppcodes(struct cppcodes store)
{
    FILE *p;
    p = fopen("book_codes.txt", "a+");
    if (p == NULL)
    {
        printf("there is a error in opening file");
    }
    else
    {
        //printf("how many line you want give as input:");
        printf("enter the code\n");
        scanf("%s", store.code);
        fprintf(p, "CODE ENTERED IN THE DATE:");
        fprintf(p, __DATE__);
        fprintf(p, "\n");
        fprintf(p, store.code);
        fprintf(p, "\n");
    }
    fclose(p);
}
int main()
{

    store_cppcodes(book);
    return 0;
}