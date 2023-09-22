#include <stdio.h>

int main()
{
    int rate = 50;
    int qty = 200;
    int amt = 10000;
    int dis = 500;
    int billamt = 9500;
    int gst, netbill;

    gst = netbill * 0.18;
    netbill = billamt + gst;

    return 0;
}