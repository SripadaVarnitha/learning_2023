//to set,clear,toggle the given position from nth
#include <stdio.h>

int bit_operations(int num, int oper_type, int pos) {
    int result = num;
    
    switch (oper_type) {
        case 1: 
            result |= (0x3 << pos);
            break;
        case 2: 
            result &= ~(0x7 << pos);
            break;
        case 3: 
            result ^= (1 << 31);
            break;
        default:
            printf("Invalid operation type!\n");
            break;
    }
    
    return result;
}

int main() {
    int num = 42; 
    int oper_type = 1; 
    int pos = 10; 
    int result = bit_operations(num, oper_type, pos);
    printf("Result: %d\n", result);    
    return 0;
}
