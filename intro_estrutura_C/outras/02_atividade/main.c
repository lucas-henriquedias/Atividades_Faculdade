#include <stdio.h>

int main()
{
	FILE *arquivo;
	char linha[100];
		
	arquivo = fopen("leitura.txt", "w");
	
	if(arquivo == NULL){
		printf("Erro ao abrir o arquivo");
	}
	
	printf("Escreva alguma coisa:\n >> ");
	fgets(linha, sizeof(linha), stdin);
	
	fprintf(arquivo, linha);
	fclose(arquivo);
	printf("\n");
	
	arquivo = fopen("leitura.txt", "r");
	while(fgets(linha, sizeof(linha), arquivo) != NULL){
		printf("%s", linha);
	}
	fclose(arquivo);

	return 0;
}

