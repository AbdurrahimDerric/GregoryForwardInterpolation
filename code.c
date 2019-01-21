#include <stdio.h>

    int main ()
    {
       int i,j,k,n;
	     float xs[50],y[50],h,fark, greg=0, df[50],d2f[50],d3f[50],d4f[50] ,x,fx;
 	     printf("please enter the number of x\n");
       scanf("%d",&n);
       for (i=0;i<n;i++)
      	{
	        printf("please enter the number value of%d x and the mutual value of y \n",i);
          scanf("%f",&xs[i]);
          scanf("%f",&y[i]);
	      }
    	h=xs[1]-xs[0];
	    fark=h;
	    i=1;
	    while (fark==h&& i<n)
	      {
		      fark=xs[i+1]-xs[i];
		      i++;
	      }
	    printf("%d \n",i);
	
     if (i==n)
      {
      greg=1;
      }
      
     for (i=0;i<n-1;i++)
		    {
 	    	  df[i]=y[i+1]-y[i];	
	       }
	   n--;
	   for (i=0;i<n-1;i++)
		    {
 	      	d2f[i]=df[i+1]-df[i];	
	       }
	   n--;
	   for (i=0;i<n-1;i++)
		    {
 		        d3f[i]=d2f[i+1]-d2f[i];	
	       }
	   n--;
	   for (i=0;i<n-1;i++)
	    	{
 	        	d4f[i]=d3f[i+1]-d3f[i];	
	      }
	    
	    printf("enter the desired x \n");
	    scanf("%f",&x);
	     fx=y[0]+df[0]+ x*d2f[0]/2 + (x*(x-1)*d3f[0])/6 + x*(x-1)*(x-2)*d4f[0]/24 ;
	     printf("the mutual y is %d ",fx);
	     }
		  return 0;
        }
