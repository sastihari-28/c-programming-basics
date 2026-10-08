#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5;
    float avg_mrk,total_mrk;
    printf("enter your mark:");
    scanf("%d", &sub1);
    printf("enter your mark:");
    scanf("%d", &sub2);
    printf("enter your mark:");
    scanf("%d", &sub3);
    printf("enter your mark:");
    scanf("%d", &sub4);
    printf("enter your mark:");
    scanf("%d", &sub5);
    total_mrk = sub1 + sub2 + sub3 + sub4 + sub5;
    avg_mrk = total_mrk/5;
    printf("%.2f\n",total_mrk);
    printf("%.3f\n",avg_mrk);
    return 0 ;
    }

