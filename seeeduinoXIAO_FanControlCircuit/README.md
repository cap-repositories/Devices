# Circuito de control de ventilador usando el Seeeduino XIAO

## Descripción
El circuito esta diseñado basado en el [Seeeduino XIAO](https://wiki.seeedstudio.com/Seeeduino-XIAO/), que se utiliza para controlar un ventilador de 4 pines y que además cuenta con una entrada para conectar un sensor de distancia infrarojo.

## Conexiones
![imagen de conexiones](https://github.com/cap-repositories/Devices/blob/main/seeeduinoXIAO_FanControlCircuit/imagenes/utilizacion_XIAOFanControl.png)

## Programación del Seeeduino XIAO
+ Utilice la entrada analogica **A1** para leer los valores de voltaje del salida del sensor de distancia infraroja
+ Utilice la salida analogica **A2** para controlar la entrada PWM del ventilador
+ Utilice la entrada analogica **A3** para leer los valores de voltaje de salida del tacometro del ventilador

## Notas
+ El circuito de control ha sido probado con el sensor de distancia infrarojo **GP2Y0A41SK0F** y con el ventilador de 4 pines **AVC DB04028B12U**
+ La salida de 5V del circuito se obtiene a través del Seeeduino. Se debe tener en cuenta que los 5V que entrega el Seeeduino, son a través del puerto USB-C, por lo cual no se especifica cual es la corriente maxima que se puede obtener de este puerto.
+ El Seeeduino no es capaz de soportar señales de entrada de más de 3.6V.
+ La salida PWM donde se conecta la entrada PWM del ventilador, es a 5V.
+ El esquematico del circuito se encuentra en [EasyEDA](https://easyeda.com/michael801898/module_temp_control_cap_copy_copy)
