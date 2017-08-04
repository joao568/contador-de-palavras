/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>
int main () {
    char texto[1000], c, aux;
    int i, palavras=1, cont;
    scanf("%[^\n]s", &texto);
    for(cont=0;cont<1001;cont++){
        if(texto[cont]!=' '){
            break;
        }
    }
    for(i=cont;i<1001;i++){
        c=texto[i];
        aux=texto[i+1];
        if((c==' ' || c=='-') && aux!=' ' && aux!=',' && aux!='.' && aux!=';' && aux!='-' && aux!='!' && aux!=':'){
            palavras++;
        }
        if((c=='.' || c==',' || c=='!' || c==':'  || c==';') && aux!= ' ' && aux!='0' && aux!= '1' && aux!='2' && aux!= '3' && aux!='4' && aux!= '5' && aux!='6' && aux!= '7' && aux!='8'  && aux!= '9' && aux!='\0' && aux!= '.' && aux!=';' && aux!= '-' && aux!='!' && aux!= ':' && aux!=',' && aux!=' '){
            palavras++;
        }
        if(c=='\0'){
            break;
        }
    }
    if(texto[i-1]==' '){
        palavras--;;
    }
    printf("%d", palavras);
    return 0;

}
