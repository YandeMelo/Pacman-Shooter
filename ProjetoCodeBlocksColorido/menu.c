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
void layout(){
    gotoxy(21, 5); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    printf("//////////////////////////////////////////////////////////////////////////\n");
    gotoxy(23, 6); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    printf(" . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .\n");
    gotoxy(23, 7);
    printf("  ===== . . ====. . . ===== . . . . ||\\    /|| . .   ====    ||\\   || \n");
    gotoxy(23, 8);
    printf(" ||   || .||    ||. .||     . . ==. || \\  / || . . ||    ||  || \\  || \n");
    gotoxy(23, 9);
    printf(" ||==== . ||====|| . ||     . . ==  ||  \\/  || . . ||====||  ||  \\ || \n");
    gotoxy(23, 10);
    printf(" || . . . ||    || .  ===== . . . . ||      || . . ||    ||  ||   \\|| \n");
    gotoxy(23, 11);
    printf("  . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .\n");
    gotoxy(23, 12);
    printf("  . . . . . . .                                  . . . . . . . . . . .\n");
    gotoxy(23, 13);
    printf("  . . . . . .                 . . . . . . . . . . . . . . . . . . . . .\n");
    gotoxy(23, 14);
    printf(" . . . . . . . . . . .   . . . . . . . . . . . . . . . . . . . . . . .\n");
    gotoxy(21, 15); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    printf("//////////////////////////////////////////////////////////////////////////\n");
    gotoxy(21, 16); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
    printf("Versao 1.0 - JOGO CONTRAINDICADO EM CASO DE EPILEPSIA\n\n");
    gotoxy(97, 18); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    printf(" *******  \n");
    gotoxy(97, 19);
    printf("*  **  **  \n");
    gotoxy(97, 20);
    printf("*********   \n"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    for (int i = 6; i < 15; i++){
        gotoxy(21, i);
        printf("//");
        gotoxy(93, i);
        printf("//");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    gotoxy(39, 12);
    printf("____)==(______,_ _ _ _ _  SHOOTER");
    gotoxy(39, 13);
    printf("/__.-^-|_|''`");
    gotoxy(45, 14);
    printf("|_|");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}
void layoutmenu(){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    gotoxy(14, 22);
    printf("*******\n");
    gotoxy(13, 23);
    printf("**  **  *\n");
    gotoxy(13, 24);
    printf("*********\n");
    gotoxy(13, 25);
    printf("*********\n");
    gotoxy(13, 26);
    printf("** ** **\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);

    gotoxy(43, 21);
    printf("*******");
    gotoxy(40, 22);
    printf(" ***********     ");
    gotoxy(40, 23);
    printf("********  ***    ");
    gotoxy(40, 24);
    printf("********  ***    ");
    gotoxy(40, 25);
    printf("*************    ");
    gotoxy(41, 26);
    printf("***********     ");
    gotoxy(43, 27);
    printf("*******");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(97, 21);
    printf("*********\n");
    gotoxy(98, 22);
    printf("** ** **\n"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

    gotoxy(57, 21); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
    printf("____________________");
    gotoxy(57, 22);
    printf("| ");
    gotoxy(57, 23);
    printf("| ");
    gotoxy(57, 24);
    printf("| ");
    gotoxy(57, 25);
    printf("| ");
    gotoxy(57, 26);
    printf("| ");
    gotoxy(59, 22); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
    printf("Escolha uma opcao:");
    gotoxy(59, 23);
    printf("1 - ");
    gotoxy(59, 24);
    printf("2 - ");
    gotoxy(59, 25);
    printf("3 - ");
    gotoxy(59, 26);
    printf("4 - ");
    gotoxy(63, 23); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    printf("Jogar\t\t \n");
    gotoxy(63, 24);
    printf("Ranking\t\t \n");
    gotoxy(63, 25);
    printf("Configuracoes\t\t \n");
    gotoxy(63, 26);
    printf("Sair\t\t \n"); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);


}
void printconfigs (){
    gotoxy(14, 22); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    gotoxy(14, 22);
    printf("*******  \n");
    gotoxy(13, 23);
    printf("**  **  * \n");
    gotoxy(13, 24);
    printf("********* \n");
    gotoxy(13, 25);
    printf("********* \n");
    gotoxy(13, 26);
    printf("** ** **  \n");
    gotoxy(14, 22); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

    gotoxy(21, 5); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    gotoxy(45, 21);
    printf("*********             \n");
    gotoxy(43, 22);
    printf("***  ****  ____________________________             \n");
    gotoxy(42, 23);
    printf("****  **    ________Dificuldade:________     \n");
    gotoxy(42, 24);
    printf("*******              1 - Facil                   \n");
    gotoxy(42, 25);
    printf("********             2 - Medio                           \n");
    gotoxy(43, 26);
    printf("*********           3 - Dificil                       \n");
    gotoxy(45, 27);
    printf("*********         4 - Impossivel                              \n");  //alvo se move extremamente rapido

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(97, 21);
    printf("*********\n");
    gotoxy(98, 22);
    printf("** ** **\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}
void muda1 (){
    gotoxy(14, 22); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    gotoxy(14, 22);
    printf("*******  \n");
    gotoxy(13, 23);
    printf("**  **  * \n");
    gotoxy(13, 24);
    printf("********* \n");
    gotoxy(13, 25);
    printf("********* \n");
    gotoxy(13, 26);
    printf("** ** **  \n");
    gotoxy(14, 22); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);

    gotoxy(45, 21);
    printf("*********             \n");
    gotoxy(43, 22);
    printf("***  ****               \n");
    gotoxy(42, 23);
    printf("****  **   ____________________________             \n");
    gotoxy(42, 24);
    printf("*******    Tem certeza que deseja sair?                  \n");
    gotoxy(42, 25);
    printf("********               S/N                            \n");
    gotoxy(43, 26);
    printf("*********                                          \n");
    gotoxy(45, 27);
    printf("*********                                         \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(97, 21);
    printf("*********\n");
    gotoxy(98, 22);
    printf("** ** **\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}
void muda2(){
    gotoxy(14, 22); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    gotoxy(14, 22);
    printf("*******  \n");
    gotoxy(13, 23);
    printf("**  **  * \n");
    gotoxy(13, 24);
    printf("********* \n");
    gotoxy(13, 25);
    printf("********* \n");
    gotoxy(13, 26);
    printf("** ** **  \n");
    gotoxy(14, 22); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);

    gotoxy(57, 18);
    printf("*******                   \n");
    gotoxy(55, 19);
    printf("***********                 \n");
    gotoxy(54, 20);
    printf("***  ***  ***                \n");
    gotoxy(54, 21);
    printf("*************                \n");
    gotoxy(54, 22);
    printf("*  *******  *                \n");
    gotoxy(55, 23);
    printf("**       **                 \n");
    gotoxy(57, 24);
    printf("*******                   \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
    gotoxy(21, 25);
    printf("\n\t\t\t\t\t  |* Obrigado por jogar o nosso jogo! *| \n\n\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(97, 21);
    printf("*********\n");
    gotoxy(98, 22);
    printf("** ** **\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}
void digitarnome(){
    gotoxy(14, 22); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    gotoxy(14, 22);
    printf("*******  \n");
    gotoxy(13, 23);
    printf("**  **  * \n");
    gotoxy(13, 24);
    printf("********* \n");
    gotoxy(13, 25);
    printf("********* \n");
    gotoxy(13, 26);
    printf("** ** **  \n");
    gotoxy(14, 22); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);

    gotoxy(45, 21);
    printf("*********             \n");
    gotoxy(43, 22);
    printf("***  ****               \n");
    gotoxy(42, 23);
    printf("****  **   ____________________________             \n");
    gotoxy(42, 24);
    printf("*******          Digite seu nome:                   \n");
    gotoxy(42, 25);
    printf("********                                            \n");
    gotoxy(43, 26);
    printf("*********                                           \n");
    gotoxy(45, 27);
    printf("*********                                           \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(97, 21);
    printf("*********\n");
    gotoxy(98, 22);
    printf("** ** **\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}

void ini(){
    gotoxy(14, 22); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    gotoxy(14, 22);
    printf("*******  \n");
    gotoxy(13, 23);
    printf("**  **  * \n");
    gotoxy(13, 24);
    printf("********* \n");
    gotoxy(13, 25);
    printf("********* \n");
    gotoxy(13, 26);
    printf("** ** **  \n");
    gotoxy(14, 22); SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);

    gotoxy(46, 21);
    printf("*********             \n");
    gotoxy(44, 22);
    printf("***  ****               \n");
    gotoxy(43, 23);
    printf("****  **    ______________________                  \n");
    gotoxy(43, 24);
    printf("*******     Deseja iniciar o jogo?                 \n");
    gotoxy(43, 25);
    printf("********             S/N                            \n");
    gotoxy(44, 26);
    printf("*********                                          \n");
    gotoxy(46, 27);
    printf("*********                                         \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(97, 21);
    printf("*********\n");
    gotoxy(98, 22);
    printf("** ** **\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}

void tutorial(){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
    gotoxy(20, 2);
    printf("#################################################################################");
    gotoxy(20, 14);
    printf("#################################################################################");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    gotoxy(26, 4);
    printf("*****    *   *    *****    *****      ****    *****    *****    *                 ");
    gotoxy(26, 5);
    printf("  *      *   *      *     *     *    *    *     *     *     *   *                 ");
    gotoxy(26, 6);
    printf("  *      *   *      *     *     *    *****      *     *******   *                 ");
    gotoxy(26, 7);
    printf("  *      *   *      *     *     *    *  *       *     *     *   *                 ");
    gotoxy(26, 8);
    printf("  *      *****      *      *****     *    *   *****   *     *   *****             ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    gotoxy(44, 10);
    printf("--");
    gotoxy(44, 11);
    printf("--");
    gotoxy(44, 12);
    printf("--");
    gotoxy(47, 10);
    printf("Movimentacao: W A D / SETAS");
    gotoxy(47, 11);
    printf("Atirar: ESPACO");
    gotoxy(47, 12);
    printf("Sair: ESC");
    for (int i = 3; i < 14; i++){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
        gotoxy(20, i);
        printf("||");
        gotoxy(99, i);
        printf("||");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    }


}
void final(){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    gotoxy(14, 22);
    printf("*******  \n");
    gotoxy(13, 23);
    printf("**  **  * \n");
    gotoxy(13, 24);
    printf("********* \n");
    gotoxy(13, 25);
    printf("********* \n");
    gotoxy(13, 26);
    printf("** ** **  \n");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    gotoxy(57, 18);
    printf("*******                   \n");
    gotoxy(55, 19);
    printf("***********                 \n");
    gotoxy(54, 20);
    printf("***  ***  ***                \n");
    gotoxy(54, 21);
    printf("*************                \n");
    gotoxy(54, 22);
    printf("*  *******  *                \n");
    gotoxy(55, 23);
    printf("**       **                 \n");
    gotoxy(57, 24);
    printf("*******                   \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}
void loading(){
    tutorial();
    anda1();
    Sleep(250);
    apagarpacman();
    tutorial();
    come1();
    Sleep(250);
    apagarpacman();
    tutorial();
    anda2();
    Sleep(250);
    apagarpacman();
    tutorial();
    come2();
    Sleep(250);
    apagarpacman();
    tutorial();
    anda3();
    Sleep(250);
    apagarpacman();
    tutorial();
    come3();
    Sleep(250);
    apagarpacman();
    tutorial();
    anda4();
    Sleep(250);
    apagarpacman();
    tutorial();
    come4();
    Sleep(250);
    apagarpacman();
    tutorial();
    anda5();
    Sleep(250);
    apagarpacman();
    tutorial();
    come5();
    Sleep(250);
    apagarpacman();
    tutorial();
    anda6();
    Sleep(250);
    apagarpacman();
    tutorial();
    come6();
    Sleep(250);
    apagarpacman();
    tutorial();
    anda7();
    Sleep(250);
    apagarpacman();
    tutorial();
    come7();
    Sleep(250);
    apagarpacman();
    tutorial();
    anda8();
    Sleep(250);
    apagarpacman();
    tutorial();
    come8();
    Sleep(250);
    apagarpacman();
    tutorial();
    come8();
}
void teladepontuacao(){
    system("cls");
    mostrar_ranking();
}
void menu(){

    char opcao=0;

    layoutmenu();

    gotoxy(59, 27);
    opcao = getch();
    printf("\n");

    switch (opcao){
    case '1':
        confirmarjogar();
        break;
    case '2':
        teladepontuacao();
        break;
    case '3':
        configs();
        break;
    case '4':
        confirmarsaida();
        exit(0);
        break;
    default:
        printf("\n\t\t\t\t\t  Opcao invalida, tente novamente! ");
        sleep(1);
        system("cls");
        main();
        break;
    }

}
void confirmarjogar (){

    char resposta;
    system("cls");
    printf("\t         | Feito por: Lucas Figueiredo, Lucas Romero, Yan Monteiro / Game: PacMan Shooter |\n");
    printf("\t         ----------------------------------------------------------------------------------\n");
    printf("\n\n\n");
    layout();
    ini();
    gotoxy(63, 26);
    resposta = getch();
    switch (resposta){
    case 's':
        system("cls");
        loading();
        system("cls");
        jogo();
        break;
    case 'S':
        system("cls");
        loading();
        system("cls");
        jogo();
    case 'n':
        system("cls");
        main();
        printf("\n\t\t\t\t\t\t\n");
        break;
    case 'N':
        system("cls");
        main();
        printf("\n\t\t\t\t\t\t\n");
        break;
    default:
        printf("\n\n\n\t\t\t\t\t     Opcao invalida, tente novamente! ");
        sleep(1);
        confirmarjogar();
        break;
    }
}
void confirmarsaida (){

    char resposta;
    system("cls");
    printf("\t         | Feito por: Lucas Figueiredo, Lucas Romero, Yan Monteiro / Game: PacMan Shooter |\n");
    printf("\t         ----------------------------------------------------------------------------------\n");
    printf("\n\n\n");
    layout();
    muda1();
    gotoxy(65, 26);
    resposta = getch();
    switch (resposta){
    case 's':
        system("cls");
        printf("\t         | Feito por: Lucas Figueiredo, Lucas Romero, Yan Monteiro / Game: PacMan Shooter |\n");
        printf("\t         ----------------------------------------------------------------------------------\n");
        printf("\n\n\n");
        layout();
        muda2();
        sleep(1);
        break;
    case 'S':
        system("cls");
        printf("\t         | Feito por: Lucas Figueiredo, Lucas Romero, Yan Monteiro / Game: PacMan Shooter |\n");
        printf("\t         ----------------------------------------------------------------------------------\n");
        printf("\n\n\n");
        layout();
        muda2();
        sleep(1);
    case 'n':
        system("cls");
        main();
        printf("\n\t\t\t\t\t\t\n");
        break;
    case 'N':
        system("cls");
        main();
        printf("\n\t\t\t\t\t\t\n");
        break;
    default:
        printf("\n\n\n\t\t\t\t\t     Opcao invalida, tente novamente! ");
        sleep(1);
        confirmarjogar();
        break;
    }

}
void configs(){

    system("cls");
    printf("\t         | Feito por: Lucas Figueiredo, Lucas Romero, Yan Monteiro / Game: PacMan Shooter |\n");
    printf("\t         ----------------------------------------------------------------------------------\n");
    printf("\n\n\n");
    layout();
    printconfigs();
    fmd = getch();
    if (fmd==49){
    system("cls");
    printf("\t         | Feito por: Lucas Figueiredo, Lucas Romero, Yan Monteiro / Game: PacMan Shooter |\n");
    printf("\t         ----------------------------------------------------------------------------------\n");
    printf("\n\n\n");
    layout();
    menu();
    } else if (fmd==50){
    system("cls");
    printf("\t         | Feito por: Lucas Figueiredo, Lucas Romero, Yan Monteiro / Game: PacMan Shooter |\n");
    printf("\t         ----------------------------------------------------------------------------------\n");
    printf("\n\n\n");
    layout();
    menu();
    } else if (fmd==51){
    system("cls");
    printf("\t         | Feito por: Lucas Figueiredo, Lucas Romero, Yan Monteiro / Game: PacMan Shooter |\n");
    printf("\t         ----------------------------------------------------------------------------------\n");
    printf("\n\n\n");
    layout();
    menu();
    } else if (fmd==52){
    system("cls");
    printf("\t         | Feito por: Lucas Figueiredo, Lucas Romero, Yan Monteiro / Game: PacMan Shooter |\n");
    printf("\t         ----------------------------------------------------------------------------------\n");
    printf("\n\n\n");
    layout();
    menu();
    } else {
        gotoxy(40,29);
        printf("     Por favor, selecione a dificuldade.");
        Sleep(1000);
        configs();
    }
}
