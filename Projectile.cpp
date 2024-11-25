#include "Projectile.h"

Projectile::Projectile(Mesh& mesh, glm::vec3 startPosition, glm::vec3 direction, float speed, bool isParabolic)
    : mesh(mesh), position(startPosition), direction(glm::normalize(direction)), speed(speed), lifeTime(5.0f), isParabolic(isParabolic)
{
    collisionRadius = 0.1f;

    if (isParabolic) {
        velocity = direction * speed;
        acceleration = glm::vec3(0.0f, -9.81f, 0.0f);
    }
    else {
        velocity = direction * speed;
        acceleration = glm::vec3(0.0f);
    }
}

void Projectile::Update(float deltaTime)
{
    if (isParabolic) {
        velocity += acceleration * deltaTime;
        position += velocity * deltaTime;
    }
    else {
        position += velocity * deltaTime;
    }
    lifeTime -= deltaTime;
}

void Projectile::Draw(Shader& shader, Camera& camera)
{
    mesh.Position = position;
    mesh.Draw(shader, camera);
}
bool Projectile::IsAlive() const
{
    return lifeTime > 0.0f;
}