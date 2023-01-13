// pensei em por aqui toda a parte 'tercnica' as função etcetc e depois criar um arquivo pra parte visual
#include "header.h"

int sorteador(){
	srand(time(NULL));

	int random = rand() % 8;

    return random;
}

void cor(int numero){
    switch(numero){
        case 0:
            std::cout << 'cor 1' << std::endl;
            break;
        case 1:
            std::cout << 'cor 2' << std::endl;
            break;
        case 2:
            std::cout << 'cor 3' << std::endl;
            break;
        case 3:
            std::cout << 'cor 4' << std::endl;
            break;
        case 4:
            std::cout << 'cor 5' << std::endl;
            break;
        case 5:
            std::cout << 'cor 6' << std::endl;
            break;
        case 6:
            std::cout << 'cor 7' << std::endl;
            break;
        case 7:
            std::cout << 'cor 8' << std::endl;
            break;
    }
}