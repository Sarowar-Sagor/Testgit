#include <stdio.h>
int main()
{
    int t1=0, t2=1, display=0, num;
    printf("Enter an integer: ");
    scanf("%d",&num);
    printf("Fibonacci Series: %d+%d+", t1, t2); /* Displaying first two terms */
    display=t1+t2;
    while(display<num)
        {
            printf("%d+",display);
    t1=t2;
    t2=display;
    display=t1+t2; }
    return 0;  }
