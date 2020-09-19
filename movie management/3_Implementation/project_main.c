
#include "sdlc.h"
int main()
{
	int ch;

 	do{
	printf("\n====================================================================");
	printf("\n");
	printf("\t Movie or series finding ");
	printf("\n");
	printf("\n====================================================================");

	printf("\nPress <1> Insert Movie or series");
  printf("\nPress <2> View All Movie or series");
	printf("\nPress <3> Find Movie ");
	printf("\nPress <4> For doing subscriptions of Movie or series ");
	printf("\nPress <5> For seeing old subscriptions of Movie or series ");

   	printf("\nPress <0> Exit ");

   	printf("\nEnter your Choice ::");

		__fpurge(stdin);
   	scanf("%d",&ch);

   	switch (ch)
   	{
    		case 1 :
    		insert_details();
   	   	break;

		    case 2:
    		viewAll();
   		  break;

		    case 3:
    		find();
   		  break;

			  case 4:
				subscriptions();
				break;

				case 5:
				old_record();
				break;

        case 0:
    		exit(0);
    		break;

    		default:
    		printf("Wrong choice !");
    		break;
   	}
 }while(ch!=0);

return 0;
}
