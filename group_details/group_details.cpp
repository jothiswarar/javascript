#include <iostream>
#include "read_files.c"
#include "write_files.c"
using namespace std;
int main()
{

    puts("you want read or write (w-write/r-read)");
    char wr = getchar();
    char file_name[4];
    cout << "enter the file extension";
    cin >> file_name;

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
