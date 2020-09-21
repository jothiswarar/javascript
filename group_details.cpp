#include <iostream>
#include <string.h>
using namespace std;
struct group_members
{
    char name[20];
    char subjects[100];
} group;
void store_file(struct group_members member);
void printdetails(struct group_members *member);
int main()
{
    store_file(group);
    return 0;
}
void store_file(struct group_members member)
{
    FILE *p, *c;
    char name_of[20], subjects_he[100];
    p = fopen("group_member.txt", "a+");
    puts("enter name of person(first letter in capital):");
    gets(name_of);
    puts("enter all the subject he do very well (use ,):");
    gets(subjects_he);
    strcpy(member.name, name_of);
    strcpy(member.subjects, subjects_he);
    printdetails(&member);
    fputs("Name of the person:\n", p);
    fputs(member.name, p);
    fputs(".\nSubjects he do well:\n", p);
    fputs(member.subjects, p);
    fprintf(p, ".\n");
    fclose(p);
    c = fopen("group_member.csv", "a+");
    fputs("Name of the person:\n", c);
    fputs(member.name, c);
    fputs("\nSubjects he do well:\n", c);
    fputs(member.subjects, c);
    fprintf(c, "\n");
    fclose(c);
}
void printdetails(struct group_members *member)
{
    puts(member->name);
    puts(member->subjects);
}
