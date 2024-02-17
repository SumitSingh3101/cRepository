#include<stdio.h>
int main()
{
    int i,pay,money;
    char nm,choice;
    int wt;
    while(1)
    {
       printf("Enter Name of the Employee:");
       scanf("%c",&nm);
       printf("Enter the Current Worktime of the Employee:");
       scanf("%d",&wt);
       pay=wt-40;
       money=pay*12;
       printf("Overtime earned by %c=%d",nm,money,"\n");
       printf("Do You Want to !!!ENTER MORE DATA!!!:(Y/N)=");
       scanf("%c",&choice);
       if(choice=='N')
       {
        break;
       }
    }

}