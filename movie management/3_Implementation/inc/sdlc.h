#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct book
{
	char imdb[10];
	char name[20];
	char year[10];
	int cost;


}b;


void insert_details();//for inserting movie details
void viewAll(); // for view all data
void find(); // for finding data
void subscriptions();  //for geting subscriptions
void old_record(); //for view old recorrds of users,booked tickets

