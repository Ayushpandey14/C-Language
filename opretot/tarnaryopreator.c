#include<stdio.h>16
#include<math.h>
int main(){

    int month;
    printf("enter month(1-12) :");
    scanf("%d" , &month);

    switch (month) {
        case 1 : printf("janury \n");
                 break;
        case 2 : printf("febray \n");
                 break;
        case 3 : printf("march \n");
                 break;
        case 4 : printf("april \n");
                break;
        case 5 : printf("may \n");
                break;
        case 6 : printf("jun \n");
                 break;
        case 7 : printf("july \n");
                break;
        case 8 : printf("aguest \n");
                 break;
        case 9 : printf("september \n");
                 break;
        case 10 : printf("octuber \n");
                  break;
        case 11 : printf("naumber\n");
                  break;
        case 12 : printf("decamber \n");
                  break;
        default : printf("not a vaild month! \n");
    }

        return 0;

    }


    