#include <iostream>
#include <string>

#include "imovel.h"
#include "casa.h"

int main(){
	
	Casa c("Rua joaquim correia filho", 1120.55, "velho", "ceramica");

	std::cout << "Endereco: " << c.getEndereco() << std::endl;
	std::cout << "Preço: " << c.getPreco() << std::endl;
	std::cout << "Condiçao: " << c.getCondicao() << std::endl;
	std::cout << "Telha: " << c.getTelha() << std::endl;

	return 0;
}