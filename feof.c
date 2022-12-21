#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* f;
    char str[100];

    //Check the existence of that file
    if ((f = fopen("file.txt", "r")) == NULL) {
        printf("Cannot open the file...");
        //if not exist program is terminated
        exit(1);
    }

    printf("File content is--\n");
    //print the strings until EOF is encountered
    while (!feof(f)) {
        fgets(str, 100, f);
        //print the string
        printf("%s", str);
    }

    //close the opened file
    fclose(f);

    return 0;
}
