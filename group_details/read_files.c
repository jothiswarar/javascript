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