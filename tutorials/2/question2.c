#include<stdio.h>


const int length_of_array = 3;
const int element0 = 1;
const int element1 = 12;
const int element2 = 7;
// const int element3 = 8;
// const int element4 = 100;
// const int element5 = 57;




int add_array(int *array, int n)
{
    int sum = 0;
    while (--n >= 0)
    {
    	printf("Value of n: %d    Address of the pointer pointing to: %p -->> Value stored: %d\n", n, array, *array);
        sum += *(array++);					
    }
    return sum;
}



int main()
{
	int myArray[length_of_array] = { 10, 12, 90 };
	int r = add_array(myArray, length_of_array);
    printf("Result: %d\n", r);
    return 0;
}
