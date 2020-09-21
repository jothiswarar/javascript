#include <stdio.h>
#include <string.h>
struct group_member
{
    char name[25];
    char subject[100];
} member;
void store_file(struct group_member member);
void printmember_details(struct group_member *member)
{
    printf("%s\n", member->name);
    printf("%s", member->subject);
}
int main()
{
    char nameof[25], subjectcan[100];
    printf("enter name of person:");
    gets(nameof);
    printf("enter all the subject he can read (use ,):");
    gets(subjectcan);
    strcpy(member.name, nameof);
    strcpy(member.subject, subjectcan);
    printmember_details(&member);
    store_file(member);
    return 0;
}
void store_file(struct group_member member){
    FILE *group_memberfile;
    group_memberfile=fopen("group_member.txt","w+");
    //fprintf(member->name, group_memberfile );
    fprintf(group_memberfile, "%s", member.subject);
    fclose(group_memberfile);
}