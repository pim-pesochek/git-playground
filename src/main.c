#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("hello world!");
    for (int i = 0; i != argc; ++i) {
        printf("argv[%i]: %s", i, argv[i]);
    }
    return 0;
}
