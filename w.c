#include<stdio.h>
#include<conio.h>

void main()
{
    FILE *fp;
    int i = 10;
    char ch = 'W';
    char str[50] = " I love India";

    fp = fopen("file.txt","w");

    fputc(ch,fp);
    fputs(str, fp);
    for(i=0;i!=strlen(str);i++)
    fputc(str[i],fp);
    fprintf(fp,"\n%d%s%c", i, str, ch);
   fclose(fp);

}
