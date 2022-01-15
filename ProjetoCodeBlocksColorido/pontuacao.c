#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <stdbool.h>
#include<conio.h>
#include "gotoxy.h"
#include "menu.h"
#include "animacoes_e_loading.h"
#include "pontuacao.h"
#include "atirar.h"
#include "ranking_e_jogo.h"

#define CIMA 72
#define DIREITA 77
#define ESQUERDA 75
#define ESC 27
#define ESPACO 32
#define Borda 178
#define Projetil 207
#define Tubo 177
int score, balas;
void scoreebalas(){
        gotoxy(7, 2);
        printf("%cSCORE", 184);
        gotoxy(7, 5);
        printf("%cBALAS", Projetil);
        if (score==10){
            gotoxy(9, 3);
            printf("%d", score);
        } else {
            gotoxy(9, 3);
            printf("0%d", score);
        }
        if (balas==10){
            gotoxy(9, 6);
            printf("%d", balas);
        } else {
            gotoxy(9, 6);
            printf("0%d", balas);
        }

}

