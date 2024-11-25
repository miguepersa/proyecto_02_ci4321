#include "VertexBuffer.h"

VertexBuffer::VertexBuffer(std::vector<Vertex>& vertices) {
	// Generate Vertex Buffer Object with 1 object
	glGenBuffers(1, &ID);

	// Bind the VBO as an Array Buffer
	glBindBuffer(GL_ARRAY_BUFFER, ID);

	// Add the data to the VBO object
	glBufferData(GL_ARRAY_BUFFER, vertices.size() * sizeof(Vertex), vertices.data(), GL_STATIC_DRAW);


}

void VertexBuffer::Bind() {
	
	// Bind the VBO as an Array Buffer
	glBindBuffer(GL_ARRAY_BUFFER, ID);

}

void VertexBuffer::Unbind() {
	
	// Bind the VBO as an Array Buffer
	glBindBuffer(GL_ARRAY_BUFFER, 0);

}

void VertexBuffer::Delete() {
	glDeleteBuffers(1, &ID);

}