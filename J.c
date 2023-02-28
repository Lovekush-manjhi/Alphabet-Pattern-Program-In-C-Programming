#include<stdio.h>
int main(){
for(int a=1; a<=20; a++){ //row
    for(int b=1; b<=50; b++){  //column
        if((a==2&&b>8&&b<=20)|| //top roe line
           (b==15&&a>2&&a<=11)||  //straight line
           (b==8&&a>8&&a<=10)||(b==9&&a>10&&a<=11)||(a==12&&b>9&&b<=14) //bottom curve
           ){
           printf("*");
        }else{
            printf(" ");
        }
    }
    printf("\n");
}
return 0;
}

