#ifndef OBJECT_H
#define OBJECT_H

#include "Mesh.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/rotate_vector.hpp>
#include <GLFW/glfw3.h>
#include <glm/gtx/vector_angle.hpp>#include <glad/glad.h>

class Object {
	
	public:
		std::vector<Mesh> meshes;
		glm::vec3 Up = glm::vec3(0.0f, 1.0f, 0.0f);
		glm::vec3 Position = glm::vec3(0.0f, 0.0f, 0.0f);
		glm::vec3 Orientation = glm::vec3(0.0f, 0.0f, -1.0f);
		glm::vec3 GetPosition() const { return Position; };
		float turretRotationAngle = 0.0f;
		float tankRotationY = 0.0f;
		bool firstClick = true;
		
		float yaw = -90.0f;
		float pitch = 0.0f;
		float sensitivity = 100.0f;

		float speed = 5.0f;
		float prevTime = 0.0f;
		float deltaTime = 0.0f;
		float realSpeed = 0.0f;
		
		bool lockMouse = false;

		Object(std::vector<Mesh>& meshes);
		void setMeshOffset(glm::vec3 offset, unsigned int index);
		void HandleInput(GLFWwindow* window, glm::vec3 Orientation, float currentTime, int windowWidth, int windowHeight);
		void Draw(std::vector<Shader>& shader, Camera& camera);
		void rotateMesh(unsigned int index, float angle);
};

#endif