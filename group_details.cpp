#include <iostream>
#include <string.h>
using namespace std;
struct group_members
{
    char name[20];
    char subjects[100];
} group;
void printdetails(struct group_members *member);
void store_file(struct group_members member);
int main()
{

    store_file(group);
    return 0;
}
void store_file(struct group_members member)
{
    FILE *p, *c;
    char name_of[20], subjects_he[100], a[4];
    puts("enter name of person(first letter in capital):");
    gets(name_of);
    puts("enter all the subject he do very well (use ,):");
    gets(subjects_he);
    strcpy(member.name, name_of);
    strcpy(member.subjects, subjects_he);
    printdetails(&member);
    cout << "in which format you want ?\navaliable format .txt and.csv\n";
    gets(a);
    if (a =="txt")
    {
        p = fopen("group_member.txt", "a+");
        if (c == NULL)
        {
            cout << "there is a error in writing the file";
        }
        else
        {
            fputs("Name of the person:\n", p);
            fputs(member.name, p);
            fputs(".\nSubjects he do well:\n", p);
            fputs(member.subjects, p);
            fprintf(p, ".\n");
            fclose(p);
        }
    }
    else if (a =="csv")
    {
        c = fopen("group_member.csv", "a+");
        if (c == NULL)
        {
            cout << "there is a error in opening the file";
        }
        else
        {
            fputs("Name of the person:\n", c);
            fputs(member.name, c);
            fputs("\nSubjects he do well:\n", c);
            fputs(member.subjects, c);
            fprintf(c, "\n");
            fclose(c);
        }
    }
}
void printdetails(struct group_members *member)
{
    puts(member->name);
    puts(member->subjects);
}
