# Temporizador_PIC18f45K50
Temporizador desplegable en un solo exhibidor de 7 segmentos

## Acerca del Temporizador_PIC18f45K50
En este proyecto se desarrolla una base de tiempo con un temporizador (50 o 100ms). Una vez que se introduzca el tiempo a partir del cual se quiere iniciar el temporizador, se irán decrementando registros que guarden los segundos (0 a 59) unidades de minuto (0 a 9) y decenas de minuto (0 a 5). Las unidades y decenas de segundos y minutos se muestran en un exhibidor de 7 segmentos, una a la vez.
Existen 4 Leds que se encienden según el dígito que se esté mostrando (usando el formato de tiempo 00:00)
Hay 3 push-buttons:
* Ajuste de tiempo:  al ser presionado entra al modo ajuste de tiempo, el LED del dígito que se va a modificar va a parpadear. Al volver a presionar el push-button de ajuste cambiará al siguiente dígito, siempre que cambie de digito el LED va a parpadear.
* Incrementador: permite incrementar el valor del dígito que se esté ajustando hasta llevarlo al valor deseado. Una vez que se recorran todos los dígitos, saldrá del modo ajuste y regresará a mostrar el tiempo seleccionado
* Retroceso: inicia el conteo hacia atrás, cuando el reloj llegue a cero se volverán a presentar los valores seleccionados anteriormente. Si el push-button se presiona antes de que termine el conteo, este se detendrá y volverá a comenzar hasta que se presione nuevamente 

## Simulación en proteus
![CHEESE!](https://user-images.githubusercontent.com/87031668/151654972-5e9cfd4b-2a63-4d52-9b82-48a6f5cfbe45.png)

## Videos
[![Exactitud](https://i.imgur.com/-KFFsFr5zDQ.png)](https://youtu.be/-KFFsFr5zDQ)
[![Funcionamiento](https://i.imgur.com/Q-HqPuEgXxY.png)](https://youtu.be/Q-HqPuEgXxY)



