#include<stdio.h>


const long length_of_array = 3;
const long element0 = 1;
const long element1 = 12;
const long element2 = 7;
// const long element3 = 8;
// const long element4 = 100;
// const long element5 = 57;




long add_array(long *array, long n)
{
    long sum = 0;
    while (--n >= 0)
    {
    	printf("Value of n: %ld    Address of the polonger polonging to: %p -->> Value stored: %ld\n", n, array, *array);
        sum += *(array++);					
    }
    return sum;
}



int main()
{
	long myArray[length_of_array] = { 10, 12, 90 };
	long r = add_array(myArray, length_of_array);
    printf("Result: %ld\n", r);
    return 0;
}