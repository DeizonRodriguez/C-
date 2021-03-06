//
// Created by damin on 25/09/18.
//

#ifndef DEIZON_MISFUNCIONES_H
#define DEIZON_MISFUNCIONES_H

typedef float aliasdeTipo;  //-- se define un alias para el tipo de dato del array

void LeeNotas(aliasdeTipo Notas[], unsigned int n);
aliasdeTipo CalcularPromedio(aliasdeTipo Notas[],unsigned int n);
void ImprimirNotasMayoresAlPromedio(aliasdeTipo Notas[],unsigned int n, aliasdeTipo Promedio);
aliasdeTipo HallalaMenorNota(aliasdeTipo Notas[], unsigned int n);
aliasdeTipo PromedioEliminadolaMenorNota(aliasdeTipo Notas[],unsigned int n, aliasdeTipo MenorNota);

#endif //PROMEDIOS_MISFUNCIONES_H


#endif //DEIZON_MISFUNCIONES_H
