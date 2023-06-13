#include<stdio.h>
 int front=-1,rear=-1,pagereplacement=0;
 int search(int[],int,int);
 void exchange(int[],int,int);
 int main()
 {
 	int frames,refrn,i,tmp;
 	printf("Enter the number of frames\n");
 	scanf("%d",&frames);
 	int que[frames];
 	printf("Enter the total number of refference of pages\n");
 	scanf("%d",&refrn);
 	printf("Enter the refferences\n");
 	for(i=0;i<refrn;i++)
 	{
 	  
 	  if(i<frames)
	  {
	  	scanf("%d",&que[i]);
	  	if(front==-1)
	  	  front+=1;
	  	rear+=1;
	  	pagereplacement+=1;
	  }
	  else
	  {
	  	scanf("%d",&tmp);
	     exchange(que,tmp,frames);
	  }
	}
	printf("Last refference string\n");
	if(front<rear)
	{
		for(i=front;i<=rear;i++)
		{
			printf("%d ",que[i]);
		}
	}
	else
	{
		for(i=rear;i<=front;i++)
		{
			printf("%d ",que[frames-i-1]);
		}
	}
	printf("\nTotal page faults is %d",pagereplacement);
 	return 0;
 }
 int search(int que[],int item,int frames)
 {
 	if(front<rear)
 	{
	
 	 for(int i=front;i<frames;i++)
 	{
 		if(item==que[i])
 		{
 			return 1;
 			break;
		 }
	 }
    }
    else
    {
    	for(int i=rear;i<front;i++)
    	{
    	   if(item==que[i])
 		{
 			return 1;
 			break;
		 }	
		}
	}
	return 0;
 }
 void exchange(int que[],int item,int frames)
 {
 	if(search(que,item,frames)==0)
 	{
 		if(rear==(frames-1))
 		{
		  rear=0;front+=1;
	    }
 		if(front==(frames-1))
 		{
		  front=0;rear+=1;
	    }
 		else
 		{
 		    rear+=1;
			front+=1;	
		}
		que[rear]=item;
		pagereplacement+=1;
	}
 }