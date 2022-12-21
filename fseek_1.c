#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp=NULL;
    char ch;
    char str[50];
   // fp = fopen("write.txt", "r");
    fp = fopen("write.txt", "r+");

    if (fp == NULL)
    {
        printf("error");
        exit(1);
    }
    fseek(fp, 17, SEEK_SET);
    fputs("a",fp);
   /* ch= fgetc(fp);
    printf("%c", ch);

    fseek(fp, -3, SEEK_END);
    ch= fgetc(fp);
    printf("%c", ch);*/
    fclose(fp);


}
