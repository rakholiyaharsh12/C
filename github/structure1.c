#include <stdio.h>

struct CA
{
    int no,rate,qty,amt,dis,billamt,gst,netbill;
};

int main()
{
    struct CA den[3];

    for(int i=0;i<3;i++)

    {
        printf("enter %d CA :\n",i+1);
        printf("enter rate value :");
        scanf("%d",&den[i].rate);
        printf("enter qty value :");
        scanf("%d",&den[i].qty);
        printf("enter amt value :");
        scanf("%d",&den[i].amt);
        printf("enter dis value :");
        scanf("%d",&den[i].dis);
        printf("enter billamt value :");
        scanf("%d",&den[i].billamt);

        den[i].gst= den[i].billamt*0.18;
        den[i].netbill =den[i].billamt + den[i].gst;
        
    }
    printf("\nNo.\trate.\tqty.\tamt.\tdis.\tbillamt.\tgst.\tnetbill\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%d\t%d\t%d\t%d\t%d\t%d\t\t%d\t%d\n",i+1,den[i].rate,den[i].qty,den[i].amt,den[i].dis,den[i].billamt,den[i].gst,den[i].netbill);
   
    }
    
   
}