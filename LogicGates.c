//NOR - !(A | B)
//NAND - !(A & B)
//EX-NOR - !(A ^ B)

#include<stdio.h>
int main()
{
	int a=10;
	int b=5;
	
	printf("NOR: %x",!(a | b));
	printf("NAND: %x",!(a & b));
	printf("EX-NOR: %X",!(a ^ b));
}
