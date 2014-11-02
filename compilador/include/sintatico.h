#ifndef __SINTATICO_H_
#define __SINTATICO_H_

#include <stdio.h>
#include "lexico.h"

#define MAX_MAQUINA_NUM MAX_TOKEN_NUM

typedef enum SINTATICO_MAQUINAS {
	SINTATICO_PROGRAMA,
	SINTATICO_SEQUENCIA_DE_COMANDOS,
	SINTATICO_COMANDO,
	SINTATICO_ATRIBUICAO,
	SINTATICO_EXPRESSAO,
	SINTATICO_EXP_ARITIMETICA,
	SINTATICO_EXP_LOGICA,
	SINTATICO_TERMO,
	SINTATICO_LEITURA,
	SINTATICO_IMPRESSAO,
	SINTATICO_DECISAO,
	SINTATICO_COMPARACAO,
	SINTATICO_LACO
} SINTATICO_MAQUINAS;

unsigned char sintatico(struct token tokens[], SINTATICO_MAQUINAS maquinas[MAX_MAQUINA_NUM]);

void print_machine(SINTATICO_MAQUINAS maquina);

#endif // __SINTATICO_H_
