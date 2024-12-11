#include "Object.h"
#include <cmath>  // For M_PI constant

glm::vec3 calculateOrientation(float yaw, float pitch);

Object::Object(std::vector<Mesh>& meshes) {

    Object::meshes = meshes;

    for (int i = 0; i < meshes.size(); i++) {
        meshes[i].Orientation = this->Orientation;
    }

}

void Object::setMeshOffset(glm::vec3 offset, unsigned int index)
{
    meshes[index].Position = Position + offset;
}

void Object::HandleInput(GLFWwindow* window, glm::vec3 cameraOrientation, float currentTime, int windowWidth, int windowHeight) {
    static float tankRotationY = 0.0f;
    const float PI = 3.14159265358979323846;

    // Calculate deltaTime for smooth movement
    deltaTime = currentTime - prevTime;
    prevTime = currentTime;
    realSpeed = speed * deltaTime;

    // Handle rotation
    if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS) {
        tankRotationY += 70.0f * deltaTime;
    }
    if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS) {
        tankRotationY -= 70.0f * deltaTime;
    }
    tankRotationY = fmod(tankRotationY, 360.0f);
    rotateMesh(0, tankRotationY);

    // Handle movement
    if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS || glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS) {
        float direction = (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS) ? 1.0f : -1.0f;
        glm::vec3 forwardDir = glm::vec3(sin(glm::radians(tankRotationY)), 0.0f, cos(glm::radians(tankRotationY)));
        Position += realSpeed * forwardDir * direction;
        for (auto& mesh : meshes) {
            mesh.Position += realSpeed * forwardDir * direction;
        }
    }
    Orientation = glm::normalize(glm::vec3(sin(glm::radians(tankRotationY)), 0.0f, cos(glm::radians(tankRotationY))));

    // Mouse lock/unlock toggle with debounce
    static bool debounceM = false;
    if (glfwGetKey(window, GLFW_KEY_M) == GLFW_PRESS && !debounceM) {
        lockMouse = !lockMouse;
        glfwSetInputMode(window, GLFW_CURSOR, lockMouse ? GLFW_CURSOR_HIDDEN : GLFW_CURSOR_NORMAL);
        firstClick = true;
        debounceM = true;
    }
    if (glfwGetKey(window, GLFW_KEY_M) == GLFW_RELEASE) {
        debounceM = false;
    }

    if (lockMouse) {
        // Mouse-based turret control
        double mouseX, mouseY;
        glfwGetCursorPos(window, &mouseX, &mouseY);

        float rotx = sensitivity * (mouseY - (windowHeight / 2)) / windowHeight;
        float roty = sensitivity * (mouseX - (windowWidth / 2)) / windowWidth;

        yaw += roty;
        pitch -= rotx;

        pitch = glm::clamp(pitch, -30.0f, 30.0f);

        glfwSetCursorPos(window, (windowWidth / 2), (windowHeight / 2));

        rotateMesh(1, -yaw);
        meshes[1].elevationAngle = glm::radians(pitch);
        meshes[1].Orientation = calculateOrientation(yaw, pitch);
    }

    // Speed boost
    speed = (glfwGetKey(window, GLFW_KEY_LEFT_SHIFT) == GLFW_PRESS) ? 15.0f : 5.0f;
}


void Object::rotateMesh(unsigned int index, float angle)
{
    meshes[index].rotateAngles = glm::radians(-angle);
}

void Object::Draw(std::vector<Shader>& shaders, Camera& camera)
{

    for (unsigned int i = 0; i < meshes.size(); i++)
    {
        meshes[i].Draw(shaders[i], camera);
    }
}

glm::vec3 calculateOrientation(float yaw, float pitch) {
    return glm::normalize(glm::vec3(
        cos(glm::radians(yaw)) * cos(glm::radians(pitch)),
        sin(glm::radians(pitch)),
        sin(glm::radians(yaw)) * cos(glm::radians(pitch))
    ));
}