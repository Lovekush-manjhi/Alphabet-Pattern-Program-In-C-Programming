#include<stdio.h>
int main(){
for(int a=1; a<=20; a++){ //row
    for(int b=1; b<=90; b++){  //column
        if((a==2&&b>7&&b<=13)|| //top row line
           (b==5&&a>3&&a<=4)||(b==6&&a>2&&a<=3)||(b==5&&a>4&&a<=5)||(b==6&&a>5&&a<=6)||  //top curve
           (a==7&&b>6&&b<=11)||  //middle row line
           (b==13&&a>7&&a<=8)||(b==14&&a>8&&a<=10)||(b==13&&a>10&&a<=11)|| //bottom curve
           (a==12&&b>5&&b<=11) //last row line
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

//||
//||
//(a==10&&b>4&&b<=10)
