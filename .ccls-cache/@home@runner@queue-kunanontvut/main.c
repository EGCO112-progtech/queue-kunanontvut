#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"

#include "Queue.h"

int main(int argc , char **argv) {
  NodePtr headPtr=NULL;
   NodePtr tailPtr=NULL;

  Queue  q;
   q.headPtr=NULL;
   q.tailPtr=NULL;
   q.size=0;

   int i,x,y;
 
  printf("Order\n");
  printf("1. Hamberger 200 Bath");
  printf("2. Salmon sashimi 500 Bath");
  printf("3. Wagyu steak 350 Bath");

 for(i=1;i<argc;i++){
        if(strcmp(argv[i],"x")==0){
            x=dequeue_struct(&q);
          
          do{  printf("Cash : ");
            scanf("%d",&y);
            }while(y>x);
          
         if(x-y != 0) printf("Change is %d",y-x);
          printf("Thank you");
        }
        else {
       enqueue_struct(&q, atoi(argv[i]),atoi(argv[i+1]));
           i++;
        }
 }
  if(q.size > 0){
    printf("%d Order left in Queue",q.size);
  }
  return 0;
}
