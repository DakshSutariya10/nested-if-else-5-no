#include<stdio.h>

main()

{
	int a,b,c,d,e;
	
	printf("value of A=");
	scanf("%d",&a);
	
	printf("value of B=");
	scanf("%d",&b);
	
	printf("value of C=");
	scanf("%d",&c);
	
	printf("value of D=");
	scanf("%d",&d);
	
	printf("value of E=");
	scanf("%d",&e);
	
	if(a<b)
	{
		if(a<c)
		{
			if(a<d)
			{
				if(a<e)
				{
					printf("A is minimum");
				}
				else
				{
					printf("E is minimum");
				}
			}
			else
			{
			    if(c<d)
				{
					printf("C is minimum");
				}
				else
				{
					printf("D is minimum");
				}	
			}
		}
		else
		{
			if(c<e)
				{
					printf("C is minimum");
				}
				else
				{
					printf("E is minimum");
				}       
		}
   }
   else    
    {
    	if(b<c)
    	{
    		if(b<d)
    		{
    			if(b<e)
    			{
    				printf("B is minimum");
				}
				else
				{
					printf("E is minimum");
				}
			}
			else
			{
				if(c<d)
    			{
    				printf("C is minimum");
				}
				else
				{
					printf("D is minimum");
				}
			}
		}
		else
		{
			if(d<e)
    			{
    				printf("D is minimum");
				}
				else
				{
					printf("E is minimum");
				}
		}
	}
}
