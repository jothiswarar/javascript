#include <stdio.h>
#include <string.h> //provides thefunction strcpy for this program

struct group_member; // declaring the structure varible with global scope to use in another file
void store_filetxt(struct group_member member);
void read_filetxt(struct group_member member);
void printmember_details(struct group_member *member);
void read_filecsv(struct group_member member);
void store_filecsv(struct group_member member);
struct group_member //defining the structure variable
{
    char name[25];
    char subject[100];
} group; // structure variable is group
int main()
{

    puts("you want read or write (w-write/r-read)");
    char wr = getchar();
    //char txt_csv[20];
    switch (wr)
    {
    case 'w':
        store_filetxt(group);
        store_filecsv(group);
        break;
    case 'r':
        read_filetxt(group);
        read_filecsv(group);
        break;
    default:
        printf("enter only w or r");
    }
    return 0;
}
void read_filetxt(struct group_member member)
{
    char file_name_txt[50] = "group_details.txt";
    FILE *p;
    char file[1000];
    unsigned long long int a;
    printf("how lines you want to read the txt file\n");
    scanf("%d", &a);
    p = fopen(file_name_txt, "a+");
    for (int n = a; n != 0; n--)
    {
        fgets(file, 1000, (FILE *)p);
        printf("%s", file);
    }
}
void read_filecsv(struct group_member member)
{
    FILE *p;
    char file_name_csv[50] = "group_details.csv";
    char file[1000];
    unsigned long long int a;
    printf("how lines you want to read the csv file\n");
    scanf("%d", &a);
    p = fopen(file_name_csv, "a+");
    for (int n = a; n != 0; n--)
    {
        fgets(file, 1000, (FILE *)p);
        printf("%s", file);
    }
}

void printmember_details(struct group_member *member)
{
    puts(member->name);
    puts(member->subject);
}
void store_filetxt(struct group_member member)
{
    FILE *c;
    char nameof[25], subjectcan[100];
    char file_name_txt[50] = "group_details.txt";

    printf("enter name of person(first letter in capital):\n");
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
