#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

struct Aluno
{
    char nome[100];
    int matricula;
    float nota;
};

void printMenu()
{
    cout << "1. Cadastrar Aluno" << endl;
    cout << "2. Mostrar Alunos Cadastrados" << endl;
    cout << "3. Buscar Alunos por Nome" << endl;
    cout << "4. Sair" << endl;
}

void cadastrarAluno(struct Aluno *turma)
{
    cout << "Digite o nome do aluno: " << endl;
    cin >> turma->nome;

    cout << "Digite a matricula: " << endl;
    cin >> turma->matricula;

    cout << "Digite a nota: " << endl;
    cin >> turma->nota;
}

void printAluno(struct Aluno turma)
{
    cout << endl
         << "Nome: " << turma.nome << endl;
    cout << "Matricula: " << turma.matricula << endl;
    cout << "Nota: " << turma.nota << endl;
}

void buscarAluno(struct Aluno turma[100])
{

    char buscaNome[100];
    struct Aluno buscaAluno;

    cout << endl
         << "Digite o Nome do aluno que deseja buscar: " << endl;
    cin >> buscaNome;

    for (int i = 0; i < 100; i++)
    {
        if (strstr(turma[i].nome, buscaNome) != NULL)
        {
            buscaAluno = turma[i];
        }
    }

    printAluno(buscaAluno);
}

int main()
{
    int N = 100;
    struct Aluno turma[N];
    int qtdAluno = 0;

    int menu = 0;

    printMenu();

    cout << endl
         << "Escolha um Opcao: " << endl;
    cin >> menu;

    while (menu > 0 && menu <= 4)
    {
        if (menu == 1)
        {
            cadastrarAluno(&turma[qtdAluno]);
            qtdAluno++;
            cout << "Aluno cadastrado com sucesso!" << endl;
        }
        else if (menu == 2)
        {
            cout << "Lista de Alunos" << endl;
            for (int i = 0; i < qtdAluno; i++)
            {
                printAluno(turma[i]);
            }
        }
        else if (menu == 3)
        {
            if (qtdAluno > 0)
            {
                buscarAluno(turma);
            }
            else
            {
                cout << endl
                     << "Nao existe nenhum aluno cadastrado!" << endl;
            };
        }
        else if (menu == 4)
            break;

        cout
            << endl
            << "Escolha um Opcao: " << endl;
        cin >> menu;
    }

    return 0;
}