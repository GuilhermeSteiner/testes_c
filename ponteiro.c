#include <stdio.h>

int calcula (int* c) {

    printf("calcula %d\n",*c);
    (*c)++;
    printf("calcula %d\n",*c);

    return 0;
}


int main () {

    int c = 10;
    printf("main %d\n",c);
    calcula(&c);
    printf("main %d\n",c);

    return 0;
}