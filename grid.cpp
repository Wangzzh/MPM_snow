#include "grid.hpp"

void Grid::render() {
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glLoadIdentity();
    glTranslatef(position[0], position[1], 0.);
    glutSolidSphere(0.005, 10, 10);
    glPopMatrix();
    
    double velocityFactor = 0.5;
    glBegin(GL_LINES);
    glVertex3f(position[0], position[1], 0.0);
    glVertex3f(position[0] + linearMomentum[0] * velocityFactor, 
        position[1] + linearMomentum[1] * velocityFactor, 0.);
    glEnd();
}