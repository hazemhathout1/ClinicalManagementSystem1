#include <stdio.h>
#include<stdlib.h>


void AddNewPatient()
{
	u8 age;
	u8 id;
	u8 gend;
/* 	u8 name1[10];
	u8 name2[10];
	printf("Please enter First name:");
	scanf(" %s",&name1);
	printf("Please enter second name:");
	scanf(" %s",&name2); */
	printf("please enter patient ID:");
	scanf("%d",&id);
	int z=occ(id);
	if(z!=0)
	{
		printf("\t========================================\n");
		printf("\t\tThe ID is used before.\n");
		printf("\t========================================\n");
		return;
	}
	printf("please enter patient age:");
	scanf("%d",&age);
	printf("Please enter patient gender:");
	scanf(" %c",&gend);
	push(id,age,gend);
}