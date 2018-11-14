#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int wordsnumber = 0, wordcheck;
    size_t lengthtext;
    int j = 1;
    char text[256], delimiter[7] = " .,:;-\n";
    int counter=0;
    fgets(text, 256, stdin);
    if (text[strlen(text) - 1] == '\n')
    text[strlen(text) - 1] = '\0';

    char *word=strtok(text,delimiter);
    char *word1=word;
    while (word!=NULL)
    {
        if(strcmp(word1,word)==0)
        {
            counter+=1;
        }
        word=strtok(NULL,delimiter);
    }
    printf("\n%s = %d times",word1,counter);
}
