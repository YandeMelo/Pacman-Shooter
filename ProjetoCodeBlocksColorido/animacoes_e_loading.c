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
int x,y;
void bordasmapa(){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
    int diagonal = 19;
    for (int ct = 0; ct < 181; ct++){
        gotoxy(ct, 0);
        printf("%c", Borda);
        gotoxy(ct, 41);
        printf("%c", Borda);
    }
    for (int de = 0; de < 41; de++){
        gotoxy(0, de);
        printf("%c", Borda);
        gotoxy(1, de);
        printf("%c", Borda);
        gotoxy(179, de);
        printf("%c", Borda);
        gotoxy(180, de);
        printf("%c", Borda);
        if (de==10 || de==11 || de==12 || de==13 || de==14 || de==15){
            gotoxy(0, de);
            printf("%c", Tubo);
            gotoxy(1, de);
            printf("%c", Tubo);
            for (int i = 0; i < 20; i++){
                gotoxy(i, de);
                printf("%c", Tubo);
            }

        }
    }
    for (int t = 0; t < 20; t++){
        gotoxy(t, 9);
        printf("%c", Borda);
        gotoxy(t, 9);
        printf("%c", Borda);
        gotoxy(t, 9);
        printf("%c", Borda);
        gotoxy(t, 9);
        printf("%c", Borda);
        gotoxy(t, 16);
        printf("%c", Borda);
        gotoxy(t, 16);
        printf("%c", Borda);
        gotoxy(t, 16);
        printf("%c", Borda);
        gotoxy(t, 16);
        printf("%c", Borda);
    }
    gotoxy(9, 11);
    printf("      ");
    gotoxy(8, 12);
    printf("        ");
    gotoxy(8, 13);
    printf("        ");
    gotoxy(8, 14);
    printf("        ");
    gotoxy(10, 12);
    printf("%c", Tubo);
    gotoxy(13, 12);
    printf("%c", Tubo);
    gotoxy(10, 14);
    printf("%c", Tubo);
    gotoxy(13, 14);
    printf("%c", Tubo);

    for(int i=1; i<9; i++){
    gotoxy(18, i);
    printf("%c%C", Borda, Borda);
    gotoxy(4, i);
    printf("%c%c", Tubo, Tubo);
    gotoxy(14, i);
    printf("%c%c", Tubo, Tubo);
    }
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}
void printarbordaapagada(){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
    gotoxy(179, 40);
    printf("%c%c", Borda, Borda);
    gotoxy(179, 39);
    printf("%c%c", Borda, Borda);
    gotoxy(179, 38);
    printf("%c%c", Borda, Borda);
    gotoxy(179, 37);
    printf("%c%c", Borda, Borda);
    gotoxy(179, 36);
    printf("%c%c", Borda, Borda);

    gotoxy(0, 40);
    printf("%c%c", Borda, Borda);
    gotoxy(0, 39);
    printf("%c%c", Borda, Borda);
    gotoxy(0, 38);
    printf("%c%c", Borda, Borda);
    gotoxy(0, 37);
    printf("%c%c", Borda, Borda);
    gotoxy(0, 36);
    printf("%c%c", Borda, Borda);

    gotoxy(0, 41);
    printf("%c%c%c%c%c%c", Borda, Borda, Borda, Borda, Borda, Borda);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}
void apagarpacman(){
    gotoxy(10, 18);
    printf("                                                                                                                                                    \n");
    gotoxy(10, 19);
    printf("                                                                                                                                                    \n");
    gotoxy(10, 20);
    printf("                                                                                                                                                    \n");
    gotoxy(10, 21);
    printf("                                                                                                                                                    \n");
    gotoxy(10, 22);
    printf("                                                                                                                                                    \n");
    gotoxy(10, 23);
    printf("                                                                                                                                                    \n");
    gotoxy(10, 24);
    printf("                                                                                                                                                    \n\n\n");
    gotoxy(10, 27);
    printf("                                                                                                                                                    \n");
}
void come1(){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    gotoxy(17, 19);
    printf(" *******  \n");
    gotoxy(17, 20);
    printf("**  **  * \n");
    gotoxy(17, 21);
    printf("********* \n");
    gotoxy(17, 22);
    printf("********* \n");
    gotoxy(17, 23);
    printf("** ** **  \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    gotoxy(44, 18);
    printf("   *******     __________________    \n");
    gotoxy(44, 19);
    printf(" ***********    scolha uma opcao:    \n");
    gotoxy(44, 20);
    printf("********  ***   - Jogar              \n");
    gotoxy(44, 21);
    printf("********  ***     Ranking            \n");
    gotoxy(44, 22);
    printf("*************   - Configuracoes      \n");
    gotoxy(44, 23);
    printf(" ***********   4- Sair               \n");
    gotoxy(44, 24);
    printf("   *******                                \n\n\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    gotoxy(49, 27);
    printf("||L O A D I N G.  ||                 \n");

}
void come2(){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    gotoxy(21, 19);
    printf(" *******  \n");
    gotoxy(21, 20);
    printf("**  **  * \n");
    gotoxy(21, 21);
    printf("********* \n");
    gotoxy(21, 22);
    printf("********* \n");
    gotoxy(21, 23);
    printf("** ** **  \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    gotoxy(47, 18);
    printf("   *******    ________________    \n");
    gotoxy(47, 19);
    printf(" ***********   olha uma opcao:    \n");
    gotoxy(47, 20);
    printf("********  ***   ogar              \n");
    gotoxy(47, 21);
    printf("********  ***   anking            \n");
    gotoxy(47, 22);
    printf("*************  Configuracoes      \n");
    gotoxy(47, 23);
    printf(" ***********   Sair               \n");
    gotoxy(47, 24);
    printf("   *******               \n\n\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    gotoxy(49, 27);
    printf("||L O A D I N G...||            \n");
}
void come3(){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    gotoxy(25, 19);
    printf(" *******  \n");
    gotoxy(25, 20);
    printf("**  **  * \n");
    gotoxy(25, 21);
    printf("********* \n");
    gotoxy(25, 22);
    printf("********* \n");
    gotoxy(25, 23);
    printf("** ** **  \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    gotoxy(50, 18);
    printf("   *******    _____________    \n");
    gotoxy(50, 19);
    printf(" ***********   a uma opcao:    \n");
    gotoxy(50, 20);
    printf("********  ***  ar              \n");
    gotoxy(50, 21);
    printf("********  ***   ing            \n");
    gotoxy(50, 22);
    printf("*************  figuracoes      \n");
    gotoxy(50, 23);
    printf(" ***********   r               \n");
    gotoxy(50, 24);
    printf("   *******               \n\n\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    gotoxy(49, 27);
    printf("||L O A D I N G.  ||            \n");
}
void come4(){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    gotoxy(29, 19);
    printf(" *******  \n");
    gotoxy(29, 20);
    printf("**  **  * \n");
    gotoxy(29, 21);
    printf("********* \n");
    gotoxy(29, 22);
    printf("********* \n");
    gotoxy(29, 23);
    printf("** ** **  \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    gotoxy(53, 18);
    printf("   *******    __________       \n");
    gotoxy(53, 19);
    printf(" ***********   ma opcao:       \n");
    gotoxy(53, 20);
    printf("********  ***                \n");
    gotoxy(53, 21);
    printf("********  ***  g               \n");
    gotoxy(53, 22);
    printf("*************  uracoes         \n");
    gotoxy(53, 23);
    printf(" ***********                 \n");
    gotoxy(53, 24);
    printf("   *******               \n\n\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    gotoxy(49, 27);
    printf("||L O A D I N G...||            \n");
}
void come5(){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    gotoxy(33, 19);
    printf(" *******  \n");
    gotoxy(33, 20);
    printf("**  **  * \n");
    gotoxy(33, 21);
    printf("********* \n");
    gotoxy(33, 22);
    printf("********* \n");
    gotoxy(33, 23);
    printf("** ** **  \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    gotoxy(56, 18);
    printf("   *******    _______               \n");
    gotoxy(56, 19);
    printf(" ***********   opcao:             \n");
    gotoxy(56, 20);
    printf("********  ***             \n");
    gotoxy(56, 21);
    printf("********  ***      \n");
    gotoxy(56, 22);
    printf("*************   oes            \n");
    gotoxy(56, 23);
    printf(" ***********              \n");
    gotoxy(56, 24);
    printf("   *******               \n\n\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    gotoxy(49, 27);
    printf("||L O A D I N G.  ||            \n");
}
void come6(){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    gotoxy(37, 19);
    printf(" *******  \n");
    gotoxy(37, 20);
    printf("**  **  * \n");
    gotoxy(37, 21);
    printf("********* \n");
    gotoxy(37, 22);
    printf("********* \n");
    gotoxy(37, 23);
    printf("** ** **  \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    gotoxy(59, 18);
    printf("   *******   _____           \n");
    gotoxy(59, 19);
    printf(" ***********  cao:             \n");
    gotoxy(59, 20);
    printf("********  ***             \n");
    gotoxy(59, 21);
    printf("********  ***       \n");
    gotoxy(59, 22);
    printf("************* es         \n");
    gotoxy(59, 23);
    printf(" ***********             \n");
    gotoxy(59, 24);
    printf("   *******               \n\n\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    gotoxy(49, 27);
    printf("||L O A D I N G...||            \n");
}
void come7(){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    gotoxy(41, 19);
    printf(" *******  \n");
    gotoxy(41, 20);
    printf("**  **  * \n");
    gotoxy(41, 21);
    printf("********* \n");
    gotoxy(41, 22);
    printf("********* \n");
    gotoxy(41, 23);
    printf("** ** **  \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    gotoxy(62, 18);
    printf("   *******  ___         \n");
    gotoxy(62, 19);
    printf(" *********** o:         \n");
    gotoxy(62, 20);
    printf("********  ***             \n");
    gotoxy(62, 21);
    printf("********  ***             \n");
    gotoxy(62, 22);
    printf("*************s          \n");
    gotoxy(62, 23);
    printf(" ***********              \n");
    gotoxy(62, 24);
    printf("   *******            \n\n\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    gotoxy(49, 27);
    printf("||L O A D I N G.. ||            \n");
}
void come8(){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    gotoxy(45, 19);
    printf(" *******  \n");
    gotoxy(45, 20);
    printf("**  **  * \n");
    gotoxy(45, 21);
    printf("********* \n");
    gotoxy(45, 22);
    printf("********* \n");
    gotoxy(45, 23);
    printf("** ** **  \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    gotoxy(65, 18);
    printf("   *******           \n");
    gotoxy(65, 19);
    printf(" ***********          \n");
    gotoxy(65, 20);
    printf("********  ***             \n");
    gotoxy(65, 21);
    printf("********  ***             \n");
    gotoxy(65, 22);
    printf("*************          \n");
    gotoxy(65, 23);
    printf(" ***********              \n");
    gotoxy(65, 24);
    printf("   *******            \n\n\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    gotoxy(49, 27);
    printf("||L O A D I N G.. ||            \n");
}

void anda1(){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    gotoxy(15, 19);
    printf(" *******  \n");
    gotoxy(15, 20);
    printf("**  **  * \n");
    gotoxy(15, 21);
    printf("********* \n");
    gotoxy(15, 22);
    printf("********* \n");
    gotoxy(15, 23);
    printf("** ** **  \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    gotoxy(42, 18);
    printf("   **********   ___________________    \n");
    gotoxy(42, 19);
    printf(" ***  ****     | Escolha uma opcao:     \n");
    gotoxy(42, 20);
    printf("****  **       | 1- Jogar               \n");
    gotoxy(42, 21);
    printf("*******        | 2- Ranking             \n");
    gotoxy(42, 22);
    printf("********       | 3- Configuracoes       \n");
    gotoxy(42, 23);
    printf(" *********     | 4- Sair                \n");
    gotoxy(42, 24);
    printf("   **********                           \n\n\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    gotoxy(49, 27);
    printf("||L O A D I N G   ||            \n");
}
void anda2(){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    gotoxy(19, 19);
    printf(" *******  \n");
    gotoxy(19, 20);
    printf("**  **  * \n");
    gotoxy(19, 21);
    printf("********* \n");
    gotoxy(19, 22);
    printf("********* \n");
    gotoxy(19, 23);
    printf("** ** **  \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);

    gotoxy(45, 18);
    printf("   ********** __________________    \n");
    gotoxy(45, 19);
    printf(" ***  ****     scolha uma opcao:    \n");
    gotoxy(45, 20);
    printf("****  **       - Jogar              \n");
    gotoxy(45, 21);
    printf("*******          Ranking            \n");
    gotoxy(45, 22);
    printf("********       - Configuracoes      \n");
    gotoxy(45, 23);
    printf(" *********    4- Sair               \n");
    gotoxy(45, 24);
    printf("   **********                         \n\n\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    gotoxy(49, 27);
    printf("||L O A D I N G.. ||              \n");

}
void anda3(){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    gotoxy(23, 19);
    printf(" *******  \n");
    gotoxy(23, 20);
    printf("**  **  * \n");
    gotoxy(23, 21);
    printf("********* \n");
    gotoxy(23, 22);
    printf("********* \n");
    gotoxy(23, 23);
    printf("** ** **  \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);

    gotoxy(48, 18);
    printf("   **********________________   \n");
    gotoxy(48, 19);
    printf(" ***  ****    olha uma opcao:    \n");
    gotoxy(48, 20);
    printf("****  **       ogar              \n");
    gotoxy(48, 21);
    printf("*******        anking            \n");
    gotoxy(48, 22);
    printf("********      Configuracoes      \n");
    gotoxy(48, 23);
    printf(" *********    Sair               \n");
    gotoxy(48, 24);
    printf("  **********               \n\n\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    gotoxy(49, 27);
    printf("||L O A D I N G   ||            \n");
}
void anda4(){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    gotoxy(27, 19);
    printf(" *******  \n");
    gotoxy(27, 20);
    printf("**  **  * \n");
    gotoxy(27, 21);
    printf("********* \n");
    gotoxy(27, 22);
    printf("********* \n");
    gotoxy(27, 23);
    printf("** ** **  \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);

    gotoxy(51, 18);
    printf("   **********_____________    \n");
    gotoxy(51, 19);
    printf(" ***  ****    a uma opcao:    \n");
    gotoxy(51, 20);
    printf("****  **      ar              \n");
    gotoxy(51, 21);
    printf("*******        ing            \n");
    gotoxy(51, 22);
    printf("********      figuracoes      \n");
    gotoxy(51, 23);
    printf(" *********    r               \n");
    gotoxy(51, 24);
    printf("   **********               \n\n\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    gotoxy(49, 27);
    printf("||L O A D I N G.. ||            \n");
}
void anda5(){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    gotoxy(31, 19);
    printf(" *******  \n");
    gotoxy(31, 20);
    printf("**  **  * \n");
    gotoxy(31, 21);
    printf("********* \n");
    gotoxy(31, 22);
    printf("********* \n");
    gotoxy(31, 23);
    printf("** ** **  \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    gotoxy(54, 18);
    printf("   **********__________    \n");
    gotoxy(54, 19);
    printf(" ***  ****    ma opcao:                \n");
    gotoxy(54, 20);
    printf("****  **                    \n");
    gotoxy(54, 21);
    printf("*******       g     \n");
    gotoxy(54, 22);
    printf("********      uracoes              \n");
    gotoxy(54, 23);
    printf(" *********                 \n");
    gotoxy(54, 24);
    printf("   **********               \n\n\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    gotoxy(49, 27);
    printf("||L O A D I N G   ||            \n");
}
void anda6(){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    gotoxy(35, 19);
    printf(" *******  \n");
    gotoxy(35, 20);
    printf("**  **  * \n");
    gotoxy(35, 21);
    printf("********* \n");
    gotoxy(35, 22);
    printf("********* \n");
    gotoxy(35, 23);
    printf("** ** **  \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    gotoxy(57, 18);
    printf("  ********** _______                                   \n");
    gotoxy(57, 19);
    printf(" ***  ****    opcao:                                \n");
    gotoxy(57, 20);
    printf("****  **                                     \n");
    gotoxy(57, 21);
    printf("*******                                \n");
    gotoxy(57, 22);
    printf("********       oes                                      \n");
    gotoxy(57, 23);
    printf(" *********                 \n");
    gotoxy(57, 24);
    printf("   **********               \n\n\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    gotoxy(49, 27);
    printf("||L O A D I N G.. ||            \n");
}
void anda7(){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    gotoxy(39, 19);
    printf(" *******  \n");
    gotoxy(39, 20);
    printf("**  **  * \n");
    gotoxy(39, 21);
    printf("********* \n");
    gotoxy(39, 22);
    printf("********* \n");
    gotoxy(39, 23);
    printf("** ** **  \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    gotoxy(60, 18);
    printf("   **********____                        \n");
    gotoxy(60, 19);
    printf(" ***  ****   cao:                        \n");
    gotoxy(60, 20);
    printf("****  **                                 \n");
    gotoxy(60, 21);
    printf("*******                                  \n");
    gotoxy(60, 22);
    printf("********     es                         \n");
    gotoxy(60, 23);
    printf(" *********                               \n");
    gotoxy(60, 24);
    printf("   **********                        \n\n\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    gotoxy(49, 27);
    printf("||L O A D I N G.  ||            \n");
}
void anda8(){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    gotoxy(43, 19);
    printf(" *******  \n");
    gotoxy(43, 20);
    printf("**  **  * \n");
    gotoxy(43, 21);
    printf("********* \n");
    gotoxy(43, 22);
    printf("********* \n");
    gotoxy(43, 23);
    printf("** ** **  \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    gotoxy(63, 18);
    printf("   **********_                        \n");
    gotoxy(63, 19);
    printf(" ***  ****  o:                        \n");
    gotoxy(63, 20);
    printf("****  **                                 \n");
    gotoxy(63, 21);
    printf("*******                                  \n");
    gotoxy(63, 22);
    printf("********    s                         \n");
    gotoxy(63, 23);
    printf(" *********                               \n");
    gotoxy(63, 24);
    printf("   **********                        \n\n\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    gotoxy(49, 27);
    printf("||L O A D I N G.  ||            \n");
}
void limparpacman(){
    gotoxy(x-8, y-1);
    printf("                         ");
    gotoxy(x-8, y);
    printf("                         ");
    gotoxy(x-8, y+1);
    printf("                         ");
    gotoxy(x-8, y+2);
    printf("                         ");
    gotoxy(x-8, y+3);
    printf("                         ");
}
void pacman(){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
    gotoxy(x, y);
    printf(" *     *  ");
    gotoxy(x, y+1);
    printf("***   ***  ");
    gotoxy(x, y+2);
    printf("**** ****  ");
    gotoxy(x, y+3);
    printf(" *******  ");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}
void pacmane(){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
    gotoxy(x, y);
    printf("   ****         ");
    gotoxy(x, y+1);
    printf("    ****         ");
    gotoxy(x, y+2);
    printf("********         ");
    gotoxy(x, y+3);
    printf(" ******          ");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}
void pacmand(){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
    gotoxy(x-4, y);
    printf("      ****   ");
    gotoxy(x-4, y+1);
    printf("     *****   ");
    gotoxy(x-4, y+2);
    printf("     ********");
    gotoxy(x-4, y+3);
    printf("      ****** ");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}
void fantasma(int xf, int yf){

    gotoxy(xf, yf);
    printf(" ****** ");
    gotoxy(xf, yf+1);
    printf("** ** **");
    gotoxy(xf, yf+2);
    printf("********");
    gotoxy(xf, yf+3);
    printf("** ** **");
}
void apagarfantasma(int xf, int yf){
    gotoxy(xf, yf-1);
    printf("         ");
    gotoxy(xf, yf);
    printf("         ");
    gotoxy(xf, yf+1);
    printf("         ");
    gotoxy(xf, yf+2);
    printf("         ");
    gotoxy(xf, yf+3);
    printf("         ");
    gotoxy(xf, yf+4);
    printf("         ");
}
void morto(int xf, int yf){
    gotoxy(xf, yf);
    printf("   **   ");
    gotoxy(xf, yf+1);
    printf("********");
    gotoxy(xf, yf+2);
    printf("   **   ");
    gotoxy(xf, yf+3);
    printf("   **   ");

}
