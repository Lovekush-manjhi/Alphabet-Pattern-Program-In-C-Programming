#include<stdio.h>
int main(){
for(int a=1; a<=20; a++){ //row
    for(int b=1; b<=50; b++){  //column
        if((b==3&&a>2&&a<=10)||
           (a==10&&b>3&&b<=10)
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


