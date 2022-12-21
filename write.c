#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp= NULL;
    //char ch = 'a';
    int i;
    char str[50];
    fp = fopen("write.txt", "w");

    if (fp == NULL)
    {
        printf("ERROR");
        exit(1);
    }

    printf("enter the string :");
    gets(str);
    //fputs(str, fp);

  for(i=0;i!=strlen(str);i++)
      fputc(str[i],fp);


//    fputc(ch, fp);
    fclose(fp);
}
