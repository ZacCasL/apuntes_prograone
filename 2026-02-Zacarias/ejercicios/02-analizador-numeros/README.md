# Ejercicio 02 - Analizador de números

Crear un programa modular que analice números enteros mediante decisiones.

## Estructura que se debe crear

```text
02-analizador-numeros/
├── inc/
│   └── analizador.h
└── src/
    ├── main.c
    └── analizador.c
```

## Funciones requeridas

```c
int obtener_signo(int numero);
int es_par(int numero);
int es_multiplo(int numero, int divisor);
```

`obtener_signo` debe devolver `1` si el número es positivo, `-1` si es
negativo y `0` si es cero. `es_par` debe devolver `1` cuando el número sea par
y `0` en caso contrario. `es_multiplo` debe devolver `1` cuando `numero` sea
múltiplo de `divisor`; si el divisor es cero debe devolver `0`.

El archivo `main.c` debe leer los valores, llamar a las funciones y mostrar los
resultados. No se deben cambiar los nombres ni las firmas indicadas.

## Compilación

```bash
gcc src/*.c -I inc -o analizador
```
