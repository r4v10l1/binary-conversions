#include <stdio.h>
#include <stdlib.h>     // atoi()
#include <string.h>     // strcmp()
#include <math.h>       // pow()

#include "conversors.h"

static inline void print_help();
static inline void print_dec(int num);
static inline void print_bin(long num);
static inline void print_oct(int num);

int main(int argc, char** argv) {
    // If not enough args or help
    if (argc < 3 || strcmp(argv[1], "--help") == 0) {
        print_help(argv[0]);
        return 1;
    }

    // Check what are we trying to convert
    if (argv[1][0] == 'd') {
        int num = atoi(argv[2]);
        print_dec(num);
        return 0;
    } else if (argv[1][0] == 'b') {
        long num = atol(argv[2]);
        print_bin(num);
        return 0;
    } else if (argv[1][0] == 'o') {
        int num = atoi(argv[2]);
        print_oct(num);
        return 0;
    } else {
        printf("Unknown options.\n");
        print_help();
        return 1;
    }

    return 0;
}

void print_help(const char* argv0) {
    printf("Usage:\n");
    printf("\t%s d <decimal num>\n", argv0);
    printf("\t%s b <binary num>\n", argv0);
    printf("\t%s o <octal num>\n", argv0);
    printf("\t%s h <hexadecimal str>\n", argv0);
}

void print_dec(int num) {
    printf("Dec: %d\n", num);
    printf("Bin: %ld\n", dec2bin(num));
    printf("Oct: %d\n", dec2oct(num));
    printf("Hex: %s\n", dec2hex(num));
}

void print_bin(long num) {
    printf("Dec: %d\n", bin2dec(num));
    printf("Bin: %ld\n", num);
    printf("Oct: %d\n", bin2oct(num));
    printf("Hex: %s\n", bin2hex(num));
}

void print_oct(int num) {
    printf("Dec: %d\n", oct2dec(num));
    printf("Bin: %ld\n", oct2bin(num));
    printf("Oct: %d\n", num);
    printf("Hex: %s\n", oct2hex(num));
}
