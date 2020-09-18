
#include "sdlc.h"
	

void insert_details()
{

	FILE *fp;
	struct book b;
	printf("Enter imdb rating :- ");

	__fpurge(stdin);
	scanf("%s",b.imdb);
	printf("Enter movie or series name :- ");

	__fpurge(stdin);
	scanf("%s",b.name);
	printf("Enter Release year:- ");

	__fpurge(stdin);
	scanf("%s",b.year);
	printf(" Price:- ");

	__fpurge(stdin);
	scanf("%d",&b.cost);

//	__fpurge(stdin);
	fp=fopen("data.txt","a");

	if(fp == NULL)
	{
		printf("FIle not Found");
	}
	else
	{
		fprintf(fp,"%s %s %s %d \n",b.imdb,b.name,b.year,b.cost);
		printf("Record insert Sucessfull");
	}
		printf("\n");
	fclose(fp);
}
void find() //find details
{
	struct book b;
	FILE *fp;

	char ch[20];
	printf("Enter movie or series name :");
	scanf("%s",ch);
	//system("clear");
	fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{
		while(getc(fp) != EOF)
		{
			fscanf(fp,"%s %s %s %d",b.imdb,b.name,b.year,&b.cost);
			if(strcmp(b.name,ch) == 0)
			{
				//printf("%s / %s / %s / %d\n",b.imdb,b.name,b.year,b.cost);
				printf("\n Record Found\n");
				printf("\n\t\timdb ::%s",b.imdb);
				printf("\n\t\tmovie name ::%s",b.name);
				printf("\n\t\tmovie year ::%s",b.year);
				printf("\n\t\tprice of movie or series ::%d",b.cost);
				break;
			}
		}

	}

	fclose(fp);
}
void viewAll()
{
	char ch;
	FILE *fp;

	fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{
		system("clear");
		__fpurge(stdin);
		while( ( ch =fgetc(fp) ) != EOF )
      		printf("%c",ch);

	}
	fclose(fp);
}

void subscriptions()
{
 struct book b;
	FILE *fp;

	FILE *ufp;

	int total_subcriptions,total_amount;
	char mobile[15];
	char name[20];


	char ch; //used in display all movies or series
	char movie_name[20]; //for searching movie name
	printf("====displaying available movie or series in the order of imbd,name,released year and cost of each subscriptions====\n\n");
	// disply all movies
	fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{
		//system("cls");
		__fpurge(stdin);
		while( ( ch = fgetc(fp) ) != EOF )
      		printf("%c",ch);

	}
	fclose(fp);

	//display ends
	printf("\n For taking subscriptions Choose Movie or series(Enter Movie name)\n");
	printf("\n Enter movie name :");

	__fpurge(stdin);
	scanf("%s",movie_name);
	//system("clear");
	fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{
		__fpurge(stdin);
		while(getc(fp) != EOF)
		{
		//	fscanf(fp,"%s %s %s %d",b.imdb,b.name,b.year,&b.cost);
			if(strcmp(b.name,movie_name) == 0)
			{
				//printf("%s / %s / %s / %d\n",b.imdb,b.name,b.year,b.cost);
				printf("\n Record Found\n");
				printf("\n\t\timdb ::%s",b.imdb);
				printf("\n\t\tMovie name ::%s",b.name);
				printf("\n\t\tyear name ::%s",b.year);
				printf("\n\t\tPrice of ticket::%d",b.cost);
			}
		}

	}
	printf("\n* Fill Details  *");
	printf("\n your name :");

	__fpurge(stdin);
	scanf("%s",name);
	printf("\n mobile number :");

	__fpurge(stdin);
	scanf("%s",mobile);
	printf("\n Total number of subscriptions :");

	__fpurge(stdin);
	scanf("%d",&total_subcriptions);


	total_amount = b.cost * total_subcriptions;

	printf("\n ***** ENJOY MOVIE ****\n");
	printf("\n\t\tname : %s",name);
	printf("\n\t\tmobile Number : %s",mobile);
	printf("\n\t\tmovie name : %s",b.name);
	printf("\n\t\tTotal subscriptions : %d",total_subcriptions);
	printf("\n\t\tcost per ticket : %d",b.cost);
	printf("\n\t\tTotal Amount : %d",total_amount);


	ufp=fopen("oldTransection.txt","a");  //this file teels previous transction
	if(ufp == NULL)
	{
		printf("FIle not Found");
	}
	else
	{
		fprintf(ufp,"%s %s %d %d %s %d \n",name,mobile,total_subcriptions,total_amount,b.name,b.cost);
		printf("\n Record insert Sucessfull to the old record file");
	}
		printf("\n");
	fclose(ufp);
	fclose(fp);

}

void old_record()
{
	char ch;
	FILE *fp;

	//system("clear");

	fp = fopen("oldTransection.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{
		printf("displaying in the order of \n name\n mobile number\n number of subscriptions\n total amount\n name of the movie\n  cost of each subscriptions");
		system("clear");
		while( ( ch = fgetc(fp) ) != EOF )
      		printf("%c",ch);

	}
	fclose(fp);


}
