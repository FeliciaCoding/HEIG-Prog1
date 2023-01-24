#ifndef POINT_H
#define	POINT_H

class Point {
public:
   // constructor receiving as argument the coordinates (float) of the point
   Point(float x = 0.f, float y = 0.f);
   // fonction membre : deplacer effectuant une translation définie par ses deux
   // arguments (float)
   void deplacer(float dx, float dy);
   //fonction membre : afficher se contentant d'afficher à l'écran les coordonnées cartésiennes du point sous la forme : (x,y)
   void afficher() const;
private:
    // argumanets
   float x, y;
};

#endif

