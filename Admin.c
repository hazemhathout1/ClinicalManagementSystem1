#include<stdio.h>
#include<stdlib.h>
#include "LinkedList.c"
#include "ReserveSlot.c"
#include "AddNewPat.c"
#include "EditRecord.c"
#include "CancelRes.c"

void AdminMode(u8*z)
{
	*z=0;
	int x,a;
	printf("Please Enter the Password:");
	for(int i=0;i<3;i++)
	{
		scanf("%d",&x);
		if(x==1234)
		{
			a++;
			int y;
			int nID;
			printf("\t======================================\n");
			printf("\t\t   Welcome Admin!\n");
			printf("\t======================================\n");
			do{
			printf("\t\t1-Add new Patient Record\n\t\t2-Edit patient Record\n");
			printf("\t\t3-Reserve a slot for the doctor\n\t\t4-Cancel Reservation\n");
			printf("\t\t5-Display patients record\n\t\t6-Exit to Main Menu\nPlease Choose your option:");
			scanf("%d",&y);
			switch(y)
			{
				case 1:
				AddNewPatient();
				break;
				case 2:
				EditRecord();
				break;
				case 3:
				ReserveSlot();
				break;
				case 4:
				CancelReservation();
				break;
				case 5:
				printlist(head);
				break;
				case 6:
				printf("\t================================\n");
				printf("\t\t  Thank You!\n");
				printf("\t================================\n");
				break;
				default:
				printf("You have entered wrong option.\n");
			}
			}while(y!=6);
			break;
		}
		if(i==2&&x!=1234)break;
		printf("\t=================================\n");
		printf("\t\tIncorrect Password!\n");
		printf("\t=================================\n");
		printf("Please try again:");
	}
	if(a==0)
	{
		printf("\t =======================================================\n");
		printf("\t\tIncorrect Password for 3 times, no more tries.\n");
		printf("\t =======================================================\n");
		*z=1;
		return;
	}

}

