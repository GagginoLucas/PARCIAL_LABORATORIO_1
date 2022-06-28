/*
 * Controller.h
 *
 *  Created on: 28 jun. 2022
 *      Author: gaggi
 */

#ifndef CONTROLLER_H_
#define CONTROLLER_H_
#include "../inc/LinkedList.h"
#include "Parser.h"
#include "utn.h"

int Controller_loadFile(LinkedList* eComputer);
int controller_listComputers(LinkedList* Computer);
#endif /* CONTROLLER_H_ */
