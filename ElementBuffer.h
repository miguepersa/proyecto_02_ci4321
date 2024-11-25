#ifndef ELEMENT_BUFFER_H
#define ELEMENT_BUFFER_H

#include <glad/glad.h>
#include <vector>

class ElementBuffer {

public:
	GLuint ID;
	ElementBuffer(std::vector<GLuint>& indices);

	void Bind();
	void Unbind();
	void Delete();
};

#endif