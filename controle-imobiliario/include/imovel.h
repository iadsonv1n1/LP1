#ifndef IMOVEL_H
#define IMOVEL_H

#include <string>

using std::string;

class Imovel{

	protected:
		string endereco;
		double preco;
		string condicao;

	public:
		string getEndereco();
		double getPreco();
		string getCondicao();

		void setEndereco(string endereco);
		void setPreco(double preco);
		void setCondicao(string condicao);

		Imovel (string e, double p, string c) : endereco(e), preco(p), condicao(c) { } 
		//virtual void complemento(){}
};
#endif