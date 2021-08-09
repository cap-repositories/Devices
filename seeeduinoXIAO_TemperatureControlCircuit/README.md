# Circuito de control de temperatura usando el Seeeduino XIAO

## Descripción
El circuito esta basado en el [Seeeduino XIAO](https://wiki.seeedstudio.com/Seeeduino-XIAO/), 
que se utiliza para controlar la temperatura de una resistencia de calor, 
midiendo la temperatura a través de una resistencia NTC.

## Conexiones
![imagen de conexiones](https://github.com/cap-repositories/Devices/blob/main/seeeduinoXIAO_TemperatureControlCircuit/imagenes/utilizacion_XIAOTemperatureControl.png)

## Programación del Seeeduino XIAO
+ Utilice la entrada analogica **A2** para leer los valores de voltaje del divisor de tensión con una resistencia de 4.7K y el NTC de 100K
+ Utilice la salida analogica **A3** para controlar el paso de corriente hacia la resistencia de calor a través de un MOSFET

## Notas
+ El circuito de control ha sido probado con una resistencia NTC 100K 3950 y una resistencia de calor de 12V
+ El circuito cuenta con un led que se enciende cuando la salida de **A3** es 0 (logico) y se apaga cuando la salida es 1 (logico), esto quiere decir que el MOSFET se activa con un 0 y se desactiva con un 1.
+ El esquematico del circuito se encuentra en [EasyEDA](https://easyeda.com/michael801898/module_temp_control_cap_copy)
