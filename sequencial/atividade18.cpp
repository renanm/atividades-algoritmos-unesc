#include<stdio.h>

main() {
    char nome[50], endereco[200], cidade[50], uf[2], cep[9], telefone[11], cpf[13], rg[8], nascimento[10], escolaridade[30], curso[50];
    printf("Informe o nome: ");
    gets(nome);
    printf("Informe o endereco: ");
    gets(endereco);
    printf("Informe a cidade: ");
    gets(cidade);
    printf("Informe a UF: ");
    gets(uf);
    printf("Informe o CEP: ");
    gets(cep);
    printf("Informe o telefone: ");
    gets(telefone);
    printf("Informe o CPF: ");
    gets(cpf);
    printf("Informe o RG: ");
    gets(rg);
    printf("Informe a data de nascimento (DD/MM/AAAA): ");
    gets(nascimento);
    printf("Informe o grau de escolaridade: ");
    gets(escolaridade);
    printf("Informe o curso que leciona: ");
    gets(curso);
    
    printf("Nome: %s\n", nome);
    printf("Endereco %s\n", endereco);
    printf("Cidade: %s\n", cidade);
    printf("UF: %s\n", uf);
    printf("CEP: %s\n", cep);
    printf("Telefone: %s\n", telefone);
    printf("CPF: %s\n", cpf);
	printf("RG: %s\n", rg);
	printf("Data de nascimento: %s\n", nascimento);
	printf("Grau de escolaridade: %s\n", escolaridade);
	printf("Curso que leciona: %s\n", curso);
}
