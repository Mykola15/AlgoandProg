#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LENGTH 255

void formfile (FILE *f) {
    char buffer[MAX_LENGTH+2];
    printf("Enter 10 strings to fill f1.txt: \n");
    for (int i=0; i<10; i++) {
        fgets(buffer,MAX_LENGTH,stdin);
        if (buffer[strlen(buffer)-1]!='\n') {
            buffer[strlen(buffer)]='\n';
            buffer[strlen(buffer)+1]='\0';
        }
        fputs(buffer, f);

    }
    rewind(f);
};
void copyfile(FILE *f1, FILE *f2, int num1, int num2) {
    char buffer[MAX_LENGTH+2];
    int i=1;
    f2 = fopen("/Users/mykolakoshlan/Desktop/f2.txt", "wb");

    while(1)
    {
        fgets(buffer,MAX_LENGTH+1,f1);
        if (feof(f1)) break;
        if ((num1<i) && (i<num2)) {
            if (buffer[0] == 'A' && (buffer[strlen(buffer)-2] == 'Z'))
            {
                fputs(buffer, f2);
            }
        }
        i++;
    };
    rewind(f1);
    fclose(f2);
};

int countwords (char str[MAX_LENGTH+2]) {
    char *buffer;
    int i=0;
    buffer = strtok(str," ");
    while (buffer != NULL) {
        i++;
        buffer = strtok(NULL," ");
    }
    return i;
}

int main(void) {
    FILE *f1;
    FILE *f2 = NULL;

    f1 = fopen("/Users/mykolakoshlan/Desktop/f1.txt", "w+b");

    int num1, num2;
    char str[MAX_LENGTH+2];
    formfile(f1);
    printf("\n");
    printf("Enter NUM1 and NUM2 to copy some strings between them: ");
    scanf("%d %d", &num1, &num2);
    copyfile(f1,f2,num1,num2);
    f2 = fopen("/Users/mykolakoshlan/Desktop/f2.txt","r+b");
    fgets(str,MAX_LENGTH+1,f2);
    printf("%d words\n", countwords(str));
    fclose(f1);
}
