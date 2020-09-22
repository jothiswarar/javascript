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
        fputs("time added:\n", c);
        fputs(member.date, c);
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
        fprintf(c, "Name of the person:\n");
        fputs(member.name, c);
        fprintf(c, "\nSubjects he do well:\n");
        fputs(member.subject, c);
        fprintf(c, "\n");
        fputs("time added:\n", c);
        fputs(member.date, c);
        fprintf(c, "\n");
        fclose(c);
    }
}