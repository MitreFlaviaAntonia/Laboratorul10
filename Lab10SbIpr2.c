#include<stdio.h>
#include<stdlib.h>

char display(FILE *file_to_read_lbl)
{
    char c[100];
    if ((file_to_read_lbl = fopen( "C:\\Users\\Lenovo\\Desktop\\Folder_For_Programming\\CountLines.txt ", "r"))== NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
    else

        while(fscanf(file_to_read_lbl, "%s", c)!=EOF)
        printf("\n%s",c);

        fclose(file_to_read_lbl);

}

int main()
{
    FILE *file_to_read_lbl;
    printf("%c",display(file_to_read_lbl));
    return 0;
}
