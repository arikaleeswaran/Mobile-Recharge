/*Author : ARIKALEESWARAN G
  Project: Mobile Recharge
  Date   :10/10/2022*/
#include<stdio.h>
int main()
{
    int a,b,c,x,y,z,v1,v2,v3;
    char num[16],num1[16],num2[16],dt[5],cv[3];
do{
    printf("\n\t\t\t MOBILE RECHARGE \t\t");
    printf("\n--------------------------------------------------------------------");
    printf("\n 1.JIO");
    printf("\n 2.AIRTEL");
    printf("\n 3.VI");
    printf("\n\n Choose your Network: ");
    scanf("%d",&a);
switch(a)
    {
case 1:
    printf("\n-----JIO-----");
    printf("\n 1.Monthly Plan");
    printf("\n 2.Yearly Plan");
    printf("\n\n Enter your plan of type: ");
    scanf("%d",&b);
if(b<=1)
    {
        printf("\n -------Monthly Plan--------");
        printf("\n 1.Rs.179 -> 24 Days -> 1 GB/day");
        printf("\n 2.Rs.209 -> 28 Days -> 1 GB/day");
        printf("\n 3.Rs.239 -> 28 Days -> 1.5 GB/day");
        printf("\n 4.Rs.259 -> 30 Days -> 1.5 GB/day");
        printf("\n 5.Rs.299 -> 28 Days -> 2 GB/day");
        printf("\n 6.Rs.499 -> 28 Days -> 3 GB/day");
        printf("\n\n Enter your plan : ");
        scanf("%d",&c);
        switch(c)
        {
    case 1:
        printf("\n Your Plan Rs.179");
        printf("\n Payment:");
        printf("\n\n Enter your Card Number: ");
        scanf("%s",num);
        printf("\n Expiry Month/Year : ");
        scanf("%s",dt);
        printf("\n CVV: ");
        scanf("%s",cv);
        printf("\n YOUR PAYMENT IS DONE");
        printf("\n*******************************************************************************************");
        break;
    case 2:
        printf("\n Your Plan Rs.209");
        printf("\n Payment:");
        printf("\n\n Enter your Card Number: ");
        scanf("%s",num);
        printf("\n Expiry Month/Year : ");
        scanf("%s",dt);
        printf("\n CVV: ");
        scanf("%s",cv);
        printf("\n YOUR PAYMENT IS DONE");
        printf("\n*******************************************************************************************");
        break;
    case 3:
        printf("\n Your Plan Rs.239");
        printf("\n Payment:");
        printf("\n\n Enter your Card Number: ");
        scanf("%s",num);
        printf("\n Expiry Month/Year : ");
        scanf("%s",dt);
        printf("\n CVV: ");
        scanf("%s",cv);
        printf("\n YOUR PAYMENT IS DONE");
        printf("\n*******************************************************************************************");
        break;
    case 4:
        printf("\n Your Plan Rs.259");
        printf("\n Payment:");
        printf("\n\n Enter your Card Number: ");
        scanf("%s",num);
        printf("\n Expiry Month/Year : ");
        scanf("%s",dt);
        printf("\n CVV: ");
        scanf("%s",cv);
        printf("\n YOUR PAYMENT IS DONE");
        printf("\n*******************************************************************************************");
        break;
    case 5:
        printf("\n Your Plan Rs.299");
        printf("\n Payment:");
        printf("\n\n Enter your Card Number: ");
        scanf("%s",num);
        printf("\n Expiry Month/Year : ");
        scanf("%s",dt);
        printf("\n CVV: ");
        scanf("%s",cv);
        printf("\n YOUR PAYMENT IS DONE");
        printf("\n*******************************************************************************************");
        break;
    case 6:
        printf("\n Your Plan Rs.499");
        printf("\n Payment:");
        printf("\n\n Enter your Card Number: ");
        scanf("%s",num);
        printf("\n Expiry Month/Year : ");
        scanf("%s",dt);
        printf("\n CVV: ");
        scanf("%s",cv);
        printf("\n YOUR PAYMENT IS DONE");
        printf("\n*******************************************************************************************");
        break;
    default:
        printf("\n Enter a valid Number\n");
        }
    }
    else if(b<=2)
    {
        printf("\n -------Yearly Plan--------");
        printf("\n 1.Rs.2545 -> 365 Days -> 1.5 GB/day");
        printf("\n  2.Rs.2879 -> 365 Days -> 2 GB/day");
        printf("\n 3.Rs.2999 -> 365 Days -> 2.5 GB/day");
        printf("\n\n Enter your plan : ");
        scanf("%d",&c);
        switch(c)
        {
    case 1:
        printf("\n Your Plan Rs.2545");
        printf("\n Payment:");
        printf("\n\n Enter your Card Number: ");
        scanf("%s",num);
        printf("\n Expiry Month/Year : ");
        scanf("%s",dt);
        printf("\n CVV: ");
        scanf("%s",cv);
        printf("\n YOUR PAYMENT IS DONE");
        printf("\n*******************************************************************************************");
        break;
    case 2:
        printf("\n Your Plan Rs.2879");
        printf("\n Payment:");
        printf("\n\n Enter your Card Number: ");
        scanf("%s",num);
        printf("\n Expiry Month/Year : ");
        scanf("%s",dt);
        printf("\n CVV: ");
        scanf("%s",cv);
        printf("\n YOUR PAYMENT IS DONE");
        printf("\n*******************************************************************************************");
        break;
    case 3:
        printf("\n Your Plan Rs.2999");
        printf("\n Payment:");
        printf("\n\n Enter your Card Number: ");
        scanf("%s",num);
        printf("\n Expiry Month/Year : ");
        scanf("%s",dt);
        printf("\n CVV: ");
        scanf("%s",cv);
        printf("\n YOUR PAYMENT IS DONE");
        printf("\n*******************************************************************************************");
        break;
    default:
        printf("\n Enter a valid Number\n");
        }
    }
    else if (b=0||b>2)
    {
        printf("\n Enter a valid Number\n");
    }
    break;
case 2:
    printf("\n-----AIRTEL-----");
    printf("\n 1.Monthly Plan");
    printf("\n 2.Yearly Plan");
    printf("\n\n Enter your plan of type: ");
    scanf("%d",&x);
    if(x==1)
    {
        printf("\n -------Monthly Plan--------");
        printf("\n 1.Rs.265 -> 28 Days -> 1 GB/day");
        printf("\n 2.Rs.239 -> 28 Days -> 1.5 GB/day");
        printf("\n 3.Rs.296 -> 30 Days -> 25 GB");
        printf("\n 4.Rs.319 -> 30 Days -> 2 GB/day");
        printf("\n\n Enter your plan : ");
        scanf("%d",&y);
        switch(y)
        {
    case 1:
        printf("\n Your Plan Rs.265");
        printf("\n Payment:");
        printf("\n\n Enter your Card Number: ");
        scanf("%s",num1);
        printf("\n Expiry Month/Year : ");
        scanf("%s",dt);
        printf("\n CVV: ");
        scanf("%s",cv);
        printf("\n YOUR PAYMENT IS DONE");
        printf("\n*******************************************************************************************");
        break;
    case 2:
        printf("\n Your Plan Rs.239");
        printf("\n Payment:");
        printf("\n\n Enter your Card Number: ");
        scanf("%s",num1);
        printf("\n Expiry Month/Year : ");
        scanf("%s",dt);
        printf("\n CVV: ");
        scanf("%s",cv);
        printf("\n YOUR PAYMENT IS DONE");
        printf("\n*******************************************************************************************");
        break;
    case 3:
        printf("\n Your Plan Rs.296");
        printf("\n Payment:");
        printf("\n\n Enter your Card Number: ");
        scanf("%s",num1);
        printf("\n Expiry Month/Year : ");
        scanf("%s",dt);
        printf("\n CVV: ");
        scanf("%s",cv);
        printf("\n YOUR PAYMENT IS DONE");
        printf("\n***************************************************************");
        break;
    case 4:
        printf("\n Your Plan Rs.319");
        printf("\n Payment:");
        printf("\n\n Enter your Card Number: ");
        scanf("%s",num1);
        printf("\n Expiry Month/Year : ");
        scanf("%s",dt);
        printf("\n CVV: ");
        scanf("%s",cv);
        printf("\n YOUR PAYMENT IS DONE");
        printf("\n*******************************************************************************************");
        break;
    default:
        printf("\n Enter a valid Number\n");
        }
    }
    else if(x==2)
    {
        printf("\n -------Yearly Plan--------");
        printf("\n 1.Rs.1799 -> 365 Days -> 24 GB");
        printf("\n 2.Rs.2999 -> 365 Days -> 2 GB/day");
        printf("\n 3.Rs.3359 -> 365 Days -> 2.5 GB/day");
        printf("\n\n Enter your plan : ");
        scanf("%d",&z);
        switch(z)
        {
    case 1:
        printf("\n Your Plan Rs.1799");
        printf("\n Payment:");
        printf("\n\n Enter your Card Number: ");
        scanf("%s",num1);
        printf("\n Expiry Month/Year : ");
        scanf("%s",dt);
        printf("\n CVV: ");
        scanf("%s",cv);
        printf("\n YOUR PAYMENT IS DONE");
        printf("\n*******************************************************************************************");
        break;
    case 2:
        printf("\n Your Plan Rs.2999");
        printf("\n Payment:");
        printf("\n\n Enter your Card Number: ");
        scanf("%s",num1);
        printf("\n Expiry Month/Year : ");
        scanf("%s",dt);
        printf("\n CVV: ");
        scanf("%s",cv);
        printf("\n YOUR PAYMENT IS DONE");
        printf("\n*******************************************************************************************");
        break;
    case 3:
        printf("\n Your Plan Rs.3359");
        printf("\n Payment:");
        printf("\n\n Enter your Card Number: ");
        scanf("%s",num1);
        printf("\n Expiry Month/Year : ");
        scanf("%s",dt);
        printf("\n CVV: ");
        scanf("%s",cv);
        printf("\n YOUR PAYMENT IS DONE");
        printf("\n*******************************************************************************************");
        break;
    default:
        printf("\n Enter a valid Number\n");
        }
    }
    else if(x==0||x>2)
    {
        printf("\n Enter a valid Number\n");
    }
    break;
case 3:
    printf("\n-----VI-----");
    printf("\n 1.Monthly Plan");
    printf("\n 2.Yearly Plan");
    printf("\n\n Enter your plan of type: ");
    scanf("%d",&v1);
    if(v1==1)
    {
        printf("\n -------Monthly Plan--------");
        printf("\n 1.Rs.299 -> 28 Days -> 1.5 GB/day");
        printf("\n 2.Rs.359 -> 28 Days -> 3 GB/day");
        printf("\n 3.Rs.499 -> 28 Days -> 2 GB/day");
        printf("\n 4.Rs.475 -> 28 Days -> 4 GB/day");
        printf("\n\n Enter your plan : ");
        scanf("%d",&v2);
        switch(v2)
        {
    case 1:
        printf("\n Your Plan Rs.299");
        printf("\n Payment:");
        printf("\n\n Enter your Card Number: ");
        scanf("%s",num2);
        printf("\n Expiry Month/Year : ");
        scanf("%s",dt);
        printf("\n CVV: ");
        scanf("%s",cv);
        printf("\n YOUR PAYMENT IS DONE");
        printf("\n*******************************************************************************************");
        break;
    case 2:
        printf("\n Your Plan Rs.359");
        printf("\n Payment:");
        printf("\n\n Enter your Card Number: ");
        scanf("%s",num2);
        printf("\n Expiry Month/Year : ");
        scanf("%s",dt);
        printf("\n CVV: ");
        scanf("%s",cv);
        printf("\n YOUR PAYMENT IS DONE");
        printf("\n*******************************************************************************************");
        break;
    case 3:
        printf("\n Your Plan Rs.499");
        printf("\n Payment:");
        printf("\n\n Enter your Card Number: ");
        scanf("%s",num2);
        printf("\n Expiry Month/Year : ");
        scanf("%s",dt);
        printf("\n CVV: ");
        scanf("%s",cv);
        printf("\n YOUR PAYMENT IS DONE");
        printf("\n*******************************************************************************************");
        break;
    case 4:
        printf("\n Your Plan Rs.475");
        printf("\n Payment:");
        printf("\n\n Enter your Card Number: ");
        scanf("%s",num2);
        printf("\n Expiry Month/Year : ");
        scanf("%s",dt);
        printf("\n CVV: ");
        scanf("%s",cv);
        printf("\n YOUR PAYMENT IS DONE");
        printf("\n*******************************************************************************************");
        break;
    default:
        printf("\n Enter a valid Number\n ");
        }
    }
    else if(v1==2)
    {
        printf("\n -------Yearly Plan--------");
        printf("\n 1.Rs.2899 -> 365 Days -> 1.5 GB/day");
        printf("\n 2.Rs.3099 -> 365 Days -> 2 GB/day");
        printf("\n 3.Rs.1799 -> 365 Days -> 24 GB");
        printf("\n\n Enter your plan : ");
        scanf("%d",&v3);
        switch(v3)
        {
    case 1:
        printf("\n Your Plan Rs.2899");
        printf("\n Payment:");
        printf("\n\n Enter your Card Number: ");
        scanf("%s",num2);
        printf("\n Expiry Month/Year : ");
        scanf("%s",dt);
        printf("\n CVV: ");
        scanf("%s",cv);
        printf("\n YOUR PAYMENT IS DONE");
        printf("\n*******************************************************************************************");
        break;
    case 2:
        printf("\n Your Plan Rs.3099");
        printf("\n Payment:");
        printf("\n\n Enter your Card Number: ");
        scanf("%s",num2);
        printf("\n Expiry Month/Year : ");
        scanf("%s",dt);
        printf("\n CVV: ");
        scanf("%s",cv);
        printf("\n YOUR PAYMENT IS DONE");
        printf("\n*******************************************************************************************");
        break;
    case 3:
        printf("\n Your Plan Rs.1799");
        printf("\n Payment:");
        printf("\n\n Enter your Card Number: ");
        scanf("%s",num2);
        printf("\n Expiry Month/Year : ");
        scanf("%s",dt);
        printf("\n CVV: ");
        scanf("%s",cv);
        printf("\n YOUR PAYMENT IS DONE");
        printf("\n*******************************************************************************************");
        break;
    default:
        printf("\n Enter a valid Number\n");
        }
    }
    else if(v1=0||v1>2)
    {
        printf("\n Enter a valid Number\n");
    }
    default:
        printf("\n Enter a valid Number\n");
    }
}while(a!=3);
return 0;
}

