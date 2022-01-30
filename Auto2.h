#ifndef AUTO2_H
#define AUTO2_H
#include <ctime>
#include "Auto.h"

class Auto2 : public Auto{
protected:
	
public:
	void dibujar();
	void borrar(); // para dibujar, antes debemor borrar
	Auto2(int v, int x0,int y0);
	void setLimit(int, int,int, int);
	Auto2(){};
	void Cambio();
	int getX(){return x;}
	int getY(){return y;}
	void update();
};


#endif

