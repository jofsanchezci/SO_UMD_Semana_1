#include <stdio.h>
#include <stdlib.h>
#include <sys/utsname.h>
#include <unistd.h>

void mostrar_version_sistema() {
    struct utsname buffer;

    if (uname(&buffer) != 0) {
        perror("uname");
        exit(EXIT_FAILURE);
    }

    printf("Sistema Operativo: %s\n", buffer.sysname);
    printf("Nombre del nodo: %s\n", buffer.nodename);
    printf("Versión del Kernel: %s\n", buffer.release);
    printf("Arquitectura: %s\n", buffer.machine);
}

void mostrar_memoria_disponible() {
    long paginas = sysconf(_SC_PHYS_PAGES);
    long tamano_pagina = sysconf(_SC_PAGE_SIZE);
    long memoria_total = paginas * tamano_pagina;

    printf("Memoria total: %ld bytes (%.2f GB)\n", memoria_total, memoria_total / (1024.0 * 1024.0 * 1024.0));
}

void mostrar_numero_procesos() {
    system("ps -e | wc -l");
}

int main() {
    printf("=== Información del Sistema Operativo ===\n");
    mostrar_version_sistema();

    printf("\n=== Información de Memoria ===\n");
    mostrar_memoria_disponible();

    printf("\n=== Número de Procesos en Ejecución ===\n");
    printf("Número de procesos: ");
    mostrar_numero_procesos();

    return 0;
}
