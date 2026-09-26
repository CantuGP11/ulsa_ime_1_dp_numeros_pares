# Práctica 2: Guardar los números pares
## 1. Descripción del problema (Fase 1)
<!-- Explica con tus palabras qué hace tu programa y para qué serviría en la vida real. Máximo 4 líneas. -->

Haremos un programa que de 5 numeros tratar de sacar los pares que halla entre esos numeros y eso nos ayudaria cuando de difernetes numeros de ventas y salidas quieres obtener solo los numeros de ventas y calcular cuanto vendiste

## 2. Entradas y salidas (Fase 1)
<!-- Define cada entrada y cada salida, con su tipo de dato y su objetivo. -->

**Entradas:**
1. 5 numeros los que sean

**Salidas:**
1. cuales numeros pares hay
2. cuntos numeros pares hay

## 3. Restricciones e invariante (Fase 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- los numeros decimales
- Que el dato no sea numerico

**Tamaño del arreglo y por qué** (piensa en el peor caso):
Que el usuario en vez de poner numeros enteros ponga numeros romanos asi ya el programa no puede funcionar

**¿El 0 y los negativos son pares? ¿Por qué?**
Sí, el 0 y los números negativos pueden ser pares. Un número es par si al dividirlo entre 2 su residuo es 0.

**Invariante** (¿qué es verdad después de cada vuelta del ciclo?):
Después de cada vuelta del ciclo, el arreglo contiene solamente los números pares que se han encontrado hasta ese momento, y el contador indica correctamente cuántos números pares se han guardado.

## 4. Casos resueltos a mano (Fase 1)

| Caso | Números | Pares guardados | Posición de cada par |
|---|---|---|---|
| 1 | 3, 8, 5, 2, 7 | 8,2 | 0,1 |
| 2 | 2,6,9,5,8 | 2,6,8 | 0,1,2 |
| 3 | 3,4,5,6,7 | 4,6 | 0,1 |

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las dos preguntas. -->

**¿Probé mi receta a mano con un caso?** Sí 
**¿Tuve que corregirla?** no

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o numeros_pares
./numeros_pares
```

## 7. Ejemplo de ejecución (Fase 3)
<!-- Pega aquí lo que muestra tu programa en pantalla con un caso normal. -->

```
PS C:\Users\gcp_1\Downloads\ulsa_ime_1_dp_numeros_pares> ./main.exe
Ingresar numero: 1
Ingresar numero: 2
Ingresar numero: 5
Ingresar numero: 8
Ingresar numero: 6
2
8
6
```

## 8. Experimentos (Fase 3)

**Experimento A: ¿qué apareció al imprimir las 5 posiciones del arreglo? ¿Por qué?**
___Aparecieron los números pares que se habían guardado y también posiciones que no contenían datos útiles. Esto ocurre porque el arreglo tiene 5 posiciones, pero no necesariamente las 5 se llenan cuando algunos números ingresados son impares. Las posiciones que no se utilizaron no tienen un valor válido para nuestro programa.__

**Experimento B: ¿qué pasó al usar la variable del ciclo como posición del arreglo? ¿Por qué?**
Al usar la variable del ciclo como posición del arreglo, se podían mostrar posiciones que no contenían datos válidos. Esto sucede porque la variable del ciclo cuenta los 5 números ingresados, mientras que el arreglo solo contiene los números pares encontrados. Por eso se debe usar totalPares para recorrer únicamente las posiciones que tienen un número guardado.

## 9. Tabla de pruebas (Fase 4)

| Caso | Números | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|
| Mezcla | 1, 2, 3, 4, 5 | 2 pares: 2, 4 | 2 pares | si |
| Posiciones distintas | 3, 8, 5, 2, 7 | 2 pares: 8, 2 | los dos pares | si |
| Todos pares | 2, 4, 6, 8, 10 | 5 pares | los 5 pares | si |
| Todos impares | 1, 3, 5, 7, 9 | 0 pares | 0 pares | no |
| Con cero y negativos | 0, -3, -4, 7, 1 | 2 pares: 0, -4 | 2 pares | si |
| Entrada inválida | `hola` o `3.5` | vuelve a pedir | error | no |
| Caso propio 1 | 1,2,5,8,6 | 3 pares | 3 pares | si |
| Caso propio 2 | 3,5,8,12,1 | 2 pares | 2 pares | si |

## 10. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 | Se mostraban posiciones del arreglo que no tenían números pares guardados. | Cambié el recorrido para usar totalPares en lugar de recorrer las 5 posiciones. | Sí, ahora solo se muestran los números pares encontrados. |
| 2 | Al principio intenté ejecutar directamente el archivo main.cpp. | Primero compilé el programa con g++ y después ejecuté main.exe. | Sí, el programa se ejecutó correctamente. |

**Reto elegido (opcional):** no elegi ningun reto

## 11. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
| como usar el ciclo while | no supe como ponerlo en el coodigo |

## 12. Reflexión final

**¿Qué aprendí con esta práctica?**
Aprendí a declarar y recorrer un arreglo, utilizar if para identificar números pares y usar una variable aparte para contar cuántos números pares se guardaron.

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
Intentaría planear mejor las variables antes de empezar y entender primero para qué sirve cada una. También probaría el programa con diferentes números para encontrar errores más rápido.

**¿Qué fue lo más difícil y cómo lo resolví?**
Lo más difícil fue entender la diferencia entre contador y totalPares. Lo resolví entendiendo que contador cuenta los números que se ingresan, mientras que totalPares cuenta solamente los números pares que se guardan.

**¿Qué pregunta me quedó sin responder?**
Me quedó la duda de qué otros tipos de datos puedo guardar en un arreglo y cómo podría hacer este mismo programa usando un ciclo for.

**¿Por qué no puedo usar la variable del ciclo para guardar en el arreglo?**
Porque la variable del ciclo cuenta todos los números que se ingresan, incluyendo los impares. En cambio, el arreglo solo guarda los pares. Por eso necesito totalPares para indicar la siguiente posición disponible del arreglo.

## 13. Lista de verificación antes de entregar (Fase 5)

- [si] Llené todas las secciones (no quedan `_____`)
- [si] Mi programa compila sin advertencias
- [si] Probé todos los casos de la tabla
- [si] Hice los Experimentos A y B y dejé el código correcto al terminar
- [si] No modifiqué `utilerias.h`
- [si] Hice al menos 3 commits con mensajes claros
- [si] Hice `git push` y verifiqué mi fork en GitHub
- [si] Entregué el enlace de mi fork en Classroom