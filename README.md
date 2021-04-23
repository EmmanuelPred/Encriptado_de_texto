# Encriptado-de-texto-
Proyecto en lenguaje c basado en la encriptación de texto

Autor: Emmanuel Martí­nez Guerrero

En este archivo se otorgan algunas instrucciones y consideraciones para el uso del programa.



									*****Instrucciones****

1) Abrir la terminal e ingresar a la carpeta donde se tiene contenido el archivo proyecto.

2) Correr el programa: .c dentro de la terminal

3) Aparecerá el menú de inicio del programa, y dependiendo de lo que se quiera realizar (encriptar o desencriptar) el usuario debe seleccionar una la acción. 

	El usuario puede hacer una prueba de encriptado con los archivos fuente.txt y fuente2.txt que se incluyen por defecto o crear su propio archivo (ver consideración 3).


4) Una vez seleccionada una acción el programa le guiara para poder finalizar la acción.

5) En el caso de encriptar: terminada la acción notara que regresó al menu principal, y el usuario determinará si sigue en el programa o sale de el. Los archivos que genere el usuario quedaran almacenados en la carpeta donde esta contenido el programa.

6) En el caso de desencriptar: El usuario notará al terminar la acción que sale a pantalla el texto desencriptado y solo se le da la opción de poder salir al menú principal. En este caso el archivo desencriptado no se almacena en ninguna parte (de hecho no se crea).


									*****CONSIDERACIONES******

1) los archivos de texto (.txt) a encriptar o desencriptar deberán estar almacenados en la carpeta donde esta contenido el programa.

2) En cuanto al número clave de encriptado y desencriptado de un archivo, se recomienda que solo el emisor el receptor sean quienes lo sepan.

3) El programa ha sido probado en principalmente con textos en ingles y no muy largos (Aproximadamente como los dos archivos fuente que vienen por defecto en la carpeta), Se ha observado sin embargo que en algunos textos desencriptados no se visualiza completamente el texto, esto se puede deber en parte al origen de la fuente (por ejemplo si se copio y pego desde una pagina web) o la configuración de las codificaciones de texto que tenga el editor de texto del usuario ( Por ejemplo: Unicode(UTF-16), Occidental(ISO latino 1), Unicode(UTF-8), etc.).
