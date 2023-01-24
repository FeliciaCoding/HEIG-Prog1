#include "Robot.h"

// definition
Robot::Robot(int positionInitiale) // n'initialize la valeur par défaut que dans header
        : direction(1), position(positionInitiale) {
}

void Robot::faireDemiTour() {
    direction *= -1;
}

void Robot::deplacer(unsigned short nbUnites) {
    position += direction * nbUnites;
}

int Robot::getPosition() const {
    return position;
}