#ifndef CASA_H
#define CASA_H

class Casa : public  {

		protected:
			String telha;
			//String caracteristica
		public:
			String getTelha();
			void setTelha(Strin t);
			Casa (String t, String e, double p) : telha(t), Imovel(e, p) {}
			
};

#endif