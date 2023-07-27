#include<stdio.h>
void insenon(int n,int a[])
{
	int i,j,t;
	for(i=1;i<n;i++)

	{
			t=a[i];
		for(j=i-1;j>=0 && a[j]>t;j--)
		
		a[j+1]=a[j];
             a[j+1]=t;			
		}
	
		
		
		}
	
	void insrec(int i,int n, int a[])
    {
    	int t,j;
    
    	if(i==n)
    	return;
    	
    	
    			 t=a[i];
    		for(j=i-1;j>=0 && a[j]>t;j--)
    		a[j+1]=a[j];
             a[j+1]=t;
    		
		
		insrec(i+1,n,a);
		
	}
	int main ()
	{
		int a[10],i,n,j,k;
		printf("enter no");
		scanf("%d",&n);
		printf("enter numbers");
		
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	printf("select 1.nonrec 2.rec");
	scanf("%d",&j);
	switch (j) {
        case 1:
            insenon(n, a);
            break;
        case 2:
            insrec(0, n, a);
            break;
        default:
            printf("Invalid choice\n");
    }
	for(k=0;k<n;k++)
	{
		printf("%d",a[k]);
	}
	}
