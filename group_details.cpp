#include <iostream>
#include "struct.c"
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
//getc();
    return 0;
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