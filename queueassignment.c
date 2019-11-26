#include <stdio.h>
//printf("\nEnter five to delete item at the begginning \n");
//		printf("\nEnter six to delete item at the end(last) \n");
//		printf("\nEnter seven delete item at the middle \n");
//		printf("\nEnter eight delete all item \n");
void enqueue(int i);
void dequeue();
void display();
void enqueueing();
void dequeueing();
void Displaying();

void enqueueid();
void enqueuepatient();
void enqueuelab();
void enqueuefinance();	
void enqueuedrag();

void dequeueid();
void dequeuepatient();
void dequeuelab();
void dequeuefinance();	
void dequeuedrag();

void Displayid();
void Displaypatient();
void Displaylab();
void Displayfinance();	
void Displaydrag();

struct node{
	int data;
	struct node* next;
};

struct node* frontid = NULL;
struct node* rearid = NULL;

struct node* frontpatient = NULL;
struct node* rearpatient = NULL;

struct node* frontlab = NULL;
struct node* rearlab = NULL;

struct node* frontfinance = NULL;
struct node* rearfinance = NULL;

struct node* frontdrag = NULL;
struct node* reardrag = NULL;

int main(){
	//int i;
	//scanf("%d",&i);

	int s,j=2,r;
	do{ 
		printf("\n#####################################################################\n");
		printf("\nEnter one to enqueue \n");
		printf("\nEnter two to dequeu \n");
		printf("\nEnter three display items in the queue \n");
		printf("\n#####################################################################\n");
		scanf("%d",&s);
		switch(s)
	    {
		    case 1:
		    	enqueueing();
		    	break;
		    case 2:
		    	dequeueing();
		    	break;
		    case 3:
		    	Displaying();
		    	break;
		    default:
		    	printf("no operation for this number choose(1,2,3)");
		    	break;
	    }j = 1;
	printf("\nif you want to continue press num>0 else press 0:");
	scanf("%d",&r);
}while(j<=r);
	return 0;
}

void enqueueing(){
	int s,r;
	printf("\n#####################################################################\n");
	printf("\nEnter one to enqueue in ID Card Queue\n");
	printf("\nEnter two to enqueue in Patient Treatment Queue \n");
	printf("\nEnter three to enqueue in laboratory Queue\n");
	printf("\nEnter four to enqueue in Finance Queue\n");
	printf("\nEnter five to enqueue in Drag Store Queue \n");
	printf("\n#####################################################################\n");
	scanf("%d",&s);
	switch(s)
    {
    	int num;
	    case 1:
	    	printf("\nEnter data to insert ");
		    scanf("%d", &num);
	    	enqueueid(num);
	    	break;
	    case 2:
	    	printf("\nEnter data to insert");
		    scanf("%d", &num);
	    	enqueuepatient(num);
	    	break;
	    case 3:
	    	printf("\nEnter data to insert");
		    scanf("%d", &num);
	    	enqueuelab(num);
	    	break;
	    case 4:
	    	printf("\nEnter data to insert");
		    scanf("%d", &num);
	    	enqueuefinance(num);
	    	break;
	   	case 5:
	   		printf("\nEnter data to insert");
		    scanf("%d", &num);
	    	enqueuedrag(num);
	    	break;
	    default:
	    	printf("no operation for this number choose(1,2,3)");
	    	break;
    }
}
void dequeueing(){
	int s,j=2,r;
	printf("\n#####################################################################\n");
	printf("\nEnter one to dequeue from ID Card Queue\n");
	printf("\nEnter two to dequeue from Patient Treatment Queue \n");
	printf("\nEnter three to dequeue from laboratory Queue\n");
	printf("\nEnter four to dequeue from Finance Queue\n");
	printf("\nEnter five to dequeue from Drag Store Queue \n");
	printf("\n#####################################################################\n");
	scanf("%d",&s);
	switch(s)
    {
	    case 1:
	    	dequeueid();
	    	break;
	    case 2:
	    	dequeuepatient();
	    	break;
	    case 3:
	    	dequeuelab();
	    	break;
	    case 4:
	    	dequeuefinance();
	    	break;
	   	case 5:
	    	dequeuedrag();
	    	break;
	    default:
	    	printf("no operation for this number choose(1,2,3)");
	    	break;
    }
}
void Displaying(){
	int s,r;
	printf("\n#####################################################################\n");
	printf("\nEnter one to display ID Card Queue\n");
	printf("\nEnter two to display Patient Treatment Queue \n");
	printf("\nEnter three to display laboratory Queue\n");
	printf("\nEnter four to display Finance Queue\n");
	printf("\nEnter five to display Drag Store Queue \n");
	printf("\n#####################################################################\n");
	scanf("%d",&s);
	switch(s)
    {
	    case 1:
	    	Displayid();
	    	break;
	    case 2:
	    	Displaypatient();
	    	break;
	    case 3:
	    	Displaylab();
	    	break;
	    case 4:
	    	Displayfinance();
	    	break;
	   	case 5:
	    	Displaydrag();
	    	break;
	    default:
	    	printf("no operation for this number choose(1,2,3)");
	    	break;
    }
}

void enqueueid(int num){
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data = num;
	temp->next = NULL;
	if(frontid==NULL && rearid==NULL){
		frontid = rearid = temp;
	}else{
		rearid->next = temp;
		rearid = temp;
	}
	
}
void enqueuepatient(int num){
	struct node* temp = (struct node*)malloc(sizeof(struct node*));
	temp->data = num;
	temp->next = NULL;
	if(frontpatient==NULL && rearpatient==NULL){
		frontpatient = rearpatient = temp;
	}else{
		rearpatient->next = temp;
		rearpatient = temp;
	}
	
}
void enqueuelab(int num){
	struct node* temp = (struct node*)malloc(sizeof(struct node*));
	temp->data = num;
	temp->next = NULL;
	if(frontlab==NULL && rearlab==NULL){
		frontlab = rearlab = temp;
	}else{
		rearlab->next = temp;
		rearlab = temp;
	}
}
void enqueuefinance(int num){
	struct node* temp = (struct node*)malloc(sizeof(struct node*));
	temp->data = num;
	temp->next = NULL;
	if(frontfinance==NULL && rearfinance==NULL){
		frontfinance = rearfinance = temp;
	}else{
		rearfinance->next = temp;
		rearfinance = temp;
	}
}
void enqueuedrag(int num){
	struct node* temp = (struct node*)malloc(sizeof(struct node*));
	temp->data = num;
	temp->next = NULL;
	if(frontdrag==NULL && reardrag==NULL){
		frontdrag = reardrag = temp;
	}else{
		reardrag->next = temp;
		reardrag = temp;
	}
}

void dequeueid(){
	struct node* temp = frontid;
	if(frontid == NULL){
		printf("The queue is already empty.");
		return;
	}
	if(frontid == rearid){
		frontid = rearid = NULL;
	}else{
		frontid = frontid->next;
	}
	int poped = temp->data;
	free(temp);
	enqueuepatient(poped);
}
void dequeuepatient(){
	struct node* temp = frontpatient;
	if(frontpatient == NULL){
		return;
	}
	if(frontpatient == rearpatient){
		frontpatient = rearpatient = NULL;
	}else{
		frontpatient = frontpatient->next;
	}
	int poped = temp->data;
	free(temp);
	enqueuelab(poped);
}
void dequeuelab(){
	struct node* temp = frontlab;
	if(frontlab == NULL){
		return;
	}
	if(frontlab == rearlab){
		frontlab = rearlab = NULL;
	}else{
		frontlab = frontlab->next;
	}
	int poped = temp->data;
	free(temp);
	enqueuefinance(poped);
}
void dequeuefinance(){
	struct node* temp = frontfinance;
	if(frontfinance == NULL){
		return;
	}
	if(frontfinance == rearfinance){
		frontfinance = rearfinance = NULL;
	}else{
		frontfinance = frontfinance->next;
	}
	free(temp);
}
void dequeuedrag(){
	struct node* temp = frontdrag;
	if(frontdrag == NULL){
		return;
	}
	if(frontdrag == reardrag){
		frontdrag = reardrag = NULL;
	}else{
		frontdrag = frontdrag->next;
	}
	int poped = temp->data;
	free(temp);
	printf("\n %d you are finally done.\n",poped);
}

void Displayid(){
	struct node* temp;
    if( frontid == NULL) printf("Empty Queue\n");
    else
    {
        temp=frontid;
        printf("elements in queue\n");
        while(temp)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
}
void Displaypatient(){
	struct node* temp;
    if( frontpatient == NULL) printf("Empty Queue\n");
    else
    {
        temp=frontpatient;
        printf("elements in queue\n");
        while(temp)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
}
void Displaylab(){
	struct node* temp;
    if( frontlab == NULL) printf("Empty Queue\n");
    else
    {
        temp=frontlab;
        printf("elements in queue\n");
        while(temp)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
}
void Displayfinance(){
	struct node* temp;
    if( frontfinance == NULL) printf("Empty Queue\n");
    else
    {
        temp=frontfinance;
        printf("elements in queue\n");
        while(temp)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
}	
void Displaydrag(){
	struct node* temp;
    if( frontdrag == NULL) printf("Empty Queue\n");
    else
    {
        temp=frontdrag;
        printf("elements in queue\n");
        while(temp)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
}

//void enqueue(int num){
//	struct node* temp = (struct node*)malloc(sizeof(struct node*));
//	temp->data = num;
//	temp->next = NULL;
//	if(front==NULL && rear==NULL){
//		front = rear = temp;
//	}else{
//		rear->next = temp;
//		rear = temp;
//	}
//}
//
//void dequeue(){
//	struct node* temp = front;
//	if(front == NULL){
//		return;
//	}
//	if(front == rear){
//		front = rear = NULL;
//	}else{
//		front = front->next;
//	}
//	
//	free(temp);
//}
//void Display(){
//    struct node* temp;
//    if( front == NULL) printf("Empty Queue\n");
//    else
//    {
//        temp=front;
//        printf("elements in queue\n");
//        while(temp)
//        {
//            printf("%d",temp->data);
//            temp=temp->next;
//        }
//    }
//}
