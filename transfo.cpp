#include "stdio.h"
#include "transfo.h"
#include "math.h"


void transfo1::transfo(int sizeX, int sizeY, double teta, double tx, double ty, double *** C)
{
	for (int i=0; i<sizeX; i++)
	{
		for (int j=0; j<sizeY; j++)
		{
			double x2 = cos(teta)*i-sin(teta)*j + tx;
			double y2 = sin(teta)*i+cos(teta)*j + ty;
			C[i][j][0]=x2;
			C[i][j][1]=y2;
		}
	
	}

}
