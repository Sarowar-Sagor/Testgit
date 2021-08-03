#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    long long a[100019],b,c,d;
    int lowindx=0,highindx,midindx,i,j,index;
	scanf("%lld",&b);
	for(i=0;i<b;i++)
    {
        scanf("%lld",&a[i]);
    }
    time_t start,end;
    double dif;
    time(&start);
	index=-1;
	scanf("%d",&d);
	for(i=0;i<b;i++){
        if(d==a[i]){
            index=i;
            break;
        }
	}
	printf("index=%d\n",index);
	time(&end);
	dif=difftime(end,start);
	printf("%0.4lf\n",dif);

	return 0;


}
