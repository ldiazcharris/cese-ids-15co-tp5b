/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
 */

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef _ALUMNOS_H_
#define _ALUMNOS_H_

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdbool.h>
#include <stddef.h>

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/

/**
 * @brief 
 *Estructura para la creación del tipo de dato alumnos, que básicamente será la 
 *La plantilla sobre la que se introducrián los datos de los alumnos.
*/

typedef struct alumno_s {
    char apellidos[30];
    char nombres[30];
    char documento[11];
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/

/*=====[Prototypes (declarations) of public functions]=======================*/

/**
 * @brief Esta función permite mostrar por consola los datos de un alumno
 * según se requiera.
 * Los parámetros de entrada a esta fucnión son:
 * @param cadena: puntero a variable que almacena tempralmente los datos para ser serializados
 * @param espacio: el tamaño de la cadena
 * @param alumno: la estructura alumno que se desea serializar
 * @return true 
 * @return false 
 */
bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);

/**
 * @brief Esta función permite mostrar por consola los datos de todos los alumnos 
 * según se requiera.
 * Los parámetros de entrada a esta fucnión son: 
 * @param cadena 
 * @param espacio 
 * @return true 
 * @return false 
 */
bool SerializarAlumnos(char * cadena, size_t espacio);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
