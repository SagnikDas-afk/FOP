#include <stdio.h>
#include <stdlib.h> // Required for exit()

int main() {
    FILE *src, *dest;
    char ch;

    src = fopen("source_file.txt", "r");
    dest = fopen("destination_file.txt", "w");
                                                                                                                              
    // Using stdlib.h for error handling
    if (src == NULL || dest == NULL) {
        printf("Error opening files!\n");
        exit(1); 
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);
    printf("File copied successfully.\n");

    return 0;
}