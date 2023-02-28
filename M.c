#include<stdio.h>
int main(){
for(int a=1; a<=20; a++){ //row
    for(int b=1; b<=50; b++){  //column
        if((b==3&&a>2&&a<=10)||(b==15&&a>2&&a<=10)|| //two strait line
           (b==5&&a>3&&a<=4)||(b==7&&a>4&&a<=5)||(b==9&&a>5&&a<=6)||(b==13&&a>3&&a<=4)||
           (b==11&&a>4&&a<=5)
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


