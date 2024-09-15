#include <stdio.h>
#include <string.h>

int main(){
    
    char palavrasecreta[11] = "biscoito", letra[1], palavraexib[11];
    int tampalavra = strlen(palavrasecreta);
    int i, acertos = 0, chances = tampalavra +2;
    
    for(i = 0; i < tampalavra; i++){
        palavraexib[i] = '_';
    }
    
    while(chances > 0 && acertos < tampalavra){
        printf("Dica: todo mundo briga sobre qual o jeito certo de dizer ;)\n");
        printf("Chances: %d\n", chances);
        printf("Palavra secreta: ");
        for(i = 0; i < tampalavra; i++){
            printf(" %c", palavraexib[i]);
        }
        printf("\n\nDigite uma letra: ");
        scanf(" %c", &letra[0]);
        for(i = 0; i < tampalavra; i++){
            if(palavrasecreta[i] == letra[0]){
                palavraexib[i] = palavrasecreta[i];
                acertos++;
            }
        }
        if(!acertos){
            chances--;
        }
    }
    
    if(acertos == tampalavra){
        printf("Voce acertou a palavra!");
    }else{
        printf("Voce perdeu");
    }
    
    return 0;
}