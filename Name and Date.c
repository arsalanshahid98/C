/*	Name: ARSALAN ID: 1820182070	*/
#include <stdlib.h>
#include <stdio.h>

struct  Date
{
	int day;
	int month;
	int year;
};
		
int main()
{  
   FILE *fpointer;
   fpointer = fopen("1820182070.doc", "w");
   if(fpointer == NULL)
   {
      printf("Failed to open the file");
      exit(1);
   }
   struct Date current;
   printf("Enter the current day: ");
   scanf("%d", &current.day);
   printf("Enter the current month: ");
   scanf("%d", &current.month);
   printf("Enter the current year: ");
   scanf("%d", &current.year);

    fprintf(fpointer, " The current date is: %d/%d/%d" ,  current.day, current.month, current.year );
    fprintf(fpointer, "\n\n Student ID: 1820182070" "\n Name: Arsalan" "\n Birth Date: 06/10/1998");
   
   	fclose(fpointer);

   return 0;
}
