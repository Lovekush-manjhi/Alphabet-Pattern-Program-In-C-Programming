#include<stdio.h>
int main(){
for(int a=1; a<=20; a++){ //row
    for(int b=1; b<=50; b++){  //column
        if((b==3&&a>2&&a<=3)||(b==4&&a>3&&a<=4)||(b==5&&a>4&&a<=5)||(b==6&&a>5&&a<=6)||(b==7&&a>6&&a<=7)||(b==8&&a>7&&a<=8)|| //first cross line
           (b==14&&a>2&&a<=3)||(b==13&&a>3&&a<=4)||(b==12&&a>4&&a<=5)||(b==11&&a>5&&a<=6)||(b==10&&a>6&&a<=7)||(b==9&&a>7&&a<=8) //last cross line
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



