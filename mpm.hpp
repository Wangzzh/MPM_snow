#pragma once

#include <vector>

#include "Eigen/Dense"
#include "GL/gl.h"
#include "GL/glut.h"

#include "particle.hpp"
#include "grid.hpp"

class MPM
{
public:
    MPM(int nGrid);
    ~MPM();
    void render();

private:
    std::vector<Particle*> particles;
    std::vector<std::vector<Grid*>> grids;
};