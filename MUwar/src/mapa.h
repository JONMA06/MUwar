#ifndef MAPA_H
#define MAPA_H

#include "baldosa.h"

typedef struct
{
	Baldosa* mapa;				/* 1D-n errepresentatutako matrizea */
	int tamaina_x;
	int tamaina_y;
} Mapa;

/* Mapa estruktura bat sortzen du, eta errorean NULL bueltatuko du */
Mapa* mapa_sortu(TerrenoMotak mapa[], int tamaina_x, int tamaina_y);

/* Mapa borratu eta punteroa NULL bezala utziko du */
void mapa_borratu(Mapa** mapa);

/* Sartzen zaion posizioko baldosa bueltatuko du */
Baldosa* mapa_lortu_pos(Mapa* mapa, int x, int y);

#endif // !MAPA_H
