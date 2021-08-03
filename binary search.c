#include <stdio.h>
int main()
{
    long long a[100019],b,c,d;
    int lowindx=0,highindx,midindx,i,j,index;
	scanf("%lld",&b);
	for(i=0;i<b;i++)
    {
        scanf("%lld",&a[i]);
    }
      highindx=b-1;
      lowindx=0;
      index=-1;
      scanf("%lld",&d);
      for(;lowindx<=highindx;)
	{
		midindx=(highindx+lowindx)/2;
		if(d==a[midindx])
		{
		    index=midindx;
           highindx=midindx-1;
		}
		else if(d<a[midindx])
		highindx=midindx-1;
		else if(d>a[midindx])
		lowindx=midindx+1;
	}
	printf("%d\n",index);

	return 0;


}
