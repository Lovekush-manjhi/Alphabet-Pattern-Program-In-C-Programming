#include<stdio.h>
int main(){
for(int a=1; a<=20; a++){ //row
    for(int b=1; b<=50; b++){  //column
        if((b==2&&a>2&&a<=13)|| //first single line
           (a==3&&b>2&&b<=12)|| //first row line
           (a==8&&b>2&&b<=12)|| //middle row line
           (a==13&&b>2&&b<=12) //last row line
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
