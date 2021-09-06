#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int main(){

   int run=1,num_evnt,inte_evnt;
   printf("Enter number of events\n");
   scanf("%d",&num_evnt);
   init_module(num_evnt);
   printf("\nEnter the interested event \nIf you terminate the process enter -1");
   while (run)
       {
        scanf("%d",&inte_evnt);
        if (inte_evnt != -1)
         {
              if ((inte_evnt>0)&&(inte_evnt<=num_evnt))
                   {
                     check_event(inte_evnt);
                    }
              else {
                    printf("No such event");
                    }
          }
	else{
		run=0;
	}
       }
return 0;
}
     
