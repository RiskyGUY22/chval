#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    struct stat fileStat;

    // Use stat to get the file status
    if (stat(argv[1], &fileStat) < 0) {
        perror("stat");
        exit(EXIT_FAILURE);
    }
    else {
        printf("%o\n", fileStat.st_mode & 0777);
    }
}