#include <stdio.h>
#include <string.h> //provides thefunction strcpy for this program
//#include "read_files.c"
struct group_member;
extern void store_filetxt(struct group_member member); // declaring the function with global scope to use in another file
extern void read_filetxt(struct group_member member);
extern void read_filecsv(struct group_member member);
extern void printmember_details(struct group_member *member);
extern void store_filecsv(struct group_member member);
struct group_member //defining the structure variable
{
    char name[25];
    char subject[100];
    char date[15]=__DATE__;
} group; // structure variable is group

void read_filetxt(struct group_member member)
{
    char file_name_txt[50] = "group_details.txt";
    FILE *p;
    char file[1000];
    unsigned long long int a;
    puts("how lines you want to read the txt file\n");
    scanf("%d", &a);
    p = fopen(file_name_txt, "a+");
    for (int n = a; n != 0; n--)
    {
        fgets(file, 1000, (FILE *)p);
        printf("&s",file);
    }
}
void read_filecsv(struct group_member member)
{
    FILE *p;
    char file_name_csv[50] = "group_details.csv";
    char file[1000];
    unsigned long long int a;
    puts("how lines you want to read the csv file\n");
    scanf("%d", &a);
    p = fopen(file_name_csv, "a+");
    for (int n = a; n != 0; n--)
    {
        fgets(file, 1000, (FILE *)p);
        printf("%s",file);
    }
}

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
    puts("enter name of person(first letter in capital):\n");
    gets(nameof);
    puts("enter all the subject he do very well (use ,):\n");
    gets(subjectcan);
    strcpy(member.name, nameof);
    strcpy(member.subject, subjectcan);
    printmember_details(&member);

    c = fopen(file_name_csv, "a+");
    if (c == NULL)
    {
        puts("there is a error in writing the file");
    }
    else
    {
        fputs("Name of the person:\n", c);
        fputs(member.name, c);
        fputs("\nSubjects he do well:\n", c);
        fputs(member.subject, c);
        fprintf(c, "\n");
        fputs("time added:\n",c);
        fputs(member.date,c);
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
    puts("enter all the subject he do very well (use ,):\n");
    gets(subjectcan);
    strcpy(member.name, nameof);
    strcpy(member.subject, subjectcan);
    printmember_details(&member);

    c = fopen(file_name_txt, "a+");
    if (c == NULL)
    {
        puts("there is a error in writing the file");
    }
    else
    {
        fprintf(c,"Name of the person:\n");
        fputs(member.name, c);
        fprintf(c,"\nSubjects he do well:\n");
        fputs(member.subject, c);
        fprintf(c, "\n");
        fputs("time added:\n", c);
        fputs(member.date, c);
        fprintf(c, "\n");
        fclose(c);
    }
}
