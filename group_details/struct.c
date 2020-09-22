#include <stdio.h>
#include <string.h> //provides thefunction strcpy for this program

struct group_member;
extern void store_filetxt(struct group_member member); // declaring the function with global scope to use in another file
extern void read_filetxt(struct group_member member);
extern void printmember_details(struct group_member *member);
extern void read_filecsv(struct group_member member);
extern void store_filecsv(struct group_member member);
struct group_member //defining the structure variable
{
    char name[25];
    char subject[100];
} group; // structure variable is group



void printmember_details(struct group_member *member)
{
    puts(member->name);
    puts(member->subject);
}
void store_filecsv(struct group_member member)
{
    FILE *c;
    char nameof[25], subjectcan[100];
    char file_name_csv[50] = "group_details.csv";
    printf("enter name of person(first letter in capital):\n");
    gets(nameof);
    printf("enter all the subject he do very well (use ,):\n");
    gets(subjectcan);
    strcpy(member.name, nameof);
    strcpy(member.subject, subjectcan);
    printmember_details(&member);

    c = fopen(file_name_csv, "a+");
    if (c == NULL)
    {
        printf("there is a error in writing the file");
    }
    else
    {
        fputs("Name of the person:\n", c);
        fputs(member.name, c);
        fputs("\nSubjects he do well:\n", c);
        fputs(member.subject, c);
        fprintf(c, "\n");
        fclose(c);
    }
}
void store_filetxt(struct group_member member)
{
    FILE *c;
    char nameof[25], subjectcan[100];
    char file_name_txt[50] = "group_details.txt";
    puts("enter name of person(first letter in capital):\n");
    gets(nameof);
    printf("enter all the subject he do very well (use ,):\n");
    gets(subjectcan);
    strcpy(member.name, nameof);
    strcpy(member.subject, subjectcan);
    printmember_details(&member);

    c = fopen(file_name_txt, "a+");
    if (c == NULL)
    {
        printf("there is a error in writing the file");
    }
    else
    {
        fputs("Name of the person:\n", c);
        fputs(member.name, c);
        fputs("\nSubjects he do well:\n", c);
        fputs(member.subject, c);
        fprintf(c, "\n");
        fclose(c);
    }
}
