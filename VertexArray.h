#ifndef VERTEX_ARRAY_H
#define VERTEX_ARRAY_H

#include <glad/glad.h>
#include "VertexBuffer.h"

class VertexArray {

	public:
		GLuint ID;
		VertexArray();

		void linkAttrib(VertexBuffer& vertexBuffer, GLuint layout, GLuint numComponents, GLenum type, GLsizeiptr stride, void* offset);
		void Bind();
		void Unbind();
		void Delete();
};

#endif