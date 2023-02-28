#include<stdio.h>
int main(){
for(int a=1; a<=20; a++){ //row
    for(int b=1; b<=50; b++){  //column
        if((b==2&&a>2&&a<=13)|| //first single line
           (a==3&&b>2&&b<=8)||(a==8&&b>2&&b<=8)||(a==13&&b>2&&b<=8)||      // 3 middle line
           (b==10&&a>3&&a<=4)||(b==11&&a>4&&a<=6)||(b==10&&a>6&&a<=7)||    //upper curve
           (b==10&&a>8&&a<=9)||(b==11&&a>9&&a<=11)||(b==10&&a>11&&a<=12)){ //lower curve
           printf("*");
        }else{
            printf(" ");
        }
    }
    printf("\n");
}
return 0;
}

