#include<stdio.h>
int main(){
for(int a=1; a<=20; a++){ //row
    for(int b=1; b<=50; b++){  //column
        if((b==3&&a>2&&a<=10)||(b==17&&a>2&&a<=10)||  // two straight line
           (b==4&&a>10&&a<=11)||(b==6&&a>11&&a<=12)||(b==16&&a>10&&a<=11)||(b==14&&a>11&&a<=12)|| //bottom curve
           (a==13&&b>7&&b<=12) //last row line
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



