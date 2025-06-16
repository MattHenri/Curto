#ifndef JOGADOR_16839482_H
#define JOGADOR_16839482_H

#include "../carta.h"

void iniciar_jogador_16839482(int id, int total);
void nova_rodada_jogador_16839482(int rodada, Carta carta_virada, int n_cartas, Carta* mao);
int apostar_jogador_16839482(const int* apostas);
int jogar_jogador_16839482(const Carta* mesa, int num_na_mesa);
const char* nome_jogador_16839482();

#endif
