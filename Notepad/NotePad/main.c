#include<stdio.h>
#include<conio.h>
#include<string.h>

/*
Important!!!!
Do not forget to change the working directory!
dir = "F:\\test\\"
*/

void new_file ()
{
    char dir[100] = "F:\\test\\";
	char fname [10] , c ,text[100];
	char allText[10][100];
	int numOfLines = 1,lines;
	printf("Name with type: ");
	scanf("%s",fname);
	FILE * file;
	printf("Enter the number of lines you want to type (Max 10): ");
	scanf("%d",&numOfLines);
	printf("------Start typing------\n");
	strcat(dir,fname);
	file = fopen(dir,"w");
	for(lines=0; lines<numOfLines; lines+=1){
		scanf("%s",text);
		strcpy(allText[lines],text);
	}
	printf("Do you want to Save (Y/N)? ");
	scanf(" %c",&c);
	if (c == 'Y'){
		for(lines=0; lines<numOfLines; lines+=1){
			fprintf(file,"%s",allText[lines]);
			fprintf(file,"%s","\n");
		}
		printf("File saved successfully\n");
	}
	fclose(file);
	return;
}
void open_file()
{
    char dir[100] = "F:\\test\\";
	char fname[10],text[100],c;
	char allText[10][100];
	int numOfLines = 1,lines;
	FILE * file;
	printf("File name with type: ");
	scanf("%s",fname);
	strcat(dir,fname);
	file = fopen(dir,"r");
	printf("------Existing Content------\n");
	while ( fgets( text, sizeof( text ), file ) != NULL ) {
        //puts( text );
        printf("%s",text);
    }
    fclose(file);
	printf("Add more (Y/N)? ");
	scanf(" %c",&c);
	if (c == 'Y')
	{
	    file = fopen(dir,"a");
        printf("Enter the number of lines you want to type (Max 10): ");
        scanf("%d",&numOfLines);
        printf("------Start typing------\n");
        for(lines=0; lines<numOfLines; lines+=1){
            scanf("%s",text);
            strcpy(allText[lines],text);
        }
        printf("Do you want to Save (Y/N)? ");
        scanf(" %c",&c);
        if (c == 'Y'){
            for(lines=0; lines<numOfLines; lines+=1){
                fprintf(file,"%s",allText[lines]);
                fprintf(file,"%s","\n");
            }
            printf("File saved successfully\n");
        }
        fclose(file);
	}
    return;
}

void rename_file()
{
    char dir[100] = "F:\\test\\";
	char oldname[100];
    char newname[100];
    strcpy(oldname,dir);
    strcpy(newname,dir);
    int ret;
    printf("Old Name: ");
    scanf("%s",dir);
    strcat(oldname,dir);
    printf("New name: ");
    scanf("%s",dir);
    strcat(newname,dir);
    ret = rename(oldname, newname);
    if(ret == 0) {
        printf("File renamed successfully\n");
    } else {
        printf("Error: unable to rename the file\n");
    }
}


int main()
{
	char choice = 'E';
	int exitFlag = 0;
	printf("~~~~NOTEPAD~~~~\n");
	do
	{
        printf("New\t N\nOpen\t O\nRename\t R\nExit\t E\n");
		printf("\n");
		printf("Task: ");
		scanf(" %c",&choice);
		switch(choice)
		{
			case 'N':
						new_file();
						break;
			case 'O': open_file();
						break;
			case 'R': rename_file();
						break;
			case 'E': exitFlag = 1;
						break;
			default: printf("\nInvalid Choice");
		}
		if(exitFlag){
			break;
		}
	}while (!exitFlag);
	printf("\nBye!");
	return 0;
}

