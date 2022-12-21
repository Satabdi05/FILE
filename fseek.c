
#include<stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("file1.txt", "r");
    //fputs("This is my file", fp);

    // Moving pointer to end
    fseek(fp, 0, SEEK_END);
    //fputs(" programming", fp);

    // Printing position of pointer
    printf("%ld", ftell(fp));

    return 0;
}
