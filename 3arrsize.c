#include <stdio.h>

size_t getSize (const float *ptr) {
    return sizeof(ptr);
}

int main () {
    float array[3] = {3.14159, 2.71828, 8.85418};
    printf("number of bytes in the array is %zu\n", sizeof(array));
    printf("number of bytes returned by getSize is %zu\n\n", getSize(array)); //takes only the float at the address (aka the first float)
    

    
    int b[] = {10, 20, 30, 40};
    int *bPtr = b;

    printf("Array b printed with:\nArrray subscript notation\n");
    for (size_t i = 0; i < 4; i++) {
        printf("b[%zu] = %d\n", i, b[i]);
    }

    printf("\nPointer/offset notation where the pointer is the array name\n");
    for (size_t offset = 0; offset  < 4; offset++) {
        printf("*(b + %zu) = %d\n", offset, *(b+offset));
    }

    printf("\nPointer subscript notation\n");          //that's weird
    for (size_t i = 0; i  < 4; i++) {
        printf("bPtr[%zu] = %d\n", i, bPtr[i]);
    }

    printf("\nPointer/offset notation\n");
    for (size_t offset = 0; offset  < 4; offset++) {
        printf("*(bPtr + %zu) = %d\n", offset, *(bPtr+offset));
    }
    return 0;
}