#version 330 core
layout (location = 0) in vec3 aPos;

uniform mat4 orthoMatrix;

void main() {
    gl_Position = orthoMatrix * vec4(aPos, 1.0);
}