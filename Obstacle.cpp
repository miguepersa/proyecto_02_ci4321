#include "Obstacle.h"

Obstacle::Obstacle(Mesh& mesh, glm::vec3 position, ObstacleType type)
    : mesh(mesh), position(position), type(type)
{
    if (type == CUBE) {
        collisionRadius = 0.7f;
    }
    else if (type == PYRAMID) {
        collisionRadius = 0.7f;
    }
}

void Obstacle::Draw(Shader& shader, Camera& camera)
{
    mesh.Position = position;
    mesh.Draw(shader, camera);
}