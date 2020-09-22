#include <iostream>
#include "write_files.c"
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
        puts("enter only w or r");
    }
//getc();
    return 0;
}
