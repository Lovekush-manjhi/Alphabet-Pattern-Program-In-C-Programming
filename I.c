#include<stdio.h>
int main(){
for(int a=1; a<=20; a++){ //row
    for(int b=1; b<=50; b++){  //column
        if((a==2&&b>2&&b<=11)||
           (b==7&&a>2&&a<=10)||
           (a==10&&b>2&&b<=11)
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

