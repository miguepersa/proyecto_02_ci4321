#include "Tank.h"

void Tank::Shoot() {
    if (currentAmmo > 0 && !isReloading) {
        currentAmmo--;
    }
}

void Tank::Reload(float deltaTime) {
    if (isReloading) {
        reloadTimer += deltaTime;
        if (reloadTimer >= reloadTime) {
            currentAmmo = maxAmmo; 
            reloadTimer = 0.0f;
            isReloading = false;
        }
    }
}