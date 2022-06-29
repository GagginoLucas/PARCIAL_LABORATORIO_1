/*
 Desarrollar en ANSI C:
1) Realizar un programa que lea un archivo .csv (cuyo nombre se pasa como parámetro por
línea de comandos), con los datos de equipos de cómputo, guardándolos en un
linkedList de entidades eComputer.
2) Ordenar la lista generada en el ítem anterior, con la función ll_sort, según el criterio
idTipo, de manera ascendente.
3) Imprimir por pantalla los datos de las computadoras. En lugar de idTipo, se deberá
imprimir dependiendo el caso: 1=>DESKTOP; 2=>LAPTOP.
4) Desarrollar la función ll_map en la biblioteca linkedList, la cual recibirá la lista y una
función. La función ll_map ejecutará la función recibida como parámetro por cada ítem
de la lista, de esta manera, incrementará el precio un 10% para todo equipo del tipo
desktop y un 20% para laptop.
5) Generar el archivo de salida mapeado.csv conteniendo la lista del ítem anterior.
Datos:
 eComputer
o id
o descripcion
o precio
o idTipo

NOTAS:
Nota 0: El código deberá tener comentarios con la documentación de cada una de las funciones y respetar las
reglas de estilo de la cátedra.
Nota 1: Se deberá realizar el menú de opciones y las validaciones a través de funciones.
Nota 2: Se deberán utilizar las
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../testing/inc/main_test.h"
#include "../inc/LinkedList.h"
#include "utn.h"
#include "Parser.h"
#include "Controller.h"

int main(void) {


	setbuf(stdout, NULL);

	int optionMenu = 0;
	LinkedList* computerList;
	computerList = ll_newLinkedList();

	while(optionMenu != 5) {

	get_IntInRange(&optionMenu,"Ingrese opcion\n"
				"1. Leer archivo csv\n"
				"2. Ordenar archivo\n"
				"3. Listar\n"
				"4. Funcion ll_map\n"
				"5. Guardar archivo\n"
				"6 . Salir\n",1,5);

	switch(optionMenu){
		case 1: if(Controller_loadFile(computerList) == 1) {

					printf("La lista se cargo correctamente\n");
				}else{
					printf("La lista no se pudo cargar\n");
				}
		break;
		case 2: ll_sort(computerList, eComputer_sortByIdTipo, 1);
		break;
		case 3: controller_listComputers(computerList);
		break;
		case 4: ll_map(computerList, eComputer_sortByllmap);
		break;
	}

	}
    return 0;

}































