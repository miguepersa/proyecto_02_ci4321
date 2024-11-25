#ifndef OBSTACLE_H
#define OBSTACLE_H

#include "Mesh.h"
#include "Shader.h"
#include "Camera.h"

enum ObstacleType {
    CUBE,
    PYRAMID
};

class Obstacle {
public:
    Mesh mesh;
    glm::vec3 position;
    ObstacleType type;
    float collisionRadius;

    Obstacle(Mesh& mesh, glm::vec3 position, ObstacleType type);
    
    void Draw(Shader& shader, Camera& camera);
};

#endif