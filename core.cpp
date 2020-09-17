#define _USE_MATH_DEFINES
#include <cmath>
#include <limits>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "space.h"
#include "light.h"
#include "skin.h"
#include "sphere.h"
#include "methods.h"
 
using namespace std;


int main() {
    Skin one(V(0.4, 0.4, 0.3));
    Skin two(V(0.7, 0.1, 0.2));

    vector<Sphere> spheres;
    spheres.push_back(Sphere(V(-5, 0, -19), 2, one));
    spheres.push_back(Sphere(V(7, 5, -15), 3, two));

    vector<Light> lights;
    lights.push_back(Light(V(0, 20, 20), 2.5));

    Methods met;
    met.render(spheres, lights);
   

    return 0;
}


