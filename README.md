
# Programa en C: Visualización de Componentes del Sistema Operativo

Este programa en C permite visualizar algunos de los principales componentes de un sistema operativo, incluyendo la versión del kernel, la memoria disponible y el número de procesos en ejecución. Es un programa básico diseñado para ejecutarse en sistemas basados en Linux.

## Requisitos

- Sistema operativo Linux (o cualquier sistema compatible con las funciones `uname`, `sysconf`, y los comandos de shell `ps` y `wc`).
- Un compilador de C, como `gcc`.

## Funcionalidades

1. **Información del sistema operativo**:
   - Muestra el nombre del sistema, la versión del kernel, el nombre del nodo y la arquitectura del sistema.

2. **Memoria disponible**:
   - Calcula y muestra la memoria total del sistema en bytes y en gigabytes (GB).

3. **Número de procesos en ejecución**:
   - Muestra el número de procesos que se están ejecutando en el sistema.

## Compilación

Para compilar el programa, asegúrate de tener un compilador de C como `gcc` instalado. Luego, usa el siguiente comando en la terminal:

```bash
gcc -o sistema_operativo sistema_operativo.c
```

Esto generará un archivo ejecutable llamado `sistema_operativo`.

## Ejecución

Una vez compilado, puedes ejecutar el programa con el siguiente comando:

```bash
./sistema_operativo
```

El programa mostrará la información del sistema operativo, la memoria disponible y el número de procesos en ejecución.

## Estructura del Código

- **mostrar_version_sistema()**: Muestra información sobre el sistema operativo utilizando la función `uname()`.
- **mostrar_memoria_disponible()**: Calcula la memoria total disponible utilizando `sysconf()` y muestra el resultado en bytes y gigabytes.
- **mostrar_numero_procesos()**: Utiliza el comando `ps -e | wc -l` para contar y mostrar el número de procesos en ejecución.


## Manejo de memoria
- **malloc:** Asigna memoria dinámica para almacenar una cierta cantidad de enteros y luego inicializa el bloque de memoria. Se asigna memoria para 5 enteros y se verifica si la asignación fue exitosa.

- **calloc:** Similar a malloc, pero también inicializa todos los bytes de la memoria asignada a cero. Se muestra cómo los valores asignados por calloc están todos en cero inicialmente.

- **realloc:** Permite reasignar un bloque de memoria previamente asignado, ampliando el espacio para almacenar más enteros. La memoria se expande para almacenar 10 enteros, y los nuevos elementos se inicializan.

- **free:** Libera la memoria asignada dinámicamente al final del programa para evitar fugas de memoria.

## Notas

- El programa está diseñado para sistemas Linux. Algunos comandos y funciones pueden no estar disponibles o ser diferentes en otros sistemas operativos.
- Asegúrate de tener los permisos adecuados para ejecutar comandos del sistema si usas este programa en un entorno restringido.

## Licencia

Este programa se proporciona bajo la licencia MIT. Puedes usarlo, modificarlo y distribuirlo libremente.
