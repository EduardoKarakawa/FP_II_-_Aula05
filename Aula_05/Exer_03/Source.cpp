#include <iostream>

struct Cadastro {
	char nome[150];
	int idade;
	char endereco[500];
};

Cadastro* alocCad(int n) {
	Cadastro *cad = (Cadastro*)malloc(n * sizeof(Cadastro));

	for (int i = 0; i < n; i++) {
		std::cout << std::endl << "Nome: ";
		std::cin >> (cad + i)->nome;
		std::cout << "Idade: ";
		std::cin >> (cad + i)->idade;
		std::cout << "Endereco: ";
		std::cin >> (cad+i)->endereco;
	}
	return cad;
}

void impCad(Cadastro* cad, int n) {
	std::cout << std::endl << "####################################################################";
	for (int i = 0; i < n; i++) {
		std::cout << std::endl << std::endl << "Nome: " << (cad + i)->nome << std::endl;
		std::cout << "Idade: " << (cad + i)->idade << std::endl;
		std::cout << "Endereco: " << (cad + i)->endereco << std::endl;
	}
}

int main() {
	Cadastro* listaAlunos;
	int x;

	std::cout << "Digite o total de alunos: ";
	std::cin >> x;

	listaAlunos = alocCad(x);
	impCad(listaAlunos, x);

	system("pause");
	return 0;
}