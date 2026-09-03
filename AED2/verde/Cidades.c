#include <stdio.h>
#include <string.h>

int main(void) {
    char cidade[105];

    while (fgets(cidade, sizeof(cidade), stdin)) {
        cidade[strcspn(cidade, "\r\n")] = '\0';

        if (strcmp(cidade, "FIM") == 0) {
            break;
        }

        printf("%zu\n", strlen(cidade));
    }

    return 0;
}