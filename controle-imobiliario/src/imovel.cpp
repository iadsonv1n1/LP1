#include "imovel.h"
#include <string>

string Imovel::getEndereco(){
	return endereco;
}

double Imovel::getPreco(){
	return preco;
}

string Imovel::getCondicao(){
	return condicao;
}

void Imovel::setEndereco(string e){
	endereco = e;
}

void Imovel::setPreco(double p){
	preco = p;
}

void Imovel::setCondicao(string c){
	condicao = c;
}