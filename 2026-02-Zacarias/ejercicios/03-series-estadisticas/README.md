# Ejercicio 03 - Series y estadísticas

Crear funciones que recorran los números desde `1` hasta un límite `n` para
practicar ciclos, contadores y acumuladores.

## Estructura que se debe crear

```text
03-series-estadisticas/
├── inc/
│   └── series.h
└── src/
    ├── main.c
    └── series.c
```

## Funciones requeridas

```c
int sumar_hasta(int n);
int contar_pares(int n);
int contar_multiplos(int n, int divisor);
int sumar_multiplos(int n, int divisor);
```

Todas las funciones trabajan con el intervalo de `1` a `n`, inclusive. Si `n`
es menor que `1`, deben devolver `0`. Si el divisor es `0`, las funciones
relacionadas con múltiplos deben devolver `0`.

No se deben utilizar fórmulas matemáticas directas para reemplazar los ciclos.

## Compilación

```bash
gcc src/*.c -I inc -o series
```
