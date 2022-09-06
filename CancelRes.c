#include<stdio.h>

void CancelReservation()
{
	struct Node*node=head;
	int ID;
	char x;
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
			if(node->Res==0)
			{
				printf("\t=======================================\n");
				printf("\t\tThis ID has no Reservation!\n");
				printf("\t=======================================\n");
				return;
			}
			node->Res=0;
			printf("\t=============================================\n");
			printf("\t\tReservation is canceled succefully.\n");
			printf("\t=============================================\n");
			return;
		}
		node=node->next;
	}
	
}