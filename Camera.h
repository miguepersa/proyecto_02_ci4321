#ifndef CAMERA_H
#define CAMERA_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/rotate_vector.hpp>
#include <glm/gtx/vector_angle.hpp>
#include "Shader.h"

class Camera {

	public: 
		glm::vec3 Position;
		glm::vec3 Orientation = glm::vec3(0.0f, 0.0f, -1.0f);
		glm::vec3 Up = glm::vec3(0.0f, 1.0f, 0.0f);
		glm::mat4 cameraMatrix = glm::mat4(1.0f);

		bool firstClick = true;

		int width;
		int height;
		float yaw = -90.0f;
		float pitch = 0.0f;
		float speed = 5.0f;
		float sensitivity = 100.0f;
		float prevTime = 0.0f;
		float deltaTime = 0.0f;
		float realSpeed = 0.0f;

		// Camera constructor to set up initial values
		Camera(int width, int height, glm::vec3 position);

		// Updates the camera matrix to the Vertex Shader
		void updateMatrix(float FOVdeg, float nearPlane, float farPlane);

		glm::mat4 getOrthoMatrix(float left, float right, float bottom, float top, float near, float far);

		// Exports the camera matrix to a shader
		void Matrix(Shader& shader, const char* uniform);
		void followObject(glm::vec3 position, glm::vec3 orientation);
		// Handles camera inputs
		void Inputs(GLFWwindow* window, float currentTime, glm::vec3 target);
};

#endif