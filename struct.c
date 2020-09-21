#include <stdio.h>
struct group_member
{
    char name[15];
    char subject[17];
};
int main()
{
    struct group_member monish={"Monish","Tamil"}
    /*monish.name= "Monish" ;
    monish.subject= "tamil";*/
    printf ("%s",monish.name);
    printf ("%s",monish.subject);
    return 0;
}