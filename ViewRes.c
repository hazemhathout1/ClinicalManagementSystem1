#include<stdio.h>

void ViewReserv()
{
	struct Node*node=head;
	if(node==NULL)
	{
		printf("\t=================================\n");
		printf("\t\tNo patient Data!\n");
		printf("\t=================================\n");
		return;
	}
	else if(!occR())
	{
		printf("\t==========================================\n");
		printf("\t\tThere is no reservations today\n");
		printf("\t==========================================\n");
		return;
	}
	printf("ID\tFrom\tTo\n");
	while(node!=NULL)
	{
		if(node->Res!=0)
		{
		switch(node->Res)
		{
			case 1:
			printf("%d\t2:00\t2:30\n",node->data);
			break;
			case 2:
			printf("%d\t2:30\t3:00\n",node->data);
			break;
			case 3:
			printf("%d\t3:00\t3:30\n",node->data);
			break;
			case 4:
			printf("%d\t4:00\t4:30\n",node->data);
			break;
			case 5:
			printf("%d\t4:30\t5:00\n",node->data);
			break;
		}
		}
		node=node->next;
	}
}