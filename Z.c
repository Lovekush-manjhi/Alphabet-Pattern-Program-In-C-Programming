#include<stdio.h>
int main(){
for(int a=1; a<=20; a++){ //row
    for(int b=1; b<=50; b++){  //column
        if((a==2&&b>2&&b<=17)|| //first row line
           (b==2&&a>9&&a<=10)||(b==3&&a>8&&a<=9)||(b==5&&a>7&&a<=8)||(b==7&&a>6&&a<=7)||(b==9&&a>5&&a<=6)||(b==11&&a>4&&a<=5)||(b==13&&a>3&&a<=4)||(b==15&&a>2&&a<=3)||//cross line
           (a==10&&b>2&&b<=17) //last row line
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




