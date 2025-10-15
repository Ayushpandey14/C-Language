// write a program in c to take the name and age of the user as input and display the massege#includ
#include<stdio.h>
int main(){
    char name[50];
    int age;
    printf("enter your name:");
    scanf("%s", name);
    
    printf("Enter your age:");
    scanf("%d",&age);

    printf("Hello %s, you are %d year old \n" ,name,age);
    return 0;


}