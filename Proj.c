#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <process.h>
#include <dir.h>


#define MAX_SIZE 500


char command1[MAX_SIZE];
char command2[MAX_SIZE];
char command3[MAX_SIZE];
char command4[MAX_SIZE];
char address[MAX_SIZE];
char adrs;
char line;
char character;

FILE *file;

void create_file();
void input_string(char str[MAX_SIZE]);


int main() {

    while (1) {
        scanf("%s", command1);

        if (strcmp(command1, "exit") == 0) {
            return 0;
        } else if (strcmp(command1, "createfile") == 0) {
            create_file();
        } else if (strcmp(command1, "insertstr") == 0) {

        } else if (strcmp(command1, "cat") == 0) {

        } else if (strcmp(command1, "removestr") == 0) {

        } else if (strcmp(command1, "copystr") == 0) {

        } else if (strcmp(command1, "cutstr") == 0) {

        } else if (strcmp(command1, "pastestr") == 0) {

        } else if (strcmp(command1, "find") == 0) {

        } else if (strcmp(command1, "replace") == 0) {

        } else if (strcmp(command1, "grep") == 0) {

        } else if (strcmp(command1, "undo") == 0) {

        } else if (strcmp(command1, "auto-indent") == 0) {

        } else if (strcmp(command1, "compare") == 0) {

        } else if (strcmp(command1, "tree") == 0) {

        } else if (strcmp(command1, "arman") == 0) {

        } else {
            printf("Invalid command!Please try again\n");
        }
    }
}
void input_string(char str[MAX_SIZE])
{
    adrs = getchar();
    ///ok
    //printf("adrs1 is : (%c)\n", adrs);
    while(adrs ==' ')
    {
        adrs = getchar();
        //printf("adrs2 is (%c)\n", adrs);
    }
    if(adrs != '"') str[0] = adrs; ///for witout space
    //printf("STR[0] IS (%c)\n", adrs);
    //
    //printf("adrs3 = (%c)\n", adrs);
    if(adrs == '"') {
        int i = 0;
        adrs = getchar();
        while (adrs != '"') {
            //printf("WHILE IS EXCUTED!--");
            if (adrs == '\n') break;

            str[i] = adrs;
            //printf("STR IS (%s)\t", str);
            adrs = getchar();
            //printf("adrs4 is : (%c)\n", adrs);
            i++;
        }
        str[i] = '\0';
    }
    else
    {
        scanf("%s", str+1);
    }
}

int Check_file_existance(const char *fname)
{
    if((file = fopen(fname,"r")))
    {
        fclose(file);
        return 1;
    }
        return 0;///0 means exists!
}
void createFolder(char Name[MAX_SIZE])
{
    int check;
    gets(Name);
    check = mkdir(Name);
    free(Name);
    if (!check)
        printf("Directory created\n");
    else
    {
        printf("Unable to create directory\n");
        exit(1);
    }
    getch();
    system("dir/p");
    getch();
}
void create_file()
{
    scanf("%s", command2);
    if(strcmp(command2, "--file") == 0)
    {
        input_string(address);
        int a = Check_file_existance(file);
        if(a = 0)
        {
            printf("File Already Exists");
        }

    }
    else
    {
        printf("Invalid command!Please try again\n");
    }
    printf("\nAddress IS : (%s)\n", address);

}


void Insertstr()
{
    char insert_text[MAX_SIZE];
    if(strcmp(command2, "--file") == 0)
    {
        input_string(address);
        scanf("%s", command3);
        if(strcmp(command3, "-str")==0)
        {
            input_string(insert_text);
            if(strcmp(command4, "-pos")==0)
            {
                scanf("%d:%d",&character,&line);


            }
            else{
                printf("Invalid command!Please try again\n");
            }
        }
        else{
            printf("Invalid command!Please try again\n");
        }
    }
    else
    {
        printf("Invalid command!Please try again\n");
    }
}