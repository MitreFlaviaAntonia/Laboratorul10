#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *file_to_copy_from;
    FILE *file_to_copy_in;
    char c;

    file_to_copy_in = fopen("C:\\Users\\Lenovo\\Desktop\\Folder_For_Programming\\CopyIn.txt ", "w");


    if ((file_to_copy_from = fopen( "C:\\Users\\Lenovo\\Desktop\\Folder_For_Programming\\CopyFrom.txt ", "r"))== NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
    else

        do
        {
            c = getc (file_to_copy_from);

            if(c>='a'&&c<='z')
                c=c-32;

            fputc(c, file_to_copy_in);
        }

    while(c != EOF);

    fclose (file_to_copy_from);
    fclose (file_to_copy_in);
    return 0;
}
