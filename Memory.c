#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Asignación dinámica de memoria con malloc
    int *ptr;
    int n, i;

    // Definir el tamaño de la memoria a asignar
    n = 5;
    printf("Asignando memoria para %d enteros usando malloc...\n", n);
    
    // Asignar memoria para 'n' enteros
    ptr = (int*)malloc(n * sizeof(int));

    // Verificar si malloc fue exitoso
    if (ptr == NULL) {
        printf("Error: no se pudo asignar la memoria.\n");
        exit(1);
    }

    // Inicializar el array y mostrar los valores
    for (i = 0; i < n; i++) {
        ptr[i] = i + 1;
    }

    printf("Valores después de malloc: ");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Asignación dinámica de memoria con calloc
    printf("Asignando memoria para %d enteros usando calloc...\n", n);
    ptr = (int*)calloc(n, sizeof(int));

    // Verificar si calloc fue exitoso
    if (ptr == NULL) {
        printf("Error: no se pudo asignar la memoria.\n");
        exit(1);
    }

    // Mostrar los valores inicializados por calloc
    printf("Valores después de calloc: ");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Reasignar memoria usando realloc
    n = 10;
    printf("Reasignando memoria para %d enteros usando realloc...\n", n);
    ptr = (int*)realloc(ptr, n * sizeof(int));

    // Verificar si realloc fue exitoso
    if (ptr == NULL) {
        printf("Error: no se pudo reasignar la memoria.\n");
        exit(1);
    }

    // Inicializar los nuevos elementos del array
    for (i = 5; i < n; i++) {
        ptr[i] = i + 1;
    }

    printf("Valores después de realloc: ");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Liberar la memoria
    free(ptr);
    printf("Memoria liberada correctamente.\n");

    return 0;
}
