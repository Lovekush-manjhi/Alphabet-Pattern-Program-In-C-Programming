#include<stdio.h>
int main(){
for(int a=1; a<=20; a++){ //row
    for(int b=1; b<=50; b++){  //column
        if((b==2&&a>2&&a<=11)||
           (a==7&&b>2&&b<=10)||
           (b==10&&a>2&&a<=11)
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
