// Projectile.h

#ifndef PROJECTILE_H
#define PROJECTILE_H

#include "Mesh.h"
#include "Shader.h"
#include "Camera.h"

class Projectile {
public:
    Mesh mesh;
    glm::vec3 position;
    glm::vec3 direction;
    float speed;
    float lifeTime;
    float collisionRadius;

    bool isParabolic;
    glm::vec3 velocity;
    glm::vec3 acceleration;

    Projectile(Mesh& mesh, glm::vec3 startPosition, glm::vec3 direction, float speed, bool isParabolic = false);

    void Update(float deltaTime);
    void Draw(Shader& shader, Camera& camera);
    bool IsAlive() const;
};

#endif