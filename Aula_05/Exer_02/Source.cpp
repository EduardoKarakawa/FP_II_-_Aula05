
//Imprimindo o tamnho em bytes da struct Aluno

#include <iostream>

struct Aluno {
	int matricula;
	char nome[150];
	int nota_1, nota_2, nota_3;
};

int main() {
	
	std::cout << "Struct Aluno = " << sizeof(Aluno) << std::endl;

	system("pause");
	return 0;
}