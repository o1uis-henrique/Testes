#include <Stdio.h>
#include <Stdlib.h>
#include <String.h>

void inverter (char vet[])
{
    int i, aux, size = strlen(vet);
    fim = size - 1;
    for (i = 0; i < size; i++) {
        aux = vet [i];
        vet [i] = vet [fim];
        vet [fim] = aux;
        fim--;

    }
}
int main () {
    char palavra [25] = {"My name is luis!"};

    printf("%s\n", palavra);
    inverter (palavra);
    printf("%s\n", palavra);
    return 0;
}

