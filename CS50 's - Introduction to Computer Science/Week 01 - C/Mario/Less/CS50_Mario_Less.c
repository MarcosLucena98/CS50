// Bibliotecas usadas
#include <cs50.h>
#include <stdio.h>


// A função get_positive_int me retorna o valor da altura escolhido
int get_positive_int(void);

// função principal
int main(void)

{
    // Variavéis usadas
    int Coluna,Espaco,Degrau;
    int Height = get_positive_int();

// Esse (for) é usado para controlar a quantidade de degraus da escada do Mario.
    for (Degrau = 0; Degrau < Heighgt; Degrau++)
    {
        // Este (for) controla os espaços para formar s degraus.
        for (Espaco = 0; Espaco < Height - Degrau - 1; Espaco++)
        {
            printf(" ");
        }
        // Controla em qual coluna deve haver uma hashe.
        for (Coluna = 0; Coluna <= Degrau; Coluna++)
        {
            printf("#");
        }
        printf("\n");
    }

}


// modulo que retorna o valor da altura
int get_positive_int(void)
{
    int Altura;

    //Faça isso até a condição for verdadeira.
    do
    {
        Altura = get_int("Choice a number between 1 and 8: ");
    }
    // Caso o usuario insirá um valor incorreto, o a pergunta continuará sendo feita.
    while (Altura <= 0  || Altura > 8);
    // O valor inserido estando correto, ele retorna na variavel int
    return Altura;
}


