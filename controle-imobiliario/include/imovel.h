#ifndef IMOVEL_H
#define IMOVEL_H


class Imovel{

	protected:
		String endereco;
		String classificacao;
		float preco;

	public:
		String getEndereco();
		String getClassficacao();
		float getPreco();
		void setEndereco(String endereco);
		void setClassficacao(String classificacao);
		void setPreco(float preco);
		Imovel (String e, String c, float p) : endereco(e), classificacao(c), preco(p) {}
		virtual  


}