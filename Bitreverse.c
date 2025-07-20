#include <stdio.h>

unsigned int bit_reverse_swap(unsigned int n) {
	int left = 31;
    int right = 0;
    int bitLeft;
    int bitRight;
        
    for (int i = 0; i < 16; i++) {
        left = 31 - i;
        right = i;

        // Extract bits at positions i and (31 - i)
        bitLeft = (n >> left) & 1;
        bitRight = (n >> right) & 1;

        // If the bits are different, toggle both
        if (bitLeft != bitRight) {
            n ^= (1U << left);   // Toggle left bit
            n ^= (1U << right);  // Toggle right bit
        }
    }
    return n;
}

int main()
{
	
	printf("%x",bit_reverse_swap(0xf0ff));
}
