#include <stdio.h>

size_t getSize (const float *ptr) {
    return sizeof(ptr);
}

int main () {
    float array[3] = {3.14159, 2.71828, 8.85418};
    //here, the sizeof() sees an array of 3 floats, and since a float is 4 bytes, 
    //the size outputted is (4 bytes * 3 floats) = 12 bytes
    printf("number of bytes in the array is %zu\n", sizeof(array));
    //since the name of the array is an address to the first element in the array, 
    //the getSize() is gives the ADDRESS of the first float in the array, and since addresses are 8 bytes, the output is 8*/
    printf("number of bytes returned by getSize is %zu\n\n", getSize(array)); 
    

    
    int b[] = {10, 20, 30, 40};
     //points to the first element

    printf("Array b printed with:\nArrray subscript notation\n");
    for (size_t i = 0; i < 4; i++) { 
        printf("b[%zu] = %d\n", i, b[i]);
    } // the printing we're all used to

    printf("\nPointer/offset notation where the pointer is the array name\n");
    for (size_t offset = 0; offset  < 4; offset++) { 
        printf("*(b + %zu) = %d\n", offset, *(b+offset));
    } // depends on the fact that b = first element, b+1 = second element, so you can use a for loop to go to each elemnt in the array
      // just remember that you can't add an integer to an address, so you have to use size_t
    
    int *bPtr = b;
    printf("\nPointer subscript notation\n");          
    for (int i = 0; i < 4; i++) {
        printf("bPtr[%d] = %d\n", i, bPtr[i]);
    } // since bPtr points to the first element of the array the same was b does
      // so it magically inherits the entire array :)

    printf("\nPointer/offset notation\n");
    for (size_t offset = 0; offset  < 4; offset++) {
        printf("*(bPtr + %zu) = %d\n", offset, *(bPtr+offset));
    } // the same concept of the second example, where you increment the address and not the subscript
      // and since bPtr and b poiunt to the same array, it works just fine
    return 0;
}