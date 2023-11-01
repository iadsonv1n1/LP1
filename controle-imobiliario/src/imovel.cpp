#include "imovel.h"
#include <string>

String Imovel::getEndereco(){
	return endereco;
}

double Imovel::getPreco(){
	return preco;
}

String Imovel::getCondicao(){
	return condicao;
}

void Imovel::setEndereco(String e){
	endereco = e;
}

void Imovel::setPreco(double p){
	preco = p;
}

void Imove::setCondicao(String c){
	condicao = c;
}