#include<stdio.h>
#include"ViewRec.c"
#include"ViewRes.c"

void UserMode()
{
	int x;
	do{
		printf("\t\t1-View patient record\n\t\t2-View today's reservation\n\t\t3-Exit to Main Menu");
		printf("\nPlease choose your option:");
		scanf("%d",&x);
	switch(x)
	{
		case 1:
		ViewRecord();
		break;
		case 2:
		ViewReserv();
		break;
		case 3:
		printf("Thank You!\n");
		break;
		default:
		printf("You have entered wrong option.\n");
	}
	}while(x!=3);
	return;
}