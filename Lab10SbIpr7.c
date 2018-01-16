#include<stdio.h>
#include<string.h>

FILE *write_in;
int i;
int x;
float avg;
int count;

int main()
{
    if((write_in=fopen("C:\\Users\\Lenovo\\Desktop\\Folder_For_Programming\\write_in.txt","w"))==NULL)
    {
        printf("Error opening file!");
        exit(1);
    }

    for(i=1;i<=1000;i++)
    fprintf(write_in,"%d \n",i);

    fclose(write_in);

    if((write_in=fopen("C:\\Users\\Lenovo\\Desktop\\Folder_For_Programming\\write_in.txt","r"))==NULL)
    {
        printf("Error reading from file!");
        exit(2);
    }

    avg=0;

    for(i=1;i<=1000;i++)
    {
        fscanf(write_in,"%d",&x);
        avg=avg+x;
    }

    avg=avg/1000;
    printf("%f",avg);

    fclose(write_in);

    if((write_in=fopen("C:\\Users\\Lenovo\\Desktop\\Folder_For_Programming\\write_in.txt","r"))==NULL)
    {
        printf("Error 23 reading from file!");
        exit(3);
    }

    count=0;

    for(i=1;i<1000;i++)
    {
        fscanf(write_in,"%d",&x);
        if(x>avg)
        count++;
    }

    printf("\nHow many numbers are greater that the average: %d",count);
    fclose(write_in);
    return 0;
}
