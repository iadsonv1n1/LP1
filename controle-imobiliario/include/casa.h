#ifndef CASA_H
#define CASA_H

#include <string>
#include "imovel.h"

using std::string;

class Casa : public Imovel{

	protected:
		string telha;
		//String caracteristica

	public:
		string getTelha();
		void setTelha(string t);
		Casa (string e, double p, string c, string t) : Imovel(e, p, c), telha(t) { }
			
};

#endif