#include<stdio.h>


void ReserveSlot()
{
	struct Node*node=head;
	int ID;
	char x,c;
	printf("Please enter ID:");
	scanf("%d",&ID);
	if(!occ(ID))
	{
		printf("\t====================================\n");
		printf("\t\tThis ID is not exist\n");
		printf("\t====================================\n");
		return;
	}
	while(node!=NULL)
	{
		if(node->data==ID)
		{
			do
			{
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