#include<stdio.h>

void EditRecord()
{
	char nAge,nGen,nID,x;
	int y,c;
	printf("Please enter ID:");
	scanf("%d",&nID);
	struct Node*node=head;
	if(!occ(nID))
	{
		printf("\t====================================\n");
		printf("\t\tThis ID is not exist\n");
		printf("\t====================================\n");
		return;
	}
	while(node!=NULL)
	{
		if(node->data==nID)
		{
			printf("\t\t1-Patient's Age\n\t\t2-Patient's Gender.\n\t\t3-Reservation\n");
			printf("What data you want to change:");
			scanf("%d",&y);
			switch(y)
			{
				case 1:
				printf("Please enter the new age:");
				scanf("%d",&node->age);
				return;
				case 2:
				printf("Please enter the Gender:");
				scanf(" %c",&node->Gender);
				return;
				case 3:
				if(!Rocc(node->data))
				{
					printf("\t=========================================\n");
					printf("\t\tThis Patient has no reservation\n");
					printf("\t=========================================\n");
					return;
				}
				do{
				printf("Available slots:\n");
				printf("\t\t1)2:00PM-2:30PM\n\t\t2)2:30PM-3:00PM\n\t\t3)3:00PM-3:30PM\n\t\t4)4:00PM-4:30PM\n\t\t5)5:00PM-5:30pm\n");
				printf("Please enter the slot:");
				scanf("%d",&x);
				c=Rocc1(x);
				if(c)
				{
				printf("\t =======================================\n");
				printf("\t\tThis Slot is already reserved\n");
				printf("\t =======================================\n");
				}
				}while(x>5||c>0);
				
				node->Res=x;
		}
		node=node->next;
	}
}
}