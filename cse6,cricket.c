  #include<stdio.h>
int main()
{
    float team1,ov,run,crr,rrr;
    team1=291;
    printf("Enter the over and run=");
    scanf("%f %f",&ov,&run);
    crr=run/ov;
    rrr=(team1-run)/(50-ov);
    printf("RRR=%.3f CRR=%.3f",rrr,crr);


}
