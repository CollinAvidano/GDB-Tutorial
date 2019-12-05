#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFERSIZE 20

void setint(int* ip, int i) {
    *ip = i;
} 

void write_message(char *message) {
    char buffer[BUFFERSIZE];

    memset(buffer, '\0', BUFFERSIZE);
    strcpy(buffer, message);
    printf("%s\n", buffer);
}

int main() {
    char message[] = "C arrays and pointers are NOT the same!\n";
    int a;
    static int c;
    int *b;
    a++;
    setint(&a, 10);
    printf("%d\n", a);
    setint(b, 20);
    printf("%ld\n", *b);

    write_message(message);

    return 0;
}
