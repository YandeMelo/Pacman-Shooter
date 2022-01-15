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

int fmd;
int x = 90;
int y = 37;
int score=0;
int balas=10;
int direcao=1; //iniciar com o pacman para cima


int main (){

    fmd=49;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
    printf("\t         | Feito por: Lucas Figueiredo, Lucas Romero, Yan Monteiro / Game: PacMan Shooter |\n");
    printf("\t         ----------------------------------------------------------------------------------\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    printf("\n\n\n");
    abre_arquivo();
    layout();
    menu();

return 0;
}
