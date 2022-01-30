#include <ctime>
#ifndef AUTO_H
#define AUTO_H


class Auto{
protected:
	int x;
	int y;
	// hago matrices lo suficientemente grandes
	int matriz[5][4];
	int color[5][4]; // matriz de colores
	int ancho;
	int alto;
	int pasoX;
	int pasoY;
	int xnueva;
	int ynueva;
	int maxLimitX;
	int maxLimitY;
	int minLimitX;
	int minLimitY;
	
	bool cambio;
	
	clock_t tempo; //variable para ajustar la velocidad de movimiento de la pelotita
	clock_t paso; //variable para ajustar la velocidad de movimiento de la pelotita
	
	int velocidad;
	int colorAuto;
public:
	Auto();
	void dibujar();
	void borrar();
	int getX(){return x;}
	int getY(){return y;}
};

#endif

