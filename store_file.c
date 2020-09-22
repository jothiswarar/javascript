
void store_file(struct group_member member);
void printmember_details(struct group_member *member)
{
    puts(member->name);
    puts(member->subject);
}
void store_file(struct group_member member)
{
    FILE *c;
    char nameof[25], subjectcan[100], a[25];

    printf("enter name of person(first letter in capital):\n");
    gets(nameof);
    printf("enter all the subject he do very well (use ,):\n");
    gets(subjectcan);
    strcpy(member.name, nameof);
    strcpy(member.subject, subjectcan);
    printmember_details(&member);
    printf("enter file name with extension");
    gets(a);
    c = fopen(a, "a+");
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

