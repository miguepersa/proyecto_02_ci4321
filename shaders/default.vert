#version 330 core

// Positions/Coordinates
layout (location = 0) in vec3 aPos;
// Normals
layout (location = 1) in vec3 aNormal;
// Colors
layout (location = 2) in vec3 aColor;
// Texture Coordinates
layout (location = 3) in vec2 aTex;

// Outputs the color for the Fragment Shader
out vec3 color;
// Outputs the texture coordinates to the Fragment Shader
out vec2 texCoord;
// Outputs the transformed normal for the Fragment Shader
out vec3 Normal;
// Outputs the transformed position for the Fragment Shader
out vec3 currentPos;

// Imports the camera matrix from the main function
uniform mat4 camMatrix;
// Imports the model matrix from the main function
uniform mat4 model;

uniform vec3 position;

uniform float rotationAngle;
uniform float elevationAngle;

// Rotation matrices
mat4 rotateElevation(float angle) 
{
    float cosAngle = cos(angle);
    float sinAngle = sin(angle);

    return mat4(
        1.0, 0.0,      0.0,       0.0,
        0.0, cosAngle, -sinAngle, 0.0,
        0.0, sinAngle, cosAngle,  0.0,
        0.0, 0.0,      0.0,       1.0
    );
}

mat4 rotate(float angle) 
{
    float cosAngle = cos(angle);
    float sinAngle = sin(angle);

    return mat4(
        cosAngle, 0.0, sinAngle, 0.0,
        0.0,      1.0, 0.0,      0.0,
       -sinAngle, 0.0, cosAngle, 0.0,
        0.0,      0.0, 0.0,      1.0
    );
}

void main()
{
    // Combine rotation matrices
    mat4 combinedRotation = rotateElevation(elevationAngle) * rotate(rotationAngle);

    // Transform position
    vec4 worldPos = model * vec4(aPos, 1.0f);
    currentPos = vec3(combinedRotation * worldPos) + position;

    // Transform normal
    Normal = mat3(transpose(inverse(model))) * aNormal;

    // Pass data to fragment shader
    color = aColor;
    texCoord = aTex;

    // Final vertex position
    gl_Position = camMatrix * vec4(currentPos, 1.0);
}
