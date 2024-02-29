#include <stdio.h>
int main() {
    int x, y, *px, *py;
    int arr[10];
    x = 3;
    y = 3;
    arr[0] = 2;

    px = &x;
    py = &y;
    printf("%p\n", (void *)arr);
    printf("%p\n", (void *)&arr[0]);

    int *ptr = arr;
    int i;
    for(i = 0; i < 10; i++){
        printf("%d\n", *ptr);
        ptr++;
    }
    return 0;
}