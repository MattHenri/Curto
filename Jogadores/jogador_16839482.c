#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../baralho.h"
#include "../mao.h"

static int meu_id = 0;
static int total_jogadores = 0;
static int num_cartas = 0;
static Carta minha_mao[6];

const char* nome_jogador_16839482() {
    return "Mateus Henrique";
}

void iniciar_jogador_16839482(int meu_id, int total_jogadores) {
    id = meu_id;
    num_jogadores = total_jogadores;
}

void nova_rodada_jogador_16839482(int rodada, Carta carta_virada, Valor manilha, int n_cartas, Carta* minha_mao) {
    num_cartas = n_cartas;
    for (int i = 0; i < n_cartas; i++) {
        mao[i] = minha_mao[i];
    }
    manilha = definir_manilha(carta_virada);
}

int apostar_jogador_16839482(const int* apostas) {
   // aposta aleatória entre 0 e num_cartas
    return rand() % (num_cartas + 1);
}

int jogar_jogador_16839482(const Carta* mesa, int num_na_mesa) {
    // escolhe uma carta aleatória válida
    int idx;
    do {
        idx = rand() % num_cartas;
    } while (minha_mao[idx].valor == -1); // carta já usada

    minha_mao[idx] = (Carta){-1, -1}; // marca como usada
    return idx;
}
