#include<stdio.h>
int main(){
for(int a=1; a<=20; a++){ //row
    for(int b=1; b<=50; b++){  //column
        if((b==3&&a>2&&a<=12)|| //straight line
           (a==3&&b>3&&b<=8)||(a==7&&b>3&&b<=8)||  //two row line
           (b==10&&a>3&&a<=6)  //curve
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



