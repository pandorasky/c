#include<stdio.h>
void main()
{
	int n,i,item,a[10],loc=-1;
	printf("\nEnter the number of elements :");
	scanf("%d",&n);
	printf("\nEnter the elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);

	}
	printf("\nThe entered element to be searched is\n");
    scanf("%d",&item);
    loc=lsearch(n,a,item);
        if(loc==-1)
            printf("search unsuccessful");
            else printf("item found at loc:%d",loc+1);

    }
    int lsearch(int n,int a[],int item)
    {
        int i;
        for (i=0;i<n;i++)
        {
            if(a[i]==item)
            return i;
        }
        return-1;
    }