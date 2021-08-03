#include <stdio.h>
int main()
{
  int t,a,c,b,d,i;
  scanf("%d",&d);
  while(d--)
  {
  	scanf("%d%d",&a,&b);
	  if(a<b)
  	{
  		for(i=1; ;i++)
  	{
  		c=b*i;
  		if(c%a==0)
  		{
		  printf("LCM = %d\n",c);
  			break;
		  }
  		
  	
	  }
	  }
	  else
	  {
	  	for(i=1; ;i++)
	  	{
	  		c=a*i;
	  		if(c%b==0)
	  		{
	  			printf("LCM = %d\n",c);
	  			break;
			  }
		  }
	  }
	  }
  	
    return 0;
}

