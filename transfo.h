#ifndef TRANSFO_H
#define TRANSFO_H

class transformation{
	virtual void transfo(int sizeX, int sizeY, double teta, double tx, double ty, double *** C)=0;
};

class transfo1 : public transformation{
	void transfo(int sizeX, int sizeY, double teta, double tx, double ty, double *** C);
};



#endif


