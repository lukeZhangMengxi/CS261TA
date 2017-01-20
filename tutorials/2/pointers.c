#include <stdio.h>

int main(void)
{
    int x = 19;
    // HINT 1
    // * 
    // you can not use *x before you initialize it 
    // think * as a flag of a variable name
    // HOWEVER, * is actually not a component of a variable, 
    //          you are redefining a defined vriable by definng int **x after defining int *x (which cause an error)

    // HINT 2
    // &
    // you can use &x without a initilialization
    // think & as an operator, which is attached to a variable name (not the operator AND)
    int *pointer_x = &x;
    int and_x = &x;

    printf("variable Name: x         Address: %p -->> Value stored: %d\n", &x, x);
    /* 
        HINT 3
        wierd situation: 
            when initializing it, *pointer_x seems storing the address 
            when using it everywhere else, *pointer_x refer to the value
    */ 
    printf("variable Name: *pointer_x   Address: %p -->> Value stored: %d\n", &(*pointer_x), *pointer_x);
    /* 
        HINT 4
        use decimal to hex converter to show value of the following variables are the address of x 
    */
    printf("variable Name: pointer_x    Address: %p -->> Value stored: %d\n", &(pointer_x), pointer_x);
    printf("variable Name: and_x     Address: %p -->> Value stored: %d\n", &(and_x), and_x);


    printf("\n");
    // HINT 5 &(&x) No such thing
    // HINT 6 **x
    int **double_pointer_x;
    double_pointer_x = &(pointer_x);
    printf("variable Name: *pointer_x           Address: %p -->> Value stored: %d\n", &(*pointer_x), *pointer_x);
    printf("variable Name: pointer_x            Address: %p -->> Value stored: %d\n", &(pointer_x), pointer_x);
    printf("variable Name: **double_pointer_x   Address: %p -->> Value stored: %d\n", &(**double_pointer_x), **double_pointer_x);
    printf("variable Name: *double_pointer_x    Address: %p -->> Value stored: %d\n", &(*double_pointer_x), *double_pointer_x);
    printf("variable Name: double_pointer_x     Address: %p -->> Value stored: %d\n", &(double_pointer_x), double_pointer_x);

    return 0;

}