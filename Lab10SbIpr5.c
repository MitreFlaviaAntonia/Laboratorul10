#include<stdio.h>
#include<stdlib.h>
int  LongestLineLength(FILE *file_to_count_from)
{
    char c[100];
    int max=0;
    if ((file_to_count_from = fopen( "C:\\Users\\Lenovo\\Desktop\\Folder_For_Programming\\CountLines.txt ", "r"))== NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
    else

        while(fscanf(file_to_count_from, "%s", c)!=EOF)
        if(strlen(c)>max)
            max=strlen(c);

        fclose(file_to_count_from);
        return max;
}

int main()
{
    FILE *file_to_count_from;
    printf("The max length of a line from this file is %d",LongestLineLength(file_to_count_from));
    return 0;
}
