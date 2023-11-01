#include <iostream>
#include <string>

#include "imovel.h"
#include "casa.h"

int main(){
	
	Casa c("Rua joaquim correia filho", 112000.00, "velho");

	std::cout << "Endereco: " << c.getEndereco() << std::endl;
	std::cout << "Preço: " << c.getPreco() << std::endl;
	std::cout << "Condiçao: " << c.getCondicao() << std::endl;

	return 0;
}