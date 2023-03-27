#include <stdio.h>
int addition(int a,int b);
int sub(int a,int b);
int multiplication(int a,int b);
int Divide(int a,int b);

void main()
{ 
int a=10,b=20;

int c;

c=addition(a,b);
display(c);
//printf("%d",c);

c=sub(a,b);
printf("\n%d",c);

c=multiplication(a,b);
printf("\n%d",c);

c=divide(a,b);
printf("\n%d",c);

}

int addition(int a,int b){
    int result = a+b;
    return result;
    
}

int sub(int a,int b){
    int result = a-b;
    return result;
    

}
int multiplication(int a,int b){
    int result =a*b;
    return result;
}
void display(int c){
    printf("result=%d",c);
}
int divide (int a,int b){
    int result =a/b;
    return result;
}