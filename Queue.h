#define salmoncost  500
#define hambergercost  200
#define wagyucost  450

typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x,int y){


  Node *new_node=(Node*)malloc(sizeof(Node));
if(new_node){ 
  new_node->order_number = x;
  new_node->qty = y;
  new_node->nextPtr = NULL;
  
  if (new_node->order_number == 1)printf("take oder %d Hamberger \n",new_node->qty);
  if (new_node->order_number == 2)printf("take oder %d Salmon Sashimi \n",new_node->qty);
  if (new_node->order_number == 3)printf("take oder %d Wagyo \n",new_node->qty);
  
  if(q->headPtr == NULL) q->headPtr = new_node;
      else (q->tailPtr)->nextPtr = new_node;
    q->tailPtr = new_node;
    q->size++;
  printf("\n\n\n");
  /*Finish enqueue */
 }
}


int dequeue_struct(Queue *q,int c){
   NodePtr t=q->headPtr;
   if(t){
   int order= t->order_number,qty = t->qty,cost=0;
       q->headPtr = q->headPtr->nextPtr;
      if(q->headPtr == NULL) q->tailPtr = NULL;
     printf("Customer No.%d \n",c);
     if(t->order_number == 1){
       printf("%d Hamberger 200x%d\n",qty,qty);
       cost = hambergercost*qty;
       printf("You have to pay %d Bath\n",cost);
     }
     if(t->order_number == 2){
       printf("%d Salmon Sashimi 500x%d\n",qty,qty);
       cost = salmoncost*qty;
       printf("You have to pay %d Bath\n",cost);
       }
     if(t->order_number == 3){
       printf("%d Wagyu Steak 450x%d\n",qty,qty);
       cost = wagyucost*qty;
       printf("You have to pay %d Bath\n",cost);
       }
     free(t);
     q->size --;
       /*Finish dequeue */
   return cost;
   }
   printf("No oder in queue\n");
   return 0;


}
