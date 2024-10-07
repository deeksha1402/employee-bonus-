#include(stdio.h)
int main(){
    int year;
    printf("enter the year");
    scanf("%d,"&year);
    if(year<10){
        printf("employee get 15% bonus");
    }
    else if(year>=5){
        printf("employee get 10% bonus");
    }
    else{
        printf("next time");
    }
    return 0;
}