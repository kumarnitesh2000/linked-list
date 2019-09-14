//practice linked list :
#include<stdio.h>
struct node 
{
	int info;
	struct node *next;
}*start=NULL;
//enter the data want to be deleted :
//currently not working properly sir :
void deletedata(int data)
{
	struct node *temp,*p,*last;
	p=start;
	//temp=p->next;
	last=start;
	while(last!=NULL)
	{
		last=last->next;
	}
	//last is pointing towards the end
	/*if(last->info==data)
	{
		deletend();
	}*/
	if(p->info==data)
	{
		deletefront();
	}
	
	while(p->next!=NULL)
	{
		if(p->next->info==data)
		{
		temp=p->next;
		p->next=temp->next;
		free(temp);	
		}
		p=p->next;
	}
	//printf("\nHey under the construction :");
}
//help to see the option :
void help()
{
	int code;
	printf("\nEnter the required option that you want : put code :786 for help - - - - ");
	scanf("%d",&code);
	if(code==786)
	{
		printf("\n(1) insert at beggining pos -->\n(2) insert at end position -->\n(3) delete the last -->\n(4) delete the front -->\n(5)Display list\n(6) Count elements --> \n(7) Deleting the required data :\n(8) Create list -->\n(9) Reversing list : ");
	}	
}
//insert the value at the beggining :
void insertbeg(int value)
{
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
    if(p==NULL)
    {
    	printf("\nNo , memory is available");
	}
	p->info=value;
	p->next=start;
	start=p;
	
	
}
//inserting the value at the end :
void insertend(int value)
{
	struct node *p,*new1;
	//p=(struct node *)malloc(sizeof(struct node));
	new1=(struct node *)malloc(sizeof(struct node));
	if(new1==NULL)
	printf("\nNo memory is there :");
	new1->info=value;
	new1->next=NULL;
	//main code starts here :
	p=start;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=new1;
	
}

//display the linked list :
void display()
{
	struct node *t;
	//t=(struct node *)malloc(sizeof(struct node));
	t=start;
	if(t==NULL)
	printf("List is empty sir :");
	printf("\nDisplaying the linked list as :");
	while(t!=NULL)
	{
		printf("\n%d ",t->info);
		t=t->next;
	}
}
//deleting the node form the front :
void deletefront()
{
struct node *temp;
temp=start;
start=start->next;
temp->next=NULL;
free(temp);
	
}
//deleting the node from the last :
void deletend()
{
	struct node *p,*temp;
	p=start;
	temp=p->next;
	while(temp->next!=NULL)
	{
		p=p->next;
		temp=temp->next;
		
	}
	p->next=NULL;
	free(temp);
	
}
//count the no. of the elements in the linked list :
int count()
{
	struct node *p;
	int c=0;
	p=(struct node *)malloc(sizeof(struct node));
	p=start;
	while(p!=NULL)
	{
		c++;
		p=p->next;
	}
	return c;
	

}
//creating the list :
void create(int up,int low)
{
	int i;
	for(i=up;i<=low;i++)
	{
		insertbeg(i);
	}
}
//reversing the list :
void reverselist()
{
	struct node *current,*prev,*next1;
	//printf("\nUnder construction :");
	current=start;;
	prev=NULL;
	while(current!=NULL)
	{
		next1=current->next;
		current->next=prev;
		//main code
		prev=current;
		current=next1;
		
	}
	start=prev;
	display();
}
void main()
{
	int code,opt,up,low;
	char ch;
	int c,data,val;
	do
{
	printf("Hey Want Help Buddy : put 1 for help :\n");
	scanf("%d",&code);
	if(code==1)
	{
		help();
	}
	
	printf("\nentr the option sir : ");scanf("%d",&opt);
	
	switch(opt)
	{
		case 1:
			
			printf("\nEnter the value to be inserted :");
			scanf("%d",&val);
			insertbeg(val);
			break;
		case 2:
		    printf("\nEnter the value to be inserted :");
			scanf("%d",&val);
			insertend(val);
			break;
		case 3:
			
			printf("\nDeleting the element sir from last :");
			deletend();
			break;
		case 4:
			printf("\nDeleting the element from the front :");
			deletefront();
			break;
		case 5:
			printf("\nDisplaying the list sir :\n");
			display();
			break;
		case 6:
			//int c;
			c=count();
			printf("\nThere are %d elements in the linked list :",c);
			break;
		case 7:
			
			printf("Enter the data want to be Deleted :note not the last element of the list : ");
			scanf("%d",&data);
			deletedata(data);
			break;
		case 8:
			printf("\nCreating the list sir please select the Range upper and lower bound : ");
			printf("\nSelect the Lower bound :");scanf("%d",&low);
			printf("\nSelect the upper bound :");scanf("%d",&up);
			//printf("\nSelect the Lower bound :");scanf("%d",&low);
			create(up,low);
			break;
		case 9:
			printf("\nReversing the linked list : ");
			printf("\nSo , after reversing the linked list : ");
			reverselist();
			break;
		default:
			printf("invalid request ");
			
			
	}
	printf("\nentr 'c' to be continued with this process ");
	fflush(stdin);
	scanf("%c",&ch);
}while(ch=='c');
	

}
