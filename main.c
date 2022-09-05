#include<stdio.h>
#include <stdlib.h>
#include"STD_Types.h"
#include"Admin.c"
#include"user.c"
//Hazem Mahmoud
//Hossam

int main()
{
	int a,x,y;
	u8 z=0;
	printf("\t===================================\n");
	printf("\t\tWelcome to The Clinic!\n");
	printf("\t===================================\n");
	do{
		
	printf("\t\t1-Admin Mode:\n\t\t2-User Mode\n\t\t3-Exit\nPlease Choose your option:");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
		AdminMode(&z);//Password:1234
		break;
		case 2:
		UserMode();
		break;
		case 3:
		printf("\t================================\n");
		printf("\t\t  Thank You!\n");
		printf("\t================================\n");
	}
	}while(a!=3&&z==0);
}



