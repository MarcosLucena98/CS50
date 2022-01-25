// Bibliotecas usadas
#include <cs50.h>
#include <stdio.h>


// A função get_positive_int me retorna o valor da altura escolhido
int get_positive_int(void);

// função principal
int main(void)

{
    // Variavéis usadas
    int Coluna, Espaco, Degrau, vazio, Coluna2;
    int height1 = get_positive_int();

// Esse (for) é usado para controlar a quantidade de degraus da escada do Mario.
    for (Degrau = 0; Degrau < height1; Degrau++)
    {
        // Este (for) controla os espaços para formar s degraus.
        for (Espaco = 0; Espaco < height1 - Degrau - 1; Espaco++)
        {
            printf(" ");
        }
        // Controla em qual coluna deve haver hashes.
        for (Coluna = 0; Coluna <= Degrau; Coluna++)
        {
            printf("#");
        }
        // Contagem de 2 espaços
        for (vazio = 0; vazio < 2; vazio++)
        {
            printf(" ");
        }
        // Controla em qual coluna, depois dos dois espaços, que deve haver hashes.
        for (Coluna2 = 0; Coluna2 <= Degrau; Coluna2++)
        {
            printf("#");
        }
        
        printf("\n");
    }

}


// modulo que retorna o valor da altura
int get_positive_int(void)
{
    int height;

    //Faça isso até a condição for verdadeira.
    do
    {
        height = get_int("Choice a number between 1 and 8: ");
    }
    // Caso o usuario insirá um valor incorreto, o a pergunta continuará sendo feita.
    while (height <= 0  || height > 8);
    // O valor inserido estando correto, ele retorna na variavel int
    return height;
}
