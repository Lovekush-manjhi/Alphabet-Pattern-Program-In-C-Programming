#include<stdio.h>
int main(){
for(int a=1; a<=20; a++){ //row
    for(int b=1; b<=50; b++){  //column
        if((a==3&&b>12&&b<=18)||  //first line
           (b==10&&a>3&&a<=4)||(b==8&&a>4&&a<=5)||(b==7&&a>5&&a<=9)||(b==8&&a>9&&a<=10)||(b==10&&a>10&&a<=11)||    //curve
           (a==12&&b>12&&b<=18)){  //lats line
           printf("*");
        }else{
            printf(" ");
        }
    }
    printf("\n");
}
return 0;
}
