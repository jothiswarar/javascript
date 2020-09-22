#include <stdio.h>
#include <string.h>
struct group_member
{
    char name[25];
    char subject[100];

} group;
void store_file(struct group_member member);
void read_file(struct group_member member);
void printmember_details(struct group_member *member)
{
    puts(member->name);
    puts(member->subject);
}
int main()
{
    store_file(group);
    return 0;
}

void store_file(struct group_member member)
{
    FILE *group_memberfile, *c;
    char nameof[25], subjectcan[100];
    printf("enter name of person(first letter in capital):\n");
    gets(nameof);
    printf("enter all the subject he do very well (use ,):\n");
    gets(subjectcan);
    strcpy(member.name, nameof);
    strcpy(member.subject, subjectcan);
    printmember_details(&member);
    group_memberfile = fopen("group_details.txt", "a+");
    if (group_memberfile == NULL)
    {
        printf("error in opening file");
    }
    else
    {

        fputs("date modified or added:", c);
        fputs(__DATE__, group_memberfile);
        fprintf(group_memberfile, ".\n");
        fputs("Name of the person:\n", group_memberfile);
        fputs(member.name, group_memberfile);
        fputs(".\nSubjects he do well:\n", group_memberfile);
        fputs(member.subject, group_memberfile);
        fprintf(group_memberfile, ".\n");
        fclose(group_memberfile);
    }
    c = fopen("group_details.csv", "a+");
    if (c == NULL)
    {
        printf("there is a error in writing the file");
    }
    else
    {
        fputs("date modified or added:", c);
        fputs(__DATE__, c);
        fprintf(c, "\n");
        fputs("Name of the person:\n", c);
        fputs(member.name, c);
        fputs("\nSubjects he do well:\n", c);
        fputs(member.subject, c);
        fprintf(c, "\n");

        fclose(c);
    }
    if (group_memberfile != NULL && c != NULL)
    {
        read_file(member);
    }
}
void read_file(struct group_member member)
{
    char file_name_txt[50] = "group_details.txt";
    char file_name_csv[50] = "group_details.csv";
    FILE *p, *c;
    char file[1000];
    unsigned long long int a;
    puts("how lines you want to read the txt file\n");
    scanf("%d", &a);
    p = fopen(file_name_txt, "a+");
    for (int n = a; n != 0; n--)
    {
        fgets(file, 1000, (FILE *)p);
        printf("%s", file);
    }
    c = fopen(file_name_csv, "a+");
    for (int n = a; n != 0; n--)
    {
        fgets(file, 1000, (FILE *)c);
        printf("%s", file);
    }
}
