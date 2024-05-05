#include <stdio.h>
#include <string.h>
#include <ctype.h>

int namefilepointposition(char *fullname) {
    int i;
    for (i = 0; i < strlen(fullname); i++) {
        if (fullname[i] == '.')
            break;
    }
    if (i >= strlen(fullname))
        return -1;
    else
        return i;
}

int word2vec(char *pNomeTxtEntrada) {
    FILE *arqent, *arqsaida;
    char nomarq[40];
    int pointidx = namefilepointposition(pNomeTxtEntrada);
    int pp;

    // Gerando nome do arquivo de saída
    if (pointidx >= 0) {
        for (pp = 0; pp < pointidx; pp++)
            nomarq[pp] = pNomeTxtEntrada[pp];
        nomarq[pp] = '\0'; // Fim da string
    } else
        strcpy(nomarq, pNomeTxtEntrada);

    strcat(nomarq, "_Vocabulo.txt");
    printf("\nRecebi no nome do arquivo: %s\n", nomarq);

    // Abrindo o arquivo de entrada
    arqent = fopen(pNomeTxtEntrada, "r");
    if (arqent == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 0;
    }

    // Abrindo o arquivo de saída
    arqsaida = fopen(nomarq, "w");
    if (arqsaida == NULL) {
        printf("Erro ao criar o arquivo de saída.\n");
        fclose(arqent);
        return 0;
    }

    // Criando um conjunto de palavras únicas
    char vocabulario[10000][100]; // Supondo que haverá no máximo 10000 palavras únicas de até 100 caracteres cada
    int tamanho_vocabulario = 0;

    // Lendo cada palavra do arquivo de entrada
    char palavra[100]; // Tamanho máximo da palavra
    while (fscanf(arqent, "%s", palavra) == 1) {
        // Removendo pontuações da palavra
        int len = strlen(palavra);
        while (len > 0 && ispunct(palavra[len - 1])) {
            palavra[len - 1] = '\0';
            len--;
        }

        // Convertendo a palavra para minúsculas
        for (int i = 0; palavra[i]; i++)
            palavra[i] = tolower(palavra[i]);

        // Verificando se a palavra deve ser incluída no vocabulário
        if (strlen(palavra) >= 4) {
            // Verificando se a palavra já está no vocabulário
            int ja_existe = 0;
            for (int i = 0; i < tamanho_vocabulario; i++) {
                if (strcmp(palavra, vocabulario[i]) == 0) {
                    ja_existe = 1;
                    break;
                }
            }

            // Se a palavra não estiver no vocabulário, adiciona ao vocabulário e escreve no arquivo de saída
            if (!ja_existe) {
                strcpy(vocabulario[tamanho_vocabulario], palavra);
                fprintf(arqsaida, "%s\n", palavra);
                tamanho_vocabulario++;
            }
        }
    }

    // Fechando os arquivos
    fclose(arqent);
    fclose(arqsaida);

    return 1;
}

int main() {
    char nomearq[30];
    printf("Entre com o nome do arquivo:");
    scanf("%s", nomearq);
    if (!word2vec(nomearq))
        printf("\nErro na geração do vocabulário!\n");
    else
        printf("\nVocabulário gerado com sucesso!\n");

    return 0;
}
