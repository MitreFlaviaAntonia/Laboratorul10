#include<stdio.h>
#include<stdlib.h>
int CharacterCounter(FILE *file_to_count_from)
{
    char c;
    int nr=0;
    if ((file_to_count_from = fopen( "C:\\Users\\Lenovo\\Desktop\\Folder_For_Programming\\CountChr.txt ", "r"))== NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
    else
        do
        {
            c = getc (file_to_count_from);
            nr++;
        }
    while(c != EOF);
    fclose(file_to_count_from);
    return nr;
}

int main()
{
    FILE *file_to_count_from;
    printf("The file contains %d characters",CharacterCounter(file_to_count_from)-1);
    return 0;
}
