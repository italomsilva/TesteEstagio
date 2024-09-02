#include <stdio.h>

int haveAa(char* str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            count++;
        }
    }

    return count;
}

int main() {
    char str[100];
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    int count = haveAa(str);
    if (count > 0) {
        printf("A string contém a letra 'a' ou 'A' %d vez(es).\n", count);
    } else {
        printf("A string não contém a letra 'a' ou 'A'.\n");
    }

    return 0;
}
