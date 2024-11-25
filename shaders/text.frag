#version 330 core
in vec2 TexCoord;
out vec4 FragColor;

uniform sampler2D textAtlas;

void main() {
    vec4 sampled = texture(textAtlas, TexCoord);
    FragColor = sampled;
}
