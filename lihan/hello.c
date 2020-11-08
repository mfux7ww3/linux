#include<stdio.h>
int main()
{
    int a1,a2;
    printf("please input number one \n");
    scanf("%d",&a1);
    printf("please input number two \n");
    scanf("%d",&a2);
    int maxnum=max(a1,a2);
    int minnum=min(a1,a2);
    printf("the min number is %d\n",minnum);
    printf("the max number is %d\n",maxnum);
    return 0;

}
