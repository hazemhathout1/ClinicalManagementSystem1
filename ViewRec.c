#include<stdio.h>

void ViewRecord()
{
	struct Node*node=head;
	int ID;
	char x;
	if(node==NULL)
	{
		printf("\t=================================\n");
		printf("\t\tNo patient Data!\n");
		printf("\t=================================\n");
		return;
	}
	printf("Please enter ID:");
	scanf("%d",&ID);
	if(!occ(ID))
	{
		printf("\t====================================\n");
		printf("\t\tThis ID is not exist\n");
		printf("\t====================================\n");
		return;
	}
	printf("ID\tAge\tGender\tFrom\tTo\n");
	while(node!=NULL)
	{
		if(node->data==ID)
		{
		switch(node->Res)
		{
			case 1:
			printf("%d\t%d\t %c\t2:00\t2:30\n",node->data,node->age,node->Gender);
			return;
			case 2:
			printf("%d\t%d\t %c\t2:30\t3:00\n",node->data,node->age,node->Gender);
			return;
			case 3:
			printf("%d\t%d\t %c\t3:00\t3:30\n",node->data,node->age,node->Gender);
			return;
			case 4:
			printf("%d\t%d\t %c\t4:00\t4:30\n",node->data,node->age,node->Gender);
			return;
			case 5:
			printf("%d\t%d\t %c\t4:30\t5:00\n",node->data,node->age,node->Gender);
			return;
			default:
			printf("%d\t%d\t %c\tNA\tNA\n",node->data,node->age,node->Gender);
			return;
		}
		}
		node=node->next;
	}
}