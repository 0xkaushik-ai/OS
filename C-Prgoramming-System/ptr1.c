#include <stdio.h>

int main () {
    int x = 42;
    int *p = &x;    // p holds the address of X 


 // A pointer is a varaible whose value is an address . Thats the whole idea,
 // Two operators :
    // &x means "the address of x"
    // *p means "the value at the address p"
    // void * is a generic pointer type that can point to any data type. It is used when the type of the data being pointed to is not known or when a function needs to accept pointers of different types.


    printf("x           = %d\n",x);
    printf("&x          = %p\n",(void *)&x);
    printf("p           =%p\n",(void *)p);
    printf("*p         = %d\n",*p);   



    *p = 100;
    printf("X now = %d\n",x);

    return 0;

}