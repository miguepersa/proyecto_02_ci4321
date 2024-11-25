#include "Camera.h"
#include <glm/gtc/matrix_transform.hpp>

Camera::Camera(int width, int height, glm::vec3 position){

	Camera::width = width;
	Camera::height = height;
	Position = position;
}

void Camera::updateMatrix(float FOVdeg, float nearPlane, float farPlane) {

	// Initializes matrices since otherwise they will be the null matrix
	glm::mat4 view = glm::mat4(1.0f);
	glm::mat4 projection = glm::mat4(1.0f);

	// Makes camera look in the right direction from the right position
	view = glm::lookAt(Position, Position + Orientation, Up);
	// Adds perspective to the scene
	projection = glm::perspective(glm::radians(FOVdeg), (float)width / height, nearPlane, farPlane);

	// Sets new camera matrix
	cameraMatrix = projection * view;
}

void Camera::Matrix(Shader& shader, const char* uniform) {

	// Exports camera matrix
	glUniformMatrix4fv(glGetUniformLocation(shader.ID, uniform), 1, GL_FALSE, glm::value_ptr(cameraMatrix));
}

glm::mat4 Camera::getOrthoMatrix(float left, float right, float bottom, float top, float near, float far) {
	return glm::ortho(left, right, bottom, top, near, far);
}

void Camera::followObject(glm::vec3 position, glm::vec3 orientation) {
	Position = position + (10.0f * glm::vec3(-Orientation.x, 0.3f, -Orientation.z));
	Orientation = glm::normalize(orientation);
}

void Camera::Inputs(GLFWwindow* window, float currentTime, glm::vec3 targetPosition) {

	deltaTime = currentTime - prevTime;
	prevTime = currentTime;
	realSpeed = speed * deltaTime;

	if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS) {

		Position += realSpeed * glm::vec3(Orientation.x, 0.0f, Orientation.z);
	}

	if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS) {

		Position += realSpeed * -glm::normalize(glm::cross(Orientation, Up));
	}

	if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS) {

		Position += realSpeed * -glm::vec3(Orientation.x, 0.0f, Orientation.z);
	}

	if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS) {

		Position += realSpeed * glm::normalize(glm::cross(Orientation, Up));
	}

	if (glfwGetKey(window, GLFW_KEY_SPACE) == GLFW_PRESS) {
	
		Position += realSpeed * Up;
	}
	
	if (glfwGetKey(window, GLFW_KEY_LEFT_CONTROL) == GLFW_PRESS) {
	
		if (Position.y >= 0.0f) Position += realSpeed * -Up;
		else Position.y = 0.0f;
	}

	if (glfwGetKey(window, GLFW_KEY_LEFT_SHIFT) == GLFW_PRESS) {

		speed = 15.0f;

	} else if (glfwGetKey(window, GLFW_KEY_LEFT_SHIFT) == GLFW_RELEASE) {

		speed = 5.0f;
	}

	if (glfwGetMouseButton(window, GLFW_MOUSE_BUTTON_LEFT) == GLFW_PRESS) {
		glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_HIDDEN);

		if (firstClick) {
			glfwSetCursorPos(window, (width / 2), (height / 2));
			firstClick = false;
		}

		double mouseX, mouseY;
		glfwGetCursorPos(window, &mouseX, &mouseY);

		float rotx = sensitivity * (float)(mouseY - (height / 2)) / height;
		float roty = sensitivity * (float)(mouseX - (width / 2)) / width;

		// Ajusta yaw y pitch en función del movimiento del mouse
		yaw += roty;
		pitch -= rotx;

		// Limita el pitch para evitar que la cámara se voltee
		if (pitch > 89.0f) pitch = 89.0f;
		if (pitch < -89.0f) pitch = -89.0f;

		// Calcula la nueva orientación de la cámara
		Orientation.x = cos(glm::radians(yaw)) * cos(glm::radians(pitch));
		Orientation.y = sin(glm::radians(pitch));
		Orientation.z = sin(glm::radians(yaw)) * cos(glm::radians(pitch));
		Orientation = glm::normalize(Orientation);

		// Restablece el cursor al centro de la pantalla
		glfwSetCursorPos(window, (width / 2), (height / 2));
	}
	else if (glfwGetMouseButton(window, GLFW_MOUSE_BUTTON_LEFT) == GLFW_RELEASE) {
		glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);
		firstClick = true;
	}

}  