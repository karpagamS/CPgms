//byte swap
#include <stdio.h>
#include <stdint.h>
#include <string.h>

// Function to swap any two bytes in a given variable (passed by pointer)
void byteSwap(void* data, size_t size, char pos1, char pos2) {
    if (pos1 >= size || pos2 >= size || pos1 == pos2)
        return;

    // Assign it to char* pointer
    uint8_t* bytes = (uint8_t*)data;

    // Swap
    bytes[pos2] ^=bytes[pos1];
    bytes[pos1] ^= bytes[pos2];
    bytes[pos2] ^=bytes[pos1];
}

// Test function
int main() {
    short val = 0x1234;

    printf("Before swap: 0x%x\n", val);
    
    byteSwap(&val, sizeof(val), 0, 1);  // swap byte 0 and 3 (LSB and MSB)

    printf("After swap : 0x%x\n", val);

    return 0;
}

