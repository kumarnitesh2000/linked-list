#include<stdio.h>
#include<stdlib.h>
struct node 
{
int info;
struct node* link;	
};
struct node* start=NULL;
/*void insert(int val,int pos)
{
	int i=1;
	struct node* temp4;
	struct node* temp5=NULL;
	struct node* new2;
	temp4=start;
	for(i=0;i<pos-2;i++)
	{
		temp4=temp4->link;
	}
	temp5=temp4->link;
	
	new2=(struct node*)malloc(sizeof(struct node));
	main code goes here.. . . . . 
	new2->info=val;
	new2->link=temp5;
	temp4->link=new2;

}*/
void insert(int data,int n)
{
	int i;
	struct node* temp2=start;
	struct node* temp1=(struct node*)malloc(sizeof(struct node));
	temp1->link=start;
	temp1->link=NULL;
	if(n==1)
	{
		temp1->link=start;
		start=temp1;
		return;
	}
	else
	{
		for(i=0;i<n-2;i++)
		{
			temp2=temp2->link;
			
		}
		temp1->link=temp2->link;
		temp2->link=temp1;
	}
}
void insertbeg(int x)
{
	struct node* new1;
	new1=(struct node*)malloc(sizeof(struct node));
	//printf("\nenter the no.=\n");scanf("%d",&new1->info);
	new1->info=x;
	new1->link=start;
	start=new1;
}

void display()
{
	struct node* p;
	p=start;
	while(p!=NULL)
	{
		printf("\n%d\t",p->info);
		p=p->link;
	}
}
void Delete(int f)
{
	int i=1;
	struct node* temp1;
	temp1=start;
	struct node* temp2=NULL;
	if(f==1)
	{
	start=temp1->link;
	free(temp1);
	return;	
	}
	for(i=0;i<f-2;i++)
	  temp1=temp1->link;
	  temp2=temp1->link;
	 
	  temp1->link=temp2->link;
	free(temp2);
	
}
void update(int pos,int val)
{
	struct node* temp3=start;
	int i=1;
	for(i=1;i<pos-1;i++)
	  temp3=temp3->link;
	 temp3->info=val; 
}
int count()
{
	int c=0;
	struct node* counter=start;
	while(counter!=NULL)
	{
		counter=counter->link;
		c++;
	}
	return c;
}
void revdisplay()
{
	struct node* end;
	
}
void main()
{
	int n,i,x,f,pos,val,g,value,no;
	
	printf("enter the total no. oof element to be inserted = ");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter the no.=\n");
		scanf("%d",&x);
		insertbeg(x);
		display();
	}
	/*
	printf("\nhey want to delete the element from a node enter position= \n\t\n\t");
	scanf("%d",&f);
	Delete(f);
	printf("after deleting list is :\n");
	display();
	printf("\t\nhey want to update any position with value enter pos , value =\n");
	scanf("%d%d",&pos,&val);
	update(pos,val);
	printf("\n\n\nafter updating the list :\n");
	display();
	g=count();
	printf("\n\n\n\tthe total elements in list are : %d",g);
	printf("\n\n\n\n\n\n\t\t\t");
    */
	printf("\n\n\n\n\t\tenter the value to be inserted at particular position(value,position) = ");scanf("%d%d",&value,&no);
    
    insert(value,no);
    printf("after inserting the list \n\n\n\n\t\t\t");
    display();
}
