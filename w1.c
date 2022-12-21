#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    FILE *fp=NULL;
    int i, a=10;
    char ch='a';
    char str [50];

    fp=fopen("file1.txt","w");

    if (fp==NULL)
    {
        printf("Error");
        exit(1);
    }

    printf("Enter the string :");     // user input
    gets(str);
    //fprintf(fp,"%d %s %c ",a,str,ch);
   // fputs(str,fp);                 //3
   for(i=0;i!=strlen(str);i++)    //2
      fputc(str[i],fp);

    //fputc(ch,fp);      // 1
    fclose(fp);
}
