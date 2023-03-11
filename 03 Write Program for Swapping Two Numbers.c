#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0,No2 = 0,Temp = 0;

    printf("\n Enter Two Numbers For Swapping Value => ");
    scanf("%d%d",&No1,&No2);

    printf("\n Before Swapping Value is %d & %d",No1,No2);

    Temp = No1;
    No1 = No2;
    No2 = Temp;

    printf("\n\n After Swapping Value is %d & %d",No1,No2);
}
