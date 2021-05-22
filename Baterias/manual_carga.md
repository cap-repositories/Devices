# Manual de carga de las baterias LiPo
## Componentes necesarios
Como se muestra en el [indice](https://github.com/cap-repositories/Devices/blob/main/Baterias/Instrucciones_de_carga-uso_baterias_LiPo.md),
necesitara de los siguientes componentes:

1. Baterias LiPo
2. Placa de carga paralela
3. Adaptador de conectores XT60 a T-Deans
4. Adaptador de T-Deans a plug
5. Cargador de baterias

## Instrucciones
1. Connecte las **baterias al adaptador de conectores XT60 a T-Deans**:

![p1](https://github.com/cap-repositories/Devices/blob/main/Baterias/Imagenes/p1_baterias_adaptador-xt60-TDeans.jpg "baterias a adaptador de carga")

Como la placa de carga que se va a utilizar tiene conectores T-Deans, entonces se necesita utilizar el adaptador mostrado en la imagen, note que el adaptador deja las baterias en paralelo, por esa razon es importante que los cables que se utilicen en los conectores tengan el grosor necesario para soportar la corriente maxima de la aplicación en la que se van a utilizar las baterias o la corriente maxima que pueden entregar las baterias las 2 baterias (en este caso 120A)

2. Conecte las **baterias a la placa de carga paralela**:

![p2](https://github.com/cap-repositories/Devices/blob/main/Baterias/Imagenes/p2_baterias_adaptador-carga.jpg "baterias a placa de carga paralela")

Cada bateria cuentan con 2 puertos: 1 para cargarlas en serie (el conector XT60) y 1 para cargar las celdas de la bateria individualmente (el conector jst de 5 pines), entonces los conectores jst de cada bateria se deben conectar a la placa de carga paralela (en cualquier puerto) y a través del adaptador conectado en el paso anterior se conectan los puertos de carga en serie a la placa de carga.

3. Encienda el cargador de baterias y conecte el **adaptador de T-Deans a plug** al cargador:

![p3](https://github.com/cap-repositories/Devices/blob/main/Baterias/Imagenes/p3_conexion-cargador.jpg "encender cargador de baterias")

4. Conecte la **placa de carga paralela al cargador de baterias**:

Primero se conecta el conector jst de la placa de carga al cargador:

![p4_1](https://github.com/cap-repositories/Devices/blob/main/Baterias/Imagenes/p4_cargador_adatpador-carga_1.jpg "conectar placa de carga paralela a cargador de baterias")

Y luego se conecta el conector T-Deans de la placa de carga al cargador, una vez realizados todos los pasos anteriores, la conexión entre las baterias, placa de carga y cargador debera verse de la siguiente forma:

![p4_2](https://github.com/cap-repositories/Devices/blob/main/Baterias/Imagenes/p4_cargador_adatpador-carga_2.jpg "vista completa de las conexiones para cargar las baterias")

5. Seleccione en el **cargador de baterias**, el programa para las baterias LiPo:

Primera tenga en cuenta las características del cargador baterias **iMAX B6AC**:

![imaxb6ac](https://github.com/cap-repositories/Devices/blob/main/Baterias/Imagenes/descripcion_IMAXB6AC.JPG "descripcion del cargador de baterias imaxb6ac")

![p5](https://github.com/cap-repositories/Devices/blob/main/Baterias/Imagenes/P5_seleccionar_bateria.gif "seleccione el tipo de bateria a cargar")

El cargador de baterias **iMAX B6AC**, tiene un programa exclusivo para cargar baterias LiPo con celdas de 3.3/3.6/3.7V (para configurar el voltaje de las celdas LiPo consulte el [manual](https://github.com/cap-repositories/Devices/blob/main/Baterias/iMAXB6ACmanual.pdf)). Una vez encendido el cargador, lo primero que se debe hacer es seleccionar el programa para cargar las baterios LiPo, para esto presione el boton **Batt. Type** hasta que en la pantalla lcd aparezca **Program Select LiPo BATT**, luego presione **Start** para seleccionar el programa en la pantalla.

6. Seleccione el modo de carga en el programa para las baterias Lipo:

![p6](https://github.com/cap-repositories/Devices/blob/main/Baterias/Imagenes/P6_seleccionar_modo.gif "seleccione el modo de carga en el programa seleccionado")

El cargador cuenta con varios ajustes para: cargar las baterias, balancear, descargar o alistar las baterias para almacenamiento. Presione **Inc.** hasta que en la pantalla lcd aparezca **LiPo Charge**

7. Seleccione la corriente y el voltaje de carga en el programa para las baterias Lipo:

![p7](https://github.com/cap-repositories/Devices/blob/main/Baterias/Imagenes/P7_cambiar_corriente_voltage_tipo.gif "ajuste el voltaje y la corriente de carga")

Para cargar baterias utilizando la placa de carga paralela, se deben ajustar la corriente y el voltaje de acuerdo a las baterias conectadas en la placa de carga.

La corriente se debe colocar como maximo igual a la suma de las corrientes nominales de cada bateria (en este caso son 2 baterias de 3Ah, entonces la corriente se puede ajustar a maximo 6A, por cual en 1h se cargaran ambas baterias), entre menor corriente se coloque más tardara en cargar pero mayor será la vida util de la bateria. Para ajustar la corriente de carga presione **Start** hasta que el valor de corriente en la pantalla lcd comience a parpadear, luego presione **Inc.** para incrementar la corriente o **Dec.** para disminuir la corriente. Una vez ajustada la corriente presione **Start** nuevamente para que el valor de voltaje en la pantalla lcd comience a parpadear y presione **Inc.** o **Dec.** para aumentar o disminuir el voltaje respectivamente, el voltaje se debe ajustar al voltaje que aparece en las baterias conectadas (en este caso es 14.8V)

8. Inicie el programa de carga:

![p8](https://github.com/cap-repositories/Devices/blob/main/Baterias/Imagenes/P8_iniciar_carga.gif "comience la carga de las baterias")

Para iniciar a cargar las baterias presione el boton **Start** durante 3 segundos, en la pantalla lcd del cargador aparecera un mensaje indicando que se esta verificando las baterias conectadas, luego debera presionar **Start** nuevamente para iniciar a cargar las baterias, la pantalla lcd cambiara nuevamente y mostrara el tiempo que ha transcurrido desde que inicio a cargar junto con otros parametros.

**ADVERTENCIA**: debe estar pendiente de que el proceso de carga esta bien para evitar accidentes, si el cargador encuentra algún problema sonara una alarma, pero por seguridad revise periodamente la pantalla lcd del cargador para saber el estado.

El proceso de carga debera detenerse automaticamente una vez las baterias estén cargadas y para detener el proceso presione **Batt. Type**.
