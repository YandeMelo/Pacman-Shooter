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
int x, balas, score, direcao, fmd, x, y;

void atirarpracima(int a){
    gotoxy(x+4, a);
    printf("%c", Projetil);
}
void atirarparaoslados(int g, int q){
    gotoxy(g, q);
    printf("%c", Projetil);
}
void apagartiroproslados(int g, int q){
    gotoxy(g, q);
    printf("  ");
}
void apagartiropracima(int a){
    gotoxy(x+4, a);
    printf(" ");
}
void movtirofant(){
    int g, q, cor;
    int xf = 20;
    int yf = 20;
    int a = 36;
    int escolherparabola;
    char ch;
    if(balas==0){
                    while(1){
                    gotoxy(87, 20);
                    printf("FIM DE JOGO!");
                    gotoxy(87, 21);
                    printf(" Seu score: ");
                    if(score==10){
                        gotoxy(87, 22);
                        printf("     %d     ", score);
                    } else {
                        gotoxy(87, 22);
                        printf("     0%d     ", score);
                    }
                    gotoxy(84, 23);
                    printf(" Digite seu nome: ");
                    gotoxy(91, 24);
                    salvarnotxt();
                    gotoxy(83, 25);
                    printf(" Obrigado por jogar! ");
                    sleep(1);

                        balas=10;
                        system("cls");
                        system("MODE con: cols=120 lines=30");
                        printf("\t         | Feito por: Lucas Figueiredo, Lucas Romero, Yan Monteiro / Game: PacMan Shooter |\n");
                        printf("\t         ----------------------------------------------------------------------------------\n");
                        printf("\n\n\n");
                        layout();
                        layoutmenu();
                        menu();

                    }
                    }
    bordasmapa();
    scoreebalas();
    if (direcao==1){           //voltar na forma depois que atira
        pacman();
        printarbordaapagada();
    } else if (direcao==2){
        pacmane();
        printarbordaapagada();
    } else if (direcao==3){
        pacmand();
        printarbordaapagada();
    }

    bool repeat = true;
        srand(time(NULL));
        escolherparabola = ((rand() % 3)+1);

    while (repeat){
        if(xf<170){

        if (escolherparabola == 1){
            yf=((0.0016)*(xf*xf)-(0.23*xf)+ 15.6); // PARÁBOLA
        } else if (escolherparabola == 2){
            yf=(-(0.0015)*(xf*xf)+(0.23*xf)+ 13.5); // PARÁBOLA INVERTIDA
        } else if(escolherparabola == 3){
            yf=((0.0011)*(xf*xf)-(0.23*xf)+ 21.5); // PARÁBOLA
        }
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), cor);
        fantasma(xf, yf);           //printar fantasma
        if (fmd==49){
        usleep(15000);
        } else if (fmd==50){
        usleep(5000);
        } else if (fmd==51){
        usleep(1);
        } else if (fmd==52){

        }
        cor++;
        if (cor==15){
            cor=1;
        }
        apagarfantasma(xf, yf);
        xf++;} else {
            break;                  //caso o fantasma chegue na "parede", conta 1 ciclo dos 10
        }

        if (kbhit()){
            fantasma(xf, yf);
            char ch = getch();
            switch (ch){            //movimento do pacman (a,A,d,D,w,W e setas < >)
                case 'A':
                if (x==2){          //evitar passar da borda
                    x=x+4;
                }
                x=x-4;
                limparpacman();
                printarbordaapagada();
                pacmane();
                printarbordaapagada();
                direcao = 2;        //para que lado vai atirar (1 = para cima, 2 = esquerda, 3 = direita)
                break;

                case 'a':
                if (x==2){          //evitar passar da borda
                    x=x+4;
                }
                x=x-4;
                limparpacman();
                printarbordaapagada();
                pacmane();
                printarbordaapagada();
                direcao = 2;        //para que lado vai atirar (1 = para cima, 2 = esquerda, 3 = direita)
                break;

                case ESQUERDA:
                if (x==2){          //evitar passar da borda
                    x=x+4;
                }
                x=x-4;
                limparpacman();
                printarbordaapagada();
                pacmane();
                printarbordaapagada();
                direcao = 2;        //para que lado vai atirar (1 = para cima, 2 = esquerda, 3 = direita)
                break;

                case DIREITA:
                if (x==170){        //evitar passar da borda
                    x=x-4;}
                x=x+4;
                limparpacman();
                printarbordaapagada();
                pacmand();
                printarbordaapagada();
                direcao = 3;        //para que lado vai atirar (1 = para cima, 2 = esquerda, 3 = direita)
                break;

                case 'D':
                if (x==170){        //evitar passar da borda
                    x=x-4;}
                x=x+4;
                limparpacman();
                printarbordaapagada();
                pacmand();
                printarbordaapagada();
                direcao = 3;
                break;

                case 'd':
                if (x==170){        //evitar passar da borda
                    x=x-4;}
                x=x+4;
                limparpacman();
                printarbordaapagada();
                pacmand();
                printarbordaapagada();
                direcao = 3;        //para que lado vai atirar (1 = para cima, 2 = esquerda, 3 = direita)
                break;

                case CIMA:
                limparpacman();
                printarbordaapagada();
                pacman();
                printarbordaapagada();
                direcao = 1;        //para que lado vai atirar (1 = para cima, 2 = esquerda, 3 = direita)
                break;

                case 'w':
                limparpacman();
                printarbordaapagada();
                pacman();
                printarbordaapagada();
                direcao = 1;        //para que lado vai atirar (1 = para cima, 2 = esquerda, 3 = direita)
                break;

                case 'W':
                limparpacman();
                printarbordaapagada();
                pacman();
                printarbordaapagada();
                direcao = 1;         //para que lado vai atirar (1 = para cima, 2 = esquerda, 3 = direita)
                break;

                case ESPACO:
                    if(balas==0){

                    }else{
                    balas--;
                    scoreebalas();
                    if(direcao==1){                     //Atirar para cima
                    while(a!=4){
                    atirarpracima(a);
                    usleep(40000);
                    apagartiropracima(a);
                    a=a-2;
                    if (x>0 && x<18 && a<=16){
                        break;
                    }

                    if (x>=xf-4 && x<xf+6 && a<=yf+1 && a>=yf ){   //acertar o fantasma
                    morto(xf, yf);
                    score++;
                    repeat = false;             //contar mais 1 ciclo nos 10 ciclos
                    break;
                    }}}
                    if(direcao==2){           //atirar para a esquerda
                        g=x+2;
                        q=y+1;
                        while (q!=4){
                        atirarparaoslados(g, q);
                        usleep(25000);
                        apagartiroproslados(g, q);
                        if (g<=2 || g>0 && g<21 && q<=17){                //evitar bater na parede
                            break;
                        }

                        q--;
                        g=g-2;
                        if (g>=xf-8 && g<xf+7 && q==yf ){   //acertar o fantasma
                        morto(xf, yf);
                        score++;
                        repeat = false;         //contar mais 1 ciclo nos 10 ciclos
                        break;
                        }}
                    }
                    if (direcao==3){      //atirar para a direita
                        g=x+6;
                        q=y+1;
                        while (q!=4){
                        atirarparaoslados(g, q);
                        usleep(25000);
                        apagartiroproslados(g, q);
                        if (g>=176){            //evitar bater na parede
                            break;
                        }
                        q--;
                        g=g+2;
                        if (g>=xf-4 && g<xf+14 && q==yf ){   //acertar o fantasma
                        morto(xf, yf);
                        score++;
                        repeat = false;         //contar mais 1 ciclo nos 10 ciclos
                        break;
                        }}
                    }
                    }
        break;

                case ESC:               // Esc para sair

                    exit(0);
                    break;
    }
            a = 36;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        }
    }
}
