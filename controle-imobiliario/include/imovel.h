#ifndef IMOVEL_H
#define IMOVEL_H


class Imovel{

	protected:
		String endereco;
		double preco;
		String condicao
	public:
		String getEndereco();
		double getPreco();
		String getCondicao();

		void setEndereco(String endereco);
		void setPreco(double preco);
		void setCondicao(String condicao);

		Imovel(String e, double p, String c) : endereco(e), preco(p), condicao(c) {}  
		//virtual void complemento(){}
};
#endif