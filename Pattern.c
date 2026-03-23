#include <stdio.h>
int main() {

    // Right angle Triangle
    int i, j, n = 5;
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Inverted Triangel
    for(int i = 5; i >= 1; i--) {
    for(int j = 1; j <= i; j++) {
        printf("* ");
    }
    printf("\n");
}

    // Pyramid
    int n = 5;
for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n-i; j++) printf(" ");
    for(int j = 1; j <= (2*i-1); j++) printf("*");
    printf("\n");
}

// Inverted Pyramid

    int n = 5;
for(int i = n; i >= 1; i--) {
    for(int j = 1; j <= n-i; j++) printf(" ");
    for(int j = 1; j <= (2*i-1); j++) printf("*");
    printf("\n");
}

// Diamond

    int n = 5;
// upper
for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n-i; j++) printf(" ");
    for(int j = 1; j <= (2*i-1); j++) printf("*");
    printf("\n");
}
// lower
for(int i = n-1; i >= 1; i--) {
    for(int j = 1; j <= n-i; j++) printf(" ");
    for(int j = 1; j <= (2*i-1); j++) printf("*");
    printf("\n");
}

//
    return 0;
}
