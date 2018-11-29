#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fill_file(FILE *f){
    char text[200];
    f = fopen("C:\\Users\\Sofiia\\Desktop\\labprog9\\file1.txt","w");
    printf("Enter 10 lines to fill file1:");
    for(int i=0;i<10;i++){
        fgets(text,200,stdin);
        fputs(text,f);
    }
    fclose(f);
    }
void read_file(FILE *f){
    char buffer[500];
    f = fopen("C:\\Users\\Sofiia\\Desktop\\labprog9\\file1.txt","r");
    if(f){
        while (fscanf(f, "%s", buffer) != EOF) {
            printf("%s\n", buffer);
        }
    }
    fclose(f);
}
void copy_file(FILE *f1,FILE *f2) {
    f1 = fopen("C:\\Users\\Sofiia\\Desktop\\labprog9\\file1.txt","r");
    f2 = fopen("C:\\Users\\Sofiia\\Desktop\\labprog9\\file2.txt","w");
    char text[257];

    fgets(text, 256, f1);

    do {

        if (text[strlen(text) - 2] == text[0]) {

            fputs(text, f2);

        }

        fgets(text, 256, f1);
    }while(!feof(f1));
    fclose(f1);
    fclose(f2);

}
int count_chars(FILE *f2){

    char text[200];
    int count = 0, i;
    f2 = fopen("C:\\Users\\Sofiia\\Desktop\\labprog9\\file2.txt","r");
    fgets(text,200,f2);

    do{

        count+=strlen(text)-1;

        fgets(text,256,f2);

    }while(!feof(f2));
    fclose(f2);
    return count;

}

int main(){
    FILE *f1;
    FILE *f2;
    fill_file(f1);
    read_file(f1);
    copy_file( f1,f2);
    printf("The number of chars in file 2: %d",count_chars(f2));

    return 0;
}