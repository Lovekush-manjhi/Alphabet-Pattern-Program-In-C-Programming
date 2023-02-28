#include<stdio.h>
int main(){
for(int a=1; a<=20; a++){ //row
    for(int b=1; b<=50; b++){  //column
        if((b==2&&a>2&&a<=13)||   //first single line
           (a==3&&b>2&&b<=7)||    //first row line
           (b==9&&a>3&&a<=4)||(b==11&&a>4&&a<=11)||(b==9&&a>11&&a<=12)||   //curve
           (a==13&&b>2&&b<=7)){   //last row line
           printf("*");
        }else{
            printf(" ");
        }
    }
    printf("\n");
}
return 0;
}
