#ifndef POINT_H
#define POINT_H
#include "CPixel.h"
#include "CImage.h"

enum Color { red, green, blue, cyan, magenta, olive, crimson, lightcoral };
string Color_str[8]={ "red", "green", "blue", "cyan", "magenta", "olive", "crimson", "lightcoral" };

class Point
{
private:
   int posX;
   int posY;
   CPixel *pixel;
   int transparence;
public:
    Point(int X, int Y);
    Point();
    ~Point();
    void setColor(Color color, int transparence);
    void setPosition(double x, double y);
    void setTransparency(int transp);
    CPixel* drawTransparency(CPixel *oldp);
    void drawPoint(CImage *img);
    double getPosX();
    double getPosY();
};
#endif