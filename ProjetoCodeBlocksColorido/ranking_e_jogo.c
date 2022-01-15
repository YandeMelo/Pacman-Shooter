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
int score;
void jogo(){
    system("MODE con: cols=181 lines=42");
    score=0;
    pacman();
    while(1){
        movtirofant();
    }


}
typedef struct{
    char nome[25];
    int pontos;
}ranking;

ranking rank;

FILE *lista;

void abre_arquivo(){//Abre o arquivo
	lista=fopen("ranking.txt","a+b");

}



void salvarnotxt(){

    gets(rank.nome);
    rank.pontos=score;

    fprintf(lista, "%s     %d", rank.nome, rank.pontos);

}

void mostrar_ranking(){
    char voltar;
    int j=1;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
    printf("\n\n\n\n\n\t\t\t\t\t##########################################");
	printf("\n\t\t\t\t\t#   LUGAR    #      NOME     #   SCORE   #");
	printf("\n\t\t\t\t\t##########################################");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	rewind(lista);//Move o cursor para o inicio do arquivo

	do{
        if (j==10){
        printf("\n\t\t\t\t\t|    %do     |%-15s|%-11d|",j,rank.nome,rank.pontos);
        break;
    }else{
		fscanf(lista, "%s     %d", &rank.nome, &rank.pontos);
        printf("\n\t\t\t\t\t|    %do      |%-15s|%-11d|",j,rank.nome,rank.pontos);
        j++;
    }
	}while((feof(lista)==0) && j<11);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    printf("\n\t\t\t\t\t|____________|_______________|___________|\n\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    printf("\t\t\t\t\t    Pressione ESC para voltar ao menu.");

    voltar = getch();
    if (voltar==ESC){
        system("cls");
        printf("\t         | Feito por: Lucas Figueiredo, Lucas Romero, Yan Monteiro / Game: PacMan Shooter |\n");
        printf("\t         ----------------------------------------------------------------------------------\n");
        printf("\n\n\n");
        layout();
        menu();
    } else {
        system("cls");
        mostrar_ranking();
    }

}

int dados(int i){

    printf("\n|%do COLOCADO |%-15s|%-11d|",i,rank.nome,rank.pontos);
}

