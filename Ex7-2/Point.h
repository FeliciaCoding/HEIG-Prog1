#ifndef POINT_H
#define	POINT_H

class Point {
public:
   Point(float x = 0.f, float y = 0.f);
   void deplacer(float dx, float dy);
   float abscisse() const; // x
   float ordonnee() const; // y
private:
   float x, y;
};

#endif

