# Práctica 5: El mayor de tres números

> **En esta práctica todo es tuyo:** el análisis, la receta, el código y las pruebas. Llena cada sección en la fase que se indica.

## 1. Descripción del problema (Fase 1)
Este programa te pide 3 numeros y te muestra cual de los 3 es el mas grande.

## 2. Entradas y salidas (Fase 1)
<!-- Define cada entrada y cada salida, con su tipo de dato y su objetivo. -->

**Entradas:**
1. Primer número (double): primer valor que escribe el usuario para comparar.
2. Segundo número (double): segundo valor que escribe el usuario para comparar.
3. Tercer número (double): tercer valor que escribe el usuario para comparar.

**Salida:**
1. Número mayor (double): el numero más grande de los tres.

**¿Muestro el valor del mayor o cuál de los tres fue (primero, segundo o tercero)? ¿Por qué?**
Muestro el valor del mayor, porque en un caso como 7, 7, 3 el primero y el segundo son el mayor, y no tendría que escoger entre los dos ya que el valor siempre es uno solo (7).

**¿Qué función de `utilerias.h` uso para leer los números? ¿Por qué esa y no la otra?**
utilizaria leerDecimal porque si utilizara un numero como el 2.5 con leerEntero no lo acaptaria.

## 3. Restricciones e invariante (Fases 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- deben ser numeros no letras
- el programa siempre debe mostrar un solo resultado

**¿Hace falta validar el rango de los números (por ejemplo, rechazar el 0 o los negativos)? ¿Por qué?**
No, porque son numeros reales

**¿Qué hace mi programa cuando dos números son iguales y son los mayores? ¿Y cuando los tres son iguales?**
Muestra el valor del mayor una sola vez por ejemplo con 7, 7, 3 muestra 7 y con 5, 5, 5 muestra 5".

**¿Quién detecta cada error?** (¿qué revisa la función de `utilerias.h` y qué reviso yo?)
leerDecimal detecta si escriben letras y vuelve a pedir el dato.

**Invariante** (justo antes de mostrar el resultado, ¿qué es seguro sobre el valor que voy a mostrar?):
Que siemore se mostrara el numero mas grande

## 4. Casos resueltos a mano (Fase 1)

| Caso | Número 1 | Número 2 | Número 3 | Mayor calculado a mano |
|---|---|---|---|---|
| 1 (el mayor en primera posición) | 7 | 4 | 2 | 7 |
| 2 (el mayor en segunda posición) | 5 | 9 | 3 | 9 |
| 3 (el mayor en tercera posición) | 6 | 4 | 8 | 8 |
| 4 (con un empate) | 7 | 7 | 3 | 7 |
| 5 (con negativos) | -1 | -3 | -5 | -1 |

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las preguntas. -->

**¿Probé mi receta a mano con mis 5 casos?** Sí 
**¿Tuve que corregirla? ¿Qué cambié?** No
**¿Cuántas versiones de mi receta escribí hasta la final?** una
**¿Se me ocurrió otra forma de resolver el problema? ¿Cuál? ¿Por qué elegí la que usé?**
No

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o numero_mayor
./numero_mayor
```

## 7. Ejemplo de ejecución (Fase 3)
<!-- Pega aquí lo que muestra tu programa en pantalla con un caso de empate (por ejemplo 7, 7 y 3). -->

```
_____
```

## 8. De la receta al código (Fase 3)
<!-- Para cada paso de TU receta, escribe la instrucción (o instrucciones) de C++ que lo implementa. Agrega las filas que necesites. -->

| Paso de la receta | Instrucción de C++ que lo implementa |
|---|---|
| 1. Mensaje de bienvenida | _____ |
| _____ | _____ |
| _____ | _____ |
| _____ | _____ |
| _____ | _____ |

**¿Hubo algún paso de mi receta que me costó traducir a C++? ¿Cuál y por qué?**
_____

## 9. Experimentos (Fase 3)

**Experimento A: ¿qué te dijo el compilador con `if (a > b > c)`? ¿Qué mostró el programa con 3, 2 y 1? ¿Por qué?**
_____

**Experimento B: al cambiar `>=` por `>` (o al revés), ¿qué mostró el programa con 7, 7, 3 y con 5, 5, 5? ¿Por qué?**
_____

**Experimento C (opcional): con `if (a = b)`, ¿qué te dijo el compilador? ¿Qué le pasó al valor de `a`?**
_____

## 10. Tabla de pruebas (Fase 4)

| Caso | Entradas | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|
| Mayor primero | 9, 4, 2 | 9 | _____ | _____ |
| Mayor en medio | 4, 9, 2 | 9 | _____ | _____ |
| Mayor al final | 2, 4, 9 | 9 | _____ | _____ |
| Empate arriba (1.º y 2.º) | 7, 7, 3 | 7 | _____ | _____ |
| Empate arriba (1.º y 3.º) | 7, 3, 7 | 7 | _____ | _____ |
| Empate abajo | 8, 3, 3 | 8 | _____ | _____ |
| Los tres iguales | 5, 5, 5 | 5 | _____ | _____ |
| Todos negativos | -4, -1, -9 | -1 | _____ | _____ |
| Con cero | -2, 0, -5 | 0 | _____ | _____ |
| Decimales cercanos | 2.5, 2.7, 2.6 | 2.7 | _____ | _____ |
| Texto | `abc` (luego 3), 1, 2 | vuelve a pedir el dato; 3 | _____ | _____ |
| Caso propio 1 | _____ | _____ | _____ | _____ |
| Caso propio 2 | _____ | _____ | _____ | _____ |

## 11. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 | _____ | _____ | _____ |
| 2 | _____ | _____ | _____ |

**Reto elegido (opcional):** _____

## 12. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
| _____ | _____ |

## 13. Reflexión final

**¿Qué aprendí con esta práctica?**
_____

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
_____

**¿Qué fue lo más difícil y cómo lo resolví?**
_____

**¿Qué pregunta me quedó sin responder?**
_____

**¿Qué fue más fácil para mí: la Práctica 3 (receta propia con un paso de ejemplo), la 4 (receta ajena) o esta (todo desde cero)? ¿Por qué?**
_____

**¿Pensé en los empates antes de programar o los descubrí al probar?**
_____

## 14. Lista de verificación antes de entregar (Fase 5)

- [ ] Llené las secciones 1 a 13 (no quedan `_____`)
- [ ] Escribí mi receta completa en `RECETA.md` antes de programar
- [ ] Cada bloque de `main.cpp` tiene su comentario `// Paso N`, de acuerdo con mi receta
- [ ] Mi programa compila sin advertencias
- [ ] Probé todos los casos de la tabla, incluidos los empates
- [ ] Hice los Experimentos A y B y dejé el código correcto al terminar
- [ ] No modifiqué `utilerias.h`
- [ ] Hice al menos 3 commits con mensajes claros
- [ ] Hice `git push` y verifiqué mi fork en GitHub
- [ ] Mi fork se llama `ulsa_ime_1_dp_numero_mayor` y el código está en `main.cpp`
- [ ] Entregué el enlace de mi fork en Classroom