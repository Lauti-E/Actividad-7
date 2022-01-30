#ifndef AUTO3_H
#define AUTO3_H
#include <ctime>
#include "Auto.h"

class Auto3 : public Auto{
protected:
	
public:
	void dibujar();
	void borrar(); // para dibujar, antes debemor borrar
	Auto3(int v, int x0,int y0);
	void setLimit(int, int,int, int);
	Auto3(){};
	void Colorear();
	int getX(){return x;}
	int getY(){return y;}
	void update();
};


#endif

