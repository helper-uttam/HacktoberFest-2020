#include <stdio.h>
int main() 
{
    int ct,num,sum=0;//defining the variable 1st before using in array
    scanf("%d",&num);
    int array[num]; //num=size of the array
    for(ct=0;ct<num;ct++)
    {
        scanf("%d ",&array[ct]);
        sum+=array[ct];
    }
    
    printf("Sum of array is %d",sum);//final result
}
