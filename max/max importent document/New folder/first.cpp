#include<stdio.h>
void Bestfit(int ,int,int[],int[]);
void sort(int[],int[],int);
int main()
{
	int p,b,i;
	printf("\t\t\tProgram for Best Fit memory allocation technique using fixed space partioning\n");
	printf("\n\t\tEnter the number of processes and no. of memory partitions respectively\n");
	scanf("%d%d",&p,&b);
	int psize[p],bsize[b];
	printf("\n\t\tEnter the size of processes ");
	for(i=0;i<p;i++)
	{
		printf("\n\t\tFor Process%d:",i+1);
		scanf("%d",&psize[i]);
	}
	printf("\n\t\tEnter the size of memory partitions ");
	for(i=0;i<b;i++)
	{
		printf("\n\t\tFor Partition%d:",i+1);
		scanf("%d",&bsize[i]);
	}
	Bestfit(p,b,psize,bsize);
}
void Bestfit( int p, int b, int psize[],int bsize[])
{
	int i,j,srt[b],pos_srt[b],pos[b];
	bool chkb[b],chkp[p];
	for(i=0;i<b;i++)
	{
		chkb[i]=true;
		srt[i]=bsize[i];
	}
	sort(srt,pos_srt,b);
	for(i=0;i<p;i++)
	{   
	    chkp[i]=false;
		for(j=0;j<b;j++)
		{
			if(chkb[j]==true&&srt[j]>=psize[i])
			{
	           srt[j]-=psize[i];
	           chkb[j]=false;
	           pos[i]=j;
	           chkp[i]=true;
	           break;
			}
		}
	}
	printf("\n\tProcess number\tProcess size\tBlock number\n");
	for(i=0;i<p;i++)
	{
		printf("\t%d\t\t%d",i+1,psize[i]);
        if(chkp[i]==true)
		  printf("\t\t%d",pos_srt[pos[i]]+1);
		else
		  printf("\t\tmemory is not allocated to this process");
		 printf("\n");		
    }
}
void sort(int a[],int p[],int b)
{
	int i,k,ptr,tmp,cmp[b];
	bool chk[b];
	for(i=0;i<b;i++)
	{
		cmp[i]=a[i];
		chk[i]=true;
	}
	for(k=0;k<b-1;k++)
	{
		for(ptr=0;ptr<b-k;ptr++)
		{
			if(a[ptr]>a[ptr+1])
			{
				tmp=a[ptr+1];
				a[ptr+1]=a[ptr];
				a[ptr]=tmp;
			}
		}
	}
	for(i=0;i<b;i++)
	{
		for(ptr=0;ptr<b;ptr++)
		{
			if(a[i]==cmp[ptr]&&chk[ptr]==true)
			{
				p[i]=ptr;
				chk[ptr]=false;
				break;
			}
		}
	}
}