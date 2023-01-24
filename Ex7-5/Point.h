#ifndef POINT_H
#define	POINT_H

class Point { // using friend to access to private variable
   friend Point operator+(const Point& p1, const Point& p2);
    // friend className identifier(dataType variables);
public:
   Point(float x = 0.f, float y = 0.f);
   void deplacer(float dx, float dy);
   float abscisse() const;
   float ordonnee() const;
   //Point operator +(const Point& p) const; // valeur par référance
private:
   float x, y;
};

#endif

