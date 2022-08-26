/*
 * main.c
 *
 *  Created on: Aug 26, 2022
 *      Author: if420_01
 */


#include <stdint.h>

//Definicion de variables

//Variables de 8 bits

unsigned char SiempreUsarCamelCase = 7;
uint8_t diasDeLaSemana = 8;

char MiPrimerCaracter = 'j'; 			//definicion de caracteres
int8_t MiPrimerNumeroNegativo = -12;  	//definicion numero negativo

//Variables de 16 bit

unsigned short diasAnuales = 365;		//definicion 16bits
uint16_t diasAnuales2		   = 378;

//Variables de 32bits

unsigned int x, y, z;
int a = 1, b = 2, c = 3;
unsigned int i; int j; int k;

//Otros tipos de variables

char MiPrimerArreglo[5] = "LINUX";
uint32_t miSegundoArreglo[3] = {12312433,74664234,0};

int main(void){

	// Tamaño de variables en diferentes compiladores
	char edad = 22;

	char sizeChar 		= sizeof(edad);
	char sizeShort 		= sizeof(short);
	char sizeInt 		= sizeof(int);
	char sizeIntLong	= sizeof(long int);
	char sizelonglongInt	= sizeof(long long int);

}
