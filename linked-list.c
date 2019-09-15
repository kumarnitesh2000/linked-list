//practice linked list :
#include<stdio.h>
struct node 
{
	int info;
	struct node *next;
}*start=NULL;
//swap function :
void swap(int *a,int *b)
{
	
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
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
		printf("\n(1) insert at beggining pos -->\n(2) insert at end position -->\n(3) delete the last -->\n(4) delete the front -->\n(5)Display list\n(6) Count elements --> \n(7) Deleting the required data :\n(8) Create list -->\n(9) Reversing list : \n(10) Removing the element from your index no .\n(11) Show the nth node : \n (12) Insertion at nth pos :\n(13) Delete the nth npde : \n(14) Swapping the two nodes :");
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

	for(i=low;i<=up;i++)
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
//remove the data which not required and all next to that :
//under the construction :
void removeall(int pos)
{
printf("\nUnder construction :");
/*
	int c=0;
	struct node *p;
	p=start;
	while(c<pos)
	{
		p=p->next;
		c++;
	}
	p->next=NULL;
	printf("\nAfter removing the required elements : final list as follows :");
	display();
*/}
//reverse with the recursion :
void reverserec(struct node *p)
{
struct node *q;
	if(p->next==NULL)
	{
		start=p;
		return ;
	}
	reverserec(p->next);
	q=p->next;
	q->next=p;
	p->next=NULL;
	//display();
}
//print the n th node starting form the 0th index no. 
void nthnode(int i)

{
	struct node *p;
	int c=0;
	p=start;
	if(i==0)
	{
		printf("\nThe data in the %d node is %d :",i,p->info);
		return ;
	}
	else
	{
		p=start;
		while(c<i)
		{
			p=p->next;
			c++;
		}
		//printf("\nSorry , under the construction ");
		printf("\nThe data in the %d node is %d :",i,p->info);

	}
	
}
//swapping any two nodes with given there index no.'s :
void swapnode(int i,int j)
{
	int c=0;
	//i and j are the index no. :
	
	struct node *prev1,*prev2,*node1,*node2;
   //node1 is pointing towards the ith index :
   //node is pointing towards the jth index :	 
   //prev1 is pointing towards the previous of node1
   //same as prev1 prev2 is there : 
	 node1=start;
	 prev1=start;
	 node1=prev1->next;
	 while(c<i-1)
	 {
	 	prev1=prev1->next;
	 	node1=node1->next;
	 	c++;
	 }
	 c=0;
	 node2=start;
	 prev2=start;
	 node2=prev2->next;
	 while(c<j-1)
	 {
	 	prev2=prev2->next;
	 	node2=node2->next;
	 	c++;
	 }
	
	//main code goes here :
	//now prev1,node1,prev2,node2 are all set guys :
	
    prev1->next=node2;
	prev2->next=node1;
	node1->next=node2->next;
	node2->next=prev2;
		
	printf("\n Hey , Swapped Successfully : \n");
}
//insert at the nth node :
void insertionnth(int i,int data)
{
	//i is the index no. (pos) and data is the val :
	int c=0;
	struct node *new1,*p,*temp;
	//where p is pointing towards that pos(i) and temp is pointing towards the pos (i+1) :
	new1=(struct node *)malloc(sizeof(struct node));
	if(new1==NULL)
	{
		printf("No space is available :");
	    return ;	
	}
	new1->info=data;
	p=start;
	temp=p->next;
	while(c<i)
	{
		p=p->next;
		temp=temp->next;
		c++;
	}
	new1->next=temp;
	p->next=new1;
	
}

//delete at nth node :
void deletenth(int index)
{
	//index is that index no. which you want to be deleted :
	struct node *p,*tmp1;
	int c;
	p=start;
	
	while(c<index-1)
	{
		p=p->next;
		c++;
	}
	
	tmp1=p->next;
	p->next=tmp1->next;
	
	//free the memory as of no use :
	
	free(tmp1);
		
}
//main function :
void main()
{
	int code,opt,up,low,index,index1;
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
			printf("\nSelect the upper bound :");scanf("%d",&up);
			printf("\nSelect the lower bound :");scanf("%d",&low);
			//printf("\nSelect the Lower bound :");scanf("%d",&low);
			if(low>up)
	        {
	        	printf("Hey , are you crazy lower bound cannot be bigger than upper bound don't worry Swapping : ");
		       swap(&up,&low);
	        }
			create(up,low);
			break;
		case 9:
			printf("\nReversing the linked list : ");
			printf("\nSo , after reversing the linked list : ");
			//reverselist(); this is without the recursion :
			//this is with recursion :
			reverserec(start);
			display();
			break;
		case 10:
				printf("\nIn this feature you can enter the index no. including which all next to this are excluded form the list :");
				printf("\nEnter the index no . : ");scanf("%d",&index);
				void removeall(index);
				break;
		case 11:
			printf("Showing the nth node : ");
			printf("\nEnter the index no .");scanf("%d",&index);
			nthnode(index);
			break;
		case 12:
			printf("\nEnter the positon(index no.) and the value :");scanf("%d%d",&index,&data);
			insertionnth(index,data);
			break;
		case 13:
			printf("\nEnter the index no. which you want to be deleted : ");
			scanf("%d",&index);
			nthnode(index);
			printf("\nAnd you want to delete this data : ");
		  	deletenth(index);
			break;
		case 14:
			printf("\nHey want to swap the two nodes :");
			printf("\nEnter the node1 and node2 position : ");
			scanf("%d%d",&index,&index1);
			swapnode(index,index1);
			printf("\nAfter , doing the Swapping the list is as follows : ");
			display();
			break;	
		default:
			printf("\ninvalid request ");
			
			
	}
	printf("\nentr 'c' to be continued with this process ");
	fflush(stdin);
	scanf("%c",&ch);
}while(ch=='c');
	

}
