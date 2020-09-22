#include <stdio.h>
#include <string.h>

extern struct group_member;
struct group_member
{
    char name[25];
    char subject[100];
} group;
#include "store_file.c" 
int main()
{
    store_file(group);
    return 0;
}
