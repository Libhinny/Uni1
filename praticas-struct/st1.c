#include <stdio.h>
#include <stdlib.h>

// Pragrama que cadastra funcionarios 

// Passo 1 - Definir a struct que representa o funcionario

typedef struct funcionario{
    char nome[20];
    int idade;
    float salario;
    char cargo[20];
}Funcionario;

void cadastraFuncionario (Funcionario * vetor_funcionario, int qnt_funcionarios){
/* Função que cadastra funcionário */
    int indice;
    for (indice=0; indice< qnt_funcionarios; indice++){
        printf("Digite o nome: \n");
        scanf(" %[^\n]", vetor_funcionario[indice].nome);
        printf("Digite a idade: \n");
        scanf("%d", &vetor_funcionario[indice].idade);
        printf("Digite o salário: \n");
        scanf("%f", &vetor_funcionario[indice].salario);
        printf("Digite o cargo: \n");
        scanf(" %[^\n]", vetor_funcionario[indice].cargo);
    }
}

int main (void){
    
    int quantidade_funcionarios;
    printf("Informe a quantidade de funcionários a ser cadastrado: \n");
    scanf("%d", &quantidade_funcionarios);

    Funcionario * vetor = (Funcionario *)malloc(quantidade_funcionarios*sizeof(Funcionario));
    if (vetor == NULL){
        prinft("Sem memória!\n");
        exit(1);
    }

    cadastraFuncionario(vetor, quantidade_funcionarios);

    return 0;
}
