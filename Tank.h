#ifndef TANK_H
#define TANK_H

#include <iostream>

class Tank {
public:
    int maxAmmo = 5;       
    int currentAmmo = 5;   
    bool isReloading = false; 
    float reloadTime = 3.0f; 
    float reloadTimer = 0.0f;

    void Shoot();       
    void Reload(float deltaTime); 
};

#endif