#include<stdio.h>
#include<stdlib.h>

void main()
{
 FILE *fp =NULL;
 char str[50];
 char ch;

 fp = fopen("write.txt", "r");
  if (fp == NULL)
  {
    printf("Error");
    exit(1);
  }


 /*while(!feof(fp))      ///this feof file return falls if this is not end of files
  {                    //at first it at first letter in a word, that means its not endofFiles, so 0 returns . so use it !
    ch= fgetc(fp);
    printf("%c", ch);
  }
    fclose(fp);*/

    while(!feof(fp))
    {
        fgets(str, 10, fp);      //first argument would be str, next how much character want to read one time,
        printf("%s",str);          // then file pointer fp
    }
    fclose(fp);
}
