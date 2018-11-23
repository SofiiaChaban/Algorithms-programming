#include <stdio.h>
#include <string.h>

int main() {
    char text[255];



    printf("Enter string: ");
    gets(text);
    char *token = strtok(text," ");
    int num=0;
    while (token != NULL)
    {

        for (int i = 0; i <strlen(token) ;i++) {


            if (token[i] == 'a'|| token[i] == 'A'|| token[i] == 'e'|| token[i] == 'E'||token[i] == 'i'||token[i] == 'I'||token[i] == 'o'||token[i] == 'O'||token[i] == 'U'||token[i] == 'u' ||token[i]=='Y'||token[i]=='y'){

                num++;

            }


        }
        if(num==0)
        {
            printf("%s ",token);
        }
        num=0;



        token = strtok(NULL, " ");
    }

    return 0;
}