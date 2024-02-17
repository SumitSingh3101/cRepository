#include <stdio.h>

int main(){
    int i, pay, hours, total;
    total = 0;

    for(i=1;i<11;i++){
        printf("\n \n Enter the number of hours for employee %d: ",i);
        scanf("%d", &hours);
        if(hours>40){
            pay=(hours-40)*12;
        }else{
            printf("\n No overtime done.");
        }

        printf("The Pay for Employee%d Overtim is %d rs.",i,pay);
        total = total + pay;
    }

    printf("The Total over time sent by the company: %d", total);

}