#include <stdio.h>


int main(void)
{
int number = 0;          // A variable of type int initialized to 0
int *pnumber = NULL;     // A pointer that can point to type int

number = 10;

printf("number's address: %p\n", &number); // Output the address
printf("number's value: %d\n\n", number);  // Output the value

pnumber = &number; // Store the address of number in pnumber


printf("pnumber's address: %p\n", (void*) &pnumber); // Output the actual address of the pointer not the address of what it is pointing to
printf("pnumber's size: %d bytes\n", sizeof (pnumber)); // Output the size of the pointer
printf("pnumber's value: %p\n", pnumber); // Output the value of the pointer which is the address to what it is pointing to (Address of number)
printf("pnumber's address: %p\n", *&pnumber); // Output the value inside the address of the pointer which is the address of number = pnumber
printf("value pointed to: %d\n", *pnumber); // Output the value of data that pointer is pointing to (value of number)

return 0;
}