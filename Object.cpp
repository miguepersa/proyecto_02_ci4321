#include "Object.h"
#include <cmath>  // For M_PI constant

Object::Object(std::vector<Mesh>& meshes) {

    Object::meshes = meshes;
    meshes[0].Orientation = glm::vec3(0.0f, 0.0f, -1.0f);
    meshes[1].Orientation = glm::vec3(0.0f, 0.0f, -1.0f);
    meshes[1].rotateAngles = glm::radians(180.0f);
}

void Object::setMeshOffset(glm::vec3 offset, unsigned int index)
{
    meshes[index].Position = Position + offset;
}

void Object::HandleInput(GLFWwindow* window, glm::vec3 cameraOrientation, float currentTime, int windowWidth, int windowHeight) {

    // Initialize rotation angle for the tank
    static float tankRotationY = 0.0f;
    const float PI = 3.14159265358979323846;  // Define M_PI constant if missing

    // Calculate deltaTime for smooth movement
    deltaTime = currentTime - prevTime;
    prevTime = currentTime;
    realSpeed = speed * deltaTime;

    // Rotate the tank with A and D keys
    if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS) {
        tankRotationY += 70.0f * deltaTime;  // Rotate left
    }
    if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS) {
        tankRotationY -= 70.0f * deltaTime;  // Rotate right
    }

    rotateMesh(0, tankRotationY);

    // Calculate forward direction based on tank's rotation
    glm::vec3 forwardDir = glm::vec3(sin(glm::radians(tankRotationY)), 0.0f, cos(glm::radians(tankRotationY)));

    // Move tank forward and backward with W and S keys
    if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS) {
        Position += realSpeed * forwardDir;
        meshes[0].Position += realSpeed * forwardDir;
        meshes[1].Position += realSpeed * forwardDir;
    }
    if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS) {
        Position -= realSpeed * forwardDir;
        meshes[0].Position -= realSpeed * forwardDir;
        meshes[1].Position -= realSpeed * forwardDir;
    }

    // Update the tank's orientation based on rotation
    Orientation = glm::normalize(forwardDir);

    if (glfwGetKey(window, GLFW_KEY_M) == GLFW_PRESS) {
            
        if (lockMouse) {
            lockMouse = false;
            glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);

            firstClick = true;
        }
        else {
            glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_HIDDEN);
            lockMouse = true;
        }
    }


    if (lockMouse)
    {
        // Mouse position capture
        double mouseX, mouseY;
        glfwGetCursorPos(window, &mouseX, &mouseY);

        float rotx = sensitivity * (float)(mouseY - (windowHeight / 2)) / windowHeight;
        float roty = sensitivity * (float)(mouseX - (windowWidth / 2)) / windowWidth;

        // Ajusta yaw y pitch en función del movimiento del mouse
        yaw += roty;
        pitch -= rotx;

        // Limita el pitch para evitar que la torreta se voltee
        if (pitch >  30.0f) pitch =  30.0f;
        if (pitch < -30.0f) pitch = -30.0f;

        // Restablece el cursor al centro de la pantalla
        glfwSetCursorPos(window, (windowWidth / 2), (windowHeight / 2));

        // Store the turret rotation in the Object if Mesh lacks TurretOrientation
        rotateMesh(1, -(yaw));
        meshes[1].elevationAngle = glm::radians(pitch);
        meshes[1].Orientation.x = cos(glm::radians(yaw)) * cos(glm::radians(pitch));
        meshes[1].Orientation.y = sin(glm::radians(pitch));
        meshes[1].Orientation.z = sin(glm::radians(yaw)) * cos(glm::radians(pitch));
        meshes[1].Orientation = glm::normalize(meshes[1].Orientation);
        
    }

    // Additional input handling (optional) for altitude control and speed boost
    //if (glfwGetKey(window, GLFW_KEY_SPACE) == GLFW_PRESS) {
    //    mesh.Position += realSpeed * Up;
    //}
    //if (glfwGetKey(window, GLFW_KEY_LEFT_CONTROL) == GLFW_PRESS) {
    //    if (mesh.Position.y >= 0.5f) mesh.Position += realSpeed * -Up;
    //}
    if (glfwGetKey(window, GLFW_KEY_LEFT_SHIFT) == GLFW_PRESS) {
        speed = 15.0f;
    }
    else if (glfwGetKey(window, GLFW_KEY_LEFT_SHIFT) == GLFW_RELEASE) {
        speed = 5.0f;
    }

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