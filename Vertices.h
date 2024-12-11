#ifndef VERTICES_H
#define VERTICES_H

#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include "VertexBuffer.h"

// Vertices coordinates
Vertex tankVertices[] =
{ //               COORDINATES           /            COLORS          /           NORMALS         /       TEXTURE COORDINATES    //
	Vertex{glm::vec3(-1.0f,  0.0f,  2.0f),	glm::vec3(1.0f, 1.0f, 1.0f),    glm::vec3(0.0f,-1.0f, 0.0f), glm::vec2(2.0f, 0.0f)},
	Vertex{glm::vec3(-1.0f,  0.0f, -2.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(0.0f,-1.0f, 0.0f), glm::vec2(2.0f, 2.0f)},
	Vertex{glm::vec3( 1.0f,  0.0f, -2.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(0.0f,-1.0f, 0.0f), glm::vec2(0.0f, 2.0f)},
	Vertex{glm::vec3( 1.0f,  0.0f,  2.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(0.0f,-1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-1.0f,  0.0f,  2.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3( 1.0f,  1.0f,  2.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(2.0f, 2.0f)},
	Vertex{glm::vec3(-1.0f,  1.0f,  2.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(0.0f, 2.0f)},
	Vertex{glm::vec3( 1.0f,  0.0f,  2.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(2.0f, 0.0f)},
	Vertex{glm::vec3( 1.0f,  0.0f,  2.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3( 1.0f,  1.0f,  2.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 2.0f)},
	Vertex{glm::vec3( 1.0f,  1.0f, -2.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(2.0f, 2.0f)},
	Vertex{glm::vec3( 1.0f,  0.0f, -2.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(2.0f, 0.0f)},
	Vertex{glm::vec3( 1.0f,  0.0f, -2.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(0.0f, 0.0f,-1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3( 1.0f,  1.0f, -2.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(0.0f, 0.0f,-1.0f), glm::vec2(0.0f, 2.0f)},
	Vertex{glm::vec3(-1.0f,  1.0f, -2.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(0.0f, 0.0f,-1.0f), glm::vec2(2.0f, 2.0f)},
	Vertex{glm::vec3(-1.0f,  0.0f, -2.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(0.0f, 0.0f,-1.0f), glm::vec2(2.0f, 0.0f)},
	Vertex{glm::vec3(-1.0f,  0.0f, -2.0f),	glm::vec3(1.0f, 1.0f, 1.0f),    glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-1.0f,  1.0f, -2.0f),	glm::vec3(1.0f, 1.0f, 1.0f),    glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 2.0f)},
	Vertex{glm::vec3(-1.0f,  1.0f,  2.0f),	glm::vec3(1.0f, 1.0f, 1.0f),    glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(2.0f, 2.0f)},
	Vertex{glm::vec3(-1.0f,  0.0f,  2.0f),	glm::vec3(1.0f, 1.0f, 1.0f),    glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(2.0f, 0.0f)},
	Vertex{glm::vec3(-1.0f,  1.0f,  2.0f),	glm::vec3(1.0f, 1.0f, 1.0f),    glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-1.0f,  1.0f, -2.0f),	glm::vec3(1.0f, 1.0f, 1.0f),    glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 2.0f)},
	Vertex{glm::vec3( 1.0f,  1.0f, -2.0f),	glm::vec3(1.0f, 1.0f, 1.0f),    glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(2.0f, 2.0f)},
	Vertex{glm::vec3( 1.0f,  1.0f,  2.0f),	glm::vec3(1.0f, 1.0f, 1.0f),    glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(2.0f, 0.0f)},
};
// Indices for vertices order
GLuint tankIndices[] =
{
	 0,		 1,		 2, // bottom side
	 0,		 2,		 3, // bottom side
	 4,		 5,		 6, // back side
	 4,		 7,		 5, // back side
	 8,		 9,		10, // right side
	 8,		10,		11, // right side
	12,		13,		14, // front side
	12,		14,		15, // front side
	16,		17,		18, // left side
	16,		18,		19, // left side
	20,		21,		22, // top side
	20,		22,		23, // top side
};


// Torreta
Vertex turretVertices[] =
{
	//               COORDINATES           /            COLORS          /           NORMALS         /       TEXTURE COORDINATES    //
	Vertex{glm::vec3(-0.5f,  0.0f,  0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),    glm::vec3(0.0f,-1.0f, 0.0f), glm::vec2(2.0f, 0.0f)},
	Vertex{glm::vec3(-0.5f,  0.0f, -0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(0.0f,-1.0f, 0.0f), glm::vec2(2.0f, 2.0f)},
	Vertex{glm::vec3( 0.5f,  0.0f, -0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(0.0f,-1.0f, 0.0f), glm::vec2(0.0f, 2.0f)},
	Vertex{glm::vec3( 0.5f,  0.0f,  0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(0.0f,-1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-0.5f,  0.0f,  0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3( 0.5f,  0.7f,  0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(2.0f, 2.0f)},
	Vertex{glm::vec3(-0.5f,  0.7f,  0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(0.0f, 2.0f)},
	Vertex{glm::vec3( 0.5f,  0.0f,  0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(2.0f, 0.0f)},
	Vertex{glm::vec3( 0.5f,  0.0f,  0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3( 0.5f,  0.7f,  0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 2.0f)},
	Vertex{glm::vec3( 0.5f,  0.7f, -0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(2.0f, 2.0f)},
	Vertex{glm::vec3( 0.5f,  0.0f, -0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(2.0f, 0.0f)},
	Vertex{glm::vec3( 0.5f,  0.0f, -0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(0.0f, 0.0f,-1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3( 0.5f,  0.7f, -0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(0.0f, 0.0f,-1.0f), glm::vec2(0.0f, 2.0f)},
	Vertex{glm::vec3(-0.5f,  0.7f, -0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(0.0f, 0.0f,-1.0f), glm::vec2(2.0f, 2.0f)},
	Vertex{glm::vec3(-0.5f,  0.0f, -0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(0.0f, 0.0f,-1.0f), glm::vec2(2.0f, 0.0f)},
	Vertex{glm::vec3(-0.5f,  0.0f, -0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),    glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-0.5f,  0.7f, -0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),    glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 2.0f)},
	Vertex{glm::vec3(-0.5f,  0.7f,  0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),    glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(2.0f, 2.0f)},
	Vertex{glm::vec3(-0.5f,  0.0f,  0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),    glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(2.0f, 0.0f)},
	Vertex{glm::vec3(-0.5f,  0.7f,  0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),    glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-0.5f,  0.7f, -0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),    glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 2.0f)},
	Vertex{glm::vec3( 0.5f,  0.7f, -0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),    glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(2.0f, 2.0f)},
	Vertex{glm::vec3( 0.5f,  0.7f,  0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),    glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(2.0f, 0.0f)},
};

// index buff torreta
GLuint turretIndices[] =
{
	0,		 1,		 2, // bottom side
	 0,		 2,		 3, // bottom side
	 4,		 5,		 6, // back side
	 4,		 7,		 5, // back side
	 8,		 9,		10, // right side
	 8,		10,		11, // right side
	12,		13,		14, // front side
	12,		14,		15, // front side
	16,		17,		18, // left side
	16,		18,		19, // left side
	20,		21,		22, // top side
	20,		22,		23, // top side
};

Vertex projectileVertices[] =
{
	Vertex{glm::vec3(-0.1f, -0.1f, -0.1f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.1f, -0.1f, -0.1f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(0.1f, -0.1f,  0.1f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-0.1f, -0.1f,  0.1f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-0.1f,  0.1f, -0.1f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec3(0.0f,  1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.1f,  0.1f, -0.1f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec3(0.0f,  1.0f, 0.0f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(0.1f,  0.1f,  0.1f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec3(0.0f,  1.0f, 0.0f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-0.1f,  0.1f,  0.1f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec3(0.0f,  1.0f, 0.0f), glm::vec2(0.0f, 1.0f)},
};

GLuint projectileIndices[] =
{
	0, 1, 2, 0, 2, 3,
	4, 5, 6, 4, 6, 7,
	3, 2, 6, 3, 6, 7,
	0, 1, 5, 0, 5, 4,
	1, 2, 6, 1, 6, 5,
	0, 3, 7, 0, 7, 4
};

Vertex cubeVertices[] =
{ //               COORDINATES           /            COLORS          /           NORMALS         /       TEXTURE COORDINATES    //
	Vertex{glm::vec3(-0.5f,  -0.5f,  0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),    glm::vec3(0.0f,-1.0f, 0.0f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(-0.5f,  -0.5f, -0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(0.0f,-1.0f, 0.0f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(0.5f,  -0.5f, -0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(0.0f,-1.0f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(0.5f,  -0.5f,  0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(0.0f,-1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-0.5f,  -0.5f,  0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.5f,   0.5f,  0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-0.5f,   0.5f,  0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(0.5f,  -0.5f,  0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(0.5f,  -0.5f,  0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.5f,   0.5f,  0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(0.5f,   0.5f, -0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(0.5f,  -0.5f, -0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(0.5f,  -0.5f, -0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(0.0f, 0.0f,-1.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.5f,   0.5f, -0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(0.0f, 0.0f,-1.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-0.5f,   0.5f, -0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(0.0f, 0.0f,-1.0f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-0.5f,  -0.5f, -0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec3(0.0f, 0.0f,-1.0f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(-0.5f,  -0.5f, -0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),    glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-0.5f,   0.5f, -0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),    glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-0.5f,   0.5f,  0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),    glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-0.5f,  -0.5f,  0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),    glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(-0.5f,   0.5f,  0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),    glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-0.5f,   0.5f, -0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),    glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(0.5f,   0.5f, -0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),    glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(0.5f,   0.5f,  0.5f),	glm::vec3(1.0f, 1.0f, 1.0f),    glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 0.0f)},
};

GLuint cubeIndices[] =
{
	 0,		 1,		 2,
	 0,		 2,		 3,
	 4,		 5,		 6,
	 4,		 7,		 5,
	 8,		 9,		10,
	 8,		10,		11,
	12,		13,		14,
	12,		14,		15,
	16,		17,		18,
	16,		18,		19,
	20,		21,		22,
	20,		22,		23,
};

Vertex pyramidVertices[] =
{	//     COORDINATES						 /				COLORS				/			NORMALS					/      TexCoord       //
	Vertex{glm::vec3(-0.5f, 0.0f,  0.5f),     glm::vec3(0.83f, 0.70f, 0.44f), 	 glm::vec3(0.0f, -1.0f, 0.0f),		glm::vec2(0.0f, 0.0f)},    // Bottom side
	Vertex{glm::vec3(-0.5f, 0.0f, -0.5f),     glm::vec3(0.83f, 0.70f, 0.44f),	 glm::vec3(0.0f, -1.0f, 0.0f),		glm::vec2(0.0f, 1.0f)},    // Bottom side
	Vertex{glm::vec3(0.5f, 0.0f, -0.5f),     glm::vec3(0.83f, 0.70f, 0.44f),	 glm::vec3(0.0f, -1.0f, 0.0f),		glm::vec2(1.0f, 1.0f)},    // Bottom side
	Vertex{glm::vec3(0.5f, 0.0f,  0.5f),     glm::vec3(0.83f, 0.70f, 0.44f),	 glm::vec3(0.0f, -1.0f, 0.0f),		glm::vec2(1.0f, 0.0f)},    // Bottom side

	Vertex{glm::vec3(-0.5f, 0.0f,  0.5f),     glm::vec3(0.83f, 0.70f, 0.44f), 	 glm::vec3(-0.8f, 0.5f,  0.0f),		glm::vec2(0.0f, 0.0f)},    // Left Side
	Vertex{glm::vec3(-0.5f, 0.0f, -0.5f),     glm::vec3(0.83f, 0.70f, 0.44f),	 glm::vec3(-0.8f, 0.5f,  0.0f),		glm::vec2(1.0f, 0.0f)},    // Left Side
	Vertex{glm::vec3(0.0f, 0.8f,  0.0f),     glm::vec3(0.92f, 0.86f, 0.76f),	 glm::vec3(-0.8f, 0.5f,  0.0f),		glm::vec2(0.5f, 1.0f)},    // Left Side

	Vertex{glm::vec3(-0.5f, 0.0f, -0.5f),     glm::vec3(0.83f, 0.70f, 0.44f),	 glm::vec3(0.0f, 0.5f, -0.8f),		glm::vec2(1.0f, 0.0f)},    // Non-facing side
	Vertex{glm::vec3(0.5f, 0.0f, -0.5f),     glm::vec3(0.83f, 0.70f, 0.44f),	 glm::vec3(0.0f, 0.5f, -0.8f),		glm::vec2(0.0f, 0.0f)},    // Non-facing side
	Vertex{glm::vec3(0.0f, 0.8f,  0.0f),     glm::vec3(0.92f, 0.86f, 0.76f),	 glm::vec3(0.0f, 0.5f, -0.8f),		glm::vec2(0.5f, 1.0f)},    // Non-facing side

	Vertex{glm::vec3(0.5f, 0.0f, -0.5f),     glm::vec3(0.83f, 0.70f, 0.44f),	 glm::vec3(0.8f, 0.5f,  0.0f),		glm::vec2(0.0f, 0.0f)},    // Right side
	Vertex{glm::vec3(0.5f, 0.0f,  0.5f),     glm::vec3(0.83f, 0.70f, 0.44f),	 glm::vec3(0.8f, 0.5f,  0.0f),		glm::vec2(1.0f, 0.0f)},    // Right side
	Vertex{glm::vec3(0.0f, 0.8f,  0.0f),     glm::vec3(0.92f, 0.86f, 0.76f),	 glm::vec3(0.8f, 0.5f,  0.0f),		glm::vec2(0.5f, 1.0f)},    // Right side

	Vertex{glm::vec3(0.5f, 0.0f,  0.5f),     glm::vec3(0.83f, 0.70f, 0.44f),	 glm::vec3(0.0f, 0.5f,  0.8f),		glm::vec2(1.0f, 0.0f)},    // Facing side
	Vertex{glm::vec3(-0.5f, 0.0f,  0.5f),     glm::vec3(0.83f, 0.70f, 0.44f), 	 glm::vec3(0.0f, 0.5f,  0.8f),		glm::vec2(0.0f, 0.0f)},    // Facing side
	Vertex{glm::vec3(0.0f, 0.8f,  0.0f),     glm::vec3(0.92f, 0.86f, 0.76f),	 glm::vec3(0.0f, 0.5f,  0.8f),		glm::vec2(0.5f, 1.0f)}    // Facing side
};

GLuint pyramidIndices[] =
{
	0, 1, 2, // Bottom side
	0, 2, 3, // Bottom side
	4, 6, 5, // Left side
	7, 9, 8, // Non-facing side
	10, 12, 11, // Right side
	13, 15, 14 // Facing side
};

float skyboxVertices[] =
{
	//   Coordinates
	-1.0f, -1.0f,  1.0f,//        7--------6
	 1.0f, -1.0f,  1.0f,//       /|       /|
	 1.0f, -1.0f, -1.0f,//      4--------5 |
	-1.0f, -1.0f, -1.0f,//      | |      | |
	-1.0f,  1.0f,  1.0f,//      | 3------|-2
	 1.0f,  1.0f,  1.0f,//      |/       |/
	 1.0f,  1.0f, -1.0f,//      0--------1
	-1.0f,  1.0f, -1.0f
};

unsigned int skyboxIndices[] =
{
	// Right
	1, 2, 6,
	6, 5, 1,
	// Left
	0, 4, 7,
	7, 3, 0,
	// Top
	4, 5, 6,
	6, 7, 4,
	// Bottom
	0, 3, 2,
	2, 1, 0,
	// Back
	0, 1, 5,
	5, 4, 0,
	// Front
	3, 7, 6,
	6, 2, 3
};

Vertex floorVertices[] =
{ //               COORDINATES           /            COLORS          /           NORMALS         /       TEXTURE COORDINATES    //
	Vertex{glm::vec3(-100.0f, 0.0f,  100.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-100.0f, 0.0f, -100.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 25.0f)},
	Vertex{glm::vec3( 100.0f, 0.0f, -100.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(25.0f, 25.0f)},
	Vertex{glm::vec3( 100.0f, 0.0f,  100.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(25.0f, 0.0f)}
};

// Indices for vertices order
GLuint floorIndices[] =
{
	0, 1, 2,
	0, 2, 3
};

Vertex lightVertices[] =
{ //     COORDINATES     //
	Vertex{glm::vec3(-0.1f, -0.1f,  0.1f)},
	Vertex{glm::vec3(-0.1f, -0.1f, -0.1f)},
	Vertex{glm::vec3( 0.1f, -0.1f, -0.1f)},
	Vertex{glm::vec3( 0.1f, -0.1f,  0.1f)},
	Vertex{glm::vec3(-0.1f,  0.1f,  0.1f)},
	Vertex{glm::vec3(-0.1f,  0.1f, -0.1f)},
	Vertex{glm::vec3( 0.1f,  0.1f, -0.1f)},
	Vertex{glm::vec3( 0.1f,  0.1f,  0.1f)}
};

GLuint lightIndices[] =
{
	0, 1, 2,
	0, 2, 3,
	0, 4, 7,
	0, 7, 3,
	3, 7, 6,
	3, 6, 2,
	2, 6, 5,
	2, 5, 1,
	1, 5, 4,
	1, 4, 0,
	4, 5, 6,
	4, 6, 7
};

#endif