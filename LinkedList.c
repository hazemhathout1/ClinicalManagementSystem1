#include<stdio.h>
#include<stdlib.h>
#include"STD_Types.h"

struct Node
{
	u8 data;
	u8 Gender;
	u8 age;
	u8 Res;
	/* u8 *F_name;
	u8 *L_name;	 */
	struct Node*next;
}*head;

void push(u8 new_data,u8 new_age,u8 Gend/* ,u8 *name1,u8 *name2 */)
{
	struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=new_data;
	new_node->age=new_age;
	new_node->Gender=Gend;
	new_node->Res=0;
/* 	new_node->F_name=name1;
	new_node->L_name=name2; */
	new_node->next=NULL;
	if(head==NULL)
	{
		head=new_node;
	}
	else{
		new_node->next=head;
		head=new_node;
	}
}
void printlist(struct Node* node)
{
	printf("ID\tAge\tGender\tFrom\tTo\n");
	while(node!=NULL)
	{
		switch(node->Res)
		{
			case 1:
			printf("%d\t%d\t %c\t2:00\t2:30\n",node->data,node->age,node->Gender);
			break;
			case 2:
			printf("%d\t%d\t %c\t2:30\t3:00\n",node->data,node->age,node->Gender);
			break;
			case 3:
			printf("%d\t%d\t %c\t3:00\t3:30\n",node->data,node->age,node->Gender);
			break;
			case 4:
			printf("%d\t%d\t %c\t4:00\t4:30\n",node->data,node->age,node->Gender);
			break;
			case 5:
			printf("%d\t%d\t %c\t4:30\t5:00\n",node->data,node->age,node->Gender);
			break;
			default:
			printf("%d\t%d\t %c\tNA\tNA\n",node->data,node->age,node->Gender);
			break;
		}
		node=node->next;
	}
}
int occ(u8 search)
{
	struct Node*current =head;
	int c=0;
	while(current!=NULL)
	{
		if(current->data==search)
		{
			c++;
			return c;
		}
	current=current->next;
	}

}int occR()
{
	struct Node*current =head;
	int c=0;
	while(current!=NULL)
	{
		if(current->Res!=0)
		c++;
	current=current->next;
	}
	return c;
}
int Rocc(u8 nID)//check if the patient has reservation
{
	struct Node*node=head;
	int c=0;
	while(node!=NULL)
	{
		if(node->data==nID)
		{
			if(node->Res!=0)
			{
				c++;
				return c;
			}
		}
		node=node->next;
	}
}
int Rocc1(u8 Res1)//check if a patient has reservation in this slot
{
	struct Node*node=head;
	u8 c=0;
	while(node!=NULL)
	{
		if(node->Res==Res1)
		{
			c++;
			return c;
		}
		node=node->next;
	}
}