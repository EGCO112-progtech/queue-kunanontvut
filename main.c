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

   int i,x,y,c=1;
 
  printf("Order\n");
  printf("1. Hamberger 200 Bath\n");
  printf("2. Salmon sashimi 500 Bath\n");
  printf("3. Wagyu steak 350 Bath\n\n");

 for(i=1;i<argc;i++){
        if(strcmp(argv[i],"x")==0){
          
          x=dequeue_struct(&q,c);
          c++;
          y=0;
          if(x > 0){
          do{  printf("Cash : ");
            scanf("%d",&y);
            }while(y<x);
          
          
         if(y-x != 0) printf("Change is %d\n",y-x);
          printf("Thank you\n\n");
        }
          
          }
        else {
          if(atoi(argv[i])>3 && 1< atoi(argv[i])) {
           printf("No Food Please choose again\n\n");
            i++; goto a;
            }
          else{ enqueue_struct(&q, atoi(argv[i]),atoi(argv[i+1]));
           i++;
        }
          a:
        }
 }
  if(q.size > 0){
    printf("=====================================\n");
    printf("%d Order left in Queue\n",q.size);
    while(q.headPtr){
      NodePtr *tmp ;
      tmp= q.headPtr;
      q.headPtr = q.headPtr->nextPtr;
      free(tmp);
      printf("Clear left Order\n");
    };
  }
  return 0;
}
