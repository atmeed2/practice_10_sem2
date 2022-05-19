#include <iostream>


int main() {

    int someSize = 10;

    int a[someSize];
    for(int i = 0; i < someSize; i++)
    {
        printf("Ссылка a[%d]: 0x%x: %d\n", i, &a[i], (a[i] = rand() % 0xff));
    }
        
    int * pa = a;

    for(int i = 0; i < someSize; i++)
        printf("%d\n", *(pa + i));

    return 0;

    return 0;
}