
#ifndef EX7_4_ROBOT_H
#define EX7_4_ROBOT_H

// declaration
class Robot {
public:
    // constructeur : définir la position initiale (de type int) du robot
    // declarer la valeur par défaut = 0
    Robot(int positionInitiale = 0);

    // fonction number
    void faireDemiTour(); // turn around
    void deplacer(unsigned short nbUnites = 1); // par défaut = 1
    int getPosition() const; // access to private class

private:
    int direction; // +1 = vers la droite, -1 = vers la gauche
    int position;  // la position courante du robot

};


#endif //EX7_4_ROBOT_H
