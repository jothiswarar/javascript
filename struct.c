#include <stdio.h>
#include <string.h>
struct group_member
{
    char name[25];
    char subject[100];
}group;
void store_file(struct group_member member);
void printmember_details(struct group_member *member)
{
    puts( member->name);
    puts( member->subject);
}
int main()
{
    store_file(group);
    return 0;
}
void store_file(struct group_member member){
    FILE *group_memberfile;
    char nameof[25], subjectcan[100];
    group_memberfile=fopen("group_member.txt","w+");
    printf("enter name of person:");
    gets(nameof);
    printf("enter all the subject he do very well (use ,):");
    gets(subjectcan);
    strcpy(member.name, nameof);
    strcpy(member.subject, subjectcan);
    printmember_details(&member);
    fputs(member.name, group_memberfile);
    fputs("\n", group_memberfile);
    fputs(member.subject,group_memberfile);
    fclose(group_memberfile);
}