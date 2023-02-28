#include<stdio.h>
int main(){
for(int a=1; a<=20; a++){ //row
    for(int b=1; b<=50; b++){  //column
        if((a==2&&b>7&&b<=12)||(a==13&&b>7&&b<=12)|| //first last row line
           (b==3&&a>4&&a<=10)||(b==17&&a>4&&a<=10)||   // two straight line
           (b==4&&a>3&&a<=4)||(b==6&&a>2&&a<=3)||(b==16&&a>3&&a<=4)||(b==14&&a>2&&a<=3)|| //top curve
           (b==4&&a>10&&a<=11)||(b==6&&a>11&&a<=12)||(b==16&&a>10&&a<=11)||(b==14&&a>11&&a<=12)||    //bootom curve
           (a==10&&b>10&&b<=12)||(a==11&&b>12&&b<=14)||(b==15&&a>11&&a<=12)||(a==13&&b>15&&b<=17)||(a==14&&b>16&&b<=18)||(a==15&&b>17&&b<=19) //cross line
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




