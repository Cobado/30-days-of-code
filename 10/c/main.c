#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

void decToBin(int n);

int main()
{
    char* n_endptr;
    char* n_str = readline();
    int n = strtol(n_str, &n_endptr, 10);

    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }
    
    decToBin(n);

    return 0;
}

void decToBin(int n) {
    int bin[32];
    int i = 0;
    int result = 0;
    int max = 0;
    
    while (n > 0) {
        bin[i] = n % 2;
        n = n / 2;
        i++;
    }
   //1111101000
    for (int j = i - 1; j >= 0; j--) {
        if (bin[j] == 1) {
            result += 1;
        } else {
            result = 0;
        }
        if (max < result) {
            max = result;
        }
    }
  
    printf("%d", max);
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}
