//Aula pratica de malloc, realloc e free
//Alguns exemplos:

/*
#include <iostream>

int main() {
	char *textura = (char*)malloc(1024000000 * sizeof(char));

	free(textura);
	system("pause");
	return 0;
}*/


	/*
#include <iostream>

int main() {
	char *nome;

	nome = (char*)malloc(40);
	strcpy_s(nome, 40, "Amora Doce");
	std::cout << nome << std::endl;

	char* novo;
	novo = (char*) realloc(nome, 50);

	std::cout << novo << std::endl;
	free(novo);
	system("pause");
	return 0;
}*/



//-----------------------------------------------------------------------------------------------------
////--------- Funcao recebendo uma struct, aloca na heap e retorna para um ponteiro -------------------
//-----------------------------------------------------------------------------------------------------

#include <iostream>

struct Inimigo {
	int x;
	int y;
};

Inimigo* alocInim(Inimigo n) {

	Inimigo *novoInim = (Inimigo*) malloc(sizeof(Inimigo));
	novoInim->x = n.x;
	novoInim->y = n.y;
	return novoInim;
}


int main() {
	Inimigo *inimigo;
	Inimigo ini;

	std::cout << "X = ";
	std::cin >> ini.x;
	std::cout << "Y = ";
	std::cin >> ini.y;

	inimigo = (Inimigo*) alocInim(ini);

	std::cout << std::endl << "Na heap:" << std::endl;
	std::cout << "X = " << inimigo->x << " >> Endereco: " << &inimigo->x << std::endl;
	std::cout << "Y = " << inimigo->y << " >> Endereco: " << &inimigo->y << std::endl << std::endl;

	free(inimigo);

	system("pause");
	return 0;
}