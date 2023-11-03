#ifndef APARTAMENTO_H
#define APARTAMENTO_H

#include <string>
#include "imovel.h"

class Apartamento : public Imovel{

	protected:
		int numAp;

	public:
		int getNumAp();
		void setNumAp(int n);
		Apartamento (string e, float p, string c, int n) : Imovel(e, p, c), numAp(n) { }
};
#endif