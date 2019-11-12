#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}NODE;
 
void Insert(int);
int  Delete();
void Display();
NODE *front,*rear;   /* Global Declarations */
 
main()
{
    int choise,elem;
    front=rear=NULL;
    do
    {
        printf("\n###################################################\n");
        printf("\nenter one to Insert\n");
		printf("enter two to Delete\n");
		printf("enter three to display\n");
		printf("enter four to exit\n");
        printf("\n###################################################\n");
        scanf("%d",&choise);
        switch(choise)
        {
        case 1:
            printf("\n\nRead the Element to be Inserted ?");
            scanf("%d",&elem);
            Insert(elem);
            break;
        case 2:
            elem=Delete();
            if(elem != -1)
                printf(" Deleted Node(From Front)with the Data: %d\n",elem);
            break;
        case 3: 
		printf("Linked List Implementation of Queue: Status:\n");
        	Display(); 
		break;
        case 4: 
			printf("\n\n Terminating \n\n"); break;
        default: 
			printf("\n\n insert valid number(1,2,3,4) \n\n");
            break;
        }
        printf("\n\n\n\n  Press a Key to Continue . . . ");
    }while(choise != 4);
}
 
void Insert(int data1)
{
    NODE *temp;
    temp=(NODE *)malloc(sizeof(NODE));
    if( temp == NULL)
        printf(" Out of Memory !! Overflow !!!");
    else
    {
        temp->data=data1;
        temp->next=NULL;
        if(front == NULL) {
			front = rear = temp; 
		} 
        else{ 
			rear->next=temp;
			rear = temp; 
		} 
        printf(" Node has been inserted at End Successfully !!");
    }
}
 
int Delete()
{
    int info;
    NODE *t;
    if( front ==  NULL) { printf(" Underflow!!!"); return -1; }
    else
    {
        t=front;
        info=front->data;
        if(front == rear) rear=NULL;
        front=front->next;
        t->next=NULL;
        free(t);
        return(info);
    }
}
 
void Display()
{
    NODE *t;
    if( front == NULL) printf("Empty Queue\n");
    else
    {
        t=front;
        printf("Front->");
        while(t)
        {
            printf("[%d]->",t->data);
            t=t->next;
        }
        printf("Rear\n");
    }
}
