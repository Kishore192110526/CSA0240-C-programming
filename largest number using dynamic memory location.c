#include<stdio.h>
#include<stdlib.h>
 int main()
 {
 int i, num;
 float *data;
 printf("Enter total number of elements(1 to 100): ");
 scanf("%d",&num);
 data=(float*)calloc(num,sizeof(float));

 if(data==NULL)
 {
 printf("Error! Memory not Allocated.");
 exit(0);
 }
 printf("\n");
 for(i=0;i<num;i++)
 {
 printf("Enter element %d:",i+1);
 scanf("%f",data+i);
 }
 for(i=0;i<num;i++)
 {
 if( *data < *(data+i))
 *data = *(data+i);
 }

printf("Largest Element = %.2f",*data);
return 0;
}

