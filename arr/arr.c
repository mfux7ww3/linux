
#include<stdio.h>
int main()
{
  
  int array[2];
  int *p=array;
  array[0]=1;
  array[1]=10;
  array[2]=100;
  int i;
  for(i=0;i<3;i++){
     printf("*p=%d\n",*p);
     p++;
  }
  
}
