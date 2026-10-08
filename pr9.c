#include<stdio.h>
int main()
{
int price;
float dis,dis_bill,final_bill;
scanf("%d",&price);
scanf("%f",&dis);
dis_bill = (dis/100) * price;
final_bill = price - dis_bill;
printf("%f" , final_bill);
return 0;
}

