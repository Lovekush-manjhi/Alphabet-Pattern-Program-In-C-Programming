#include<stdio.h>
int main(){
for(int a=1; a<=20; a++){ //row
    for(int b=1; b<=50; b++){  //column
        if((b==3&&a>2&&a<=11)|| //straight line
           (a==3&&b>3&&b<=8)||(a==7&&b>3&&b<=8)||  //two row line
           (b==10&&a>3&&a<=6)||  //curve
           (a==8&&b>4&&b<=5)||(a==9&&b>5&&b<=6)||(a==10&&b>6&&b<=7)||(a==11&&b>7&&b<=8)  //cross line
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



