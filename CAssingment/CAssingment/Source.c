#include<stdio.h>


typedef struct bugs
{
	//bug file variables
	int bugID;
	char name[100];
	char status[60];
	char Reporter[100];
}bugsPrint;

//printing
void printBug(bugsPrint display);

void main()
{
	//variables
	FILE* Bugs;
	FILE* Urgency;
	bugsPrint myBugs;
	char username[100];
	int inputs;
	

	Bugs = fopen("Bugs.txt", "r");//file opening

	if (Bugs == NULL)
	{
		printf("Sorry the file could not be opened\n");


		
	}



	else
	{
		while (!feof(Bugs))
		{
			//DEBUG........printf("TEST");

			inputs = fscanf(Bugs, "%d %s %s %s", myBugs.bugID, myBugs.name, myBugs.status, myBugs.Reporter);

			
		}

		fclose(Bugs);//file closing
	}//end of else



}//end of main

void printBug(bugsPrint display)
{
	printf("bug Details are %d %s %s %s\n", display.bugID, display.name, display.status, display.Reporter);

}//end of print