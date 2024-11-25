#include "Shader.h"

std::string get_file_contents(const char* filename) {
	
	std::ifstream in(filename, std::ios::binary);

	if (in) {
		std::string contents;
		in.seekg(0, std::ios::end);
		contents.resize(in.tellg());
		in.seekg(0, std::ios::beg);
		in.read(&contents[0], contents.size());
		in.close();
		return(contents);
	}
	throw (errno);
}


Shader::Shader(const char* vertex_file, const char* fragment_file) {
	std::string vertex_code = get_file_contents(vertex_file);
	std::string fragment_code = get_file_contents(fragment_file);

	const char* vertex_source = vertex_code.c_str();
	const char* fragment_source = fragment_code.c_str();

	// Create vertex shader obj
	GLuint vertexShader = glCreateShader(GL_VERTEX_SHADER);

	// Attach vertex shader source to vertex shader obj
	glShaderSource(vertexShader, 1, &vertex_source, NULL);

	// Compile the vertex shader
	glCompileShader(vertexShader);
	compileErrors(vertexShader, "VERTEX");

	// Create fragment shader obj
	GLuint fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);

	// Attach fragment shader source to fragment shader obj
	glShaderSource(fragmentShader, 1, &fragment_source, NULL);

	// Compile fragment shader
	glCompileShader(fragmentShader);
	compileErrors(fragmentShader, "FRAGMENT");

	// Create shader program obj
	ID = glCreateProgram();

	// Attach vertex shader to shader program
	glAttachShader(ID, vertexShader);

	// Attach fragment shader to shader program
	glAttachShader(ID, fragmentShader);

	// Link shaders to program
	glLinkProgram(ID);
	compileErrors(ID, "PROGRAM");

	// Delete used shaders objects from memory
	glDeleteShader(vertexShader);
	glDeleteShader(fragmentShader);

}

void Shader::Activate() {
	// Telling OpenGL to use the shaders
	glUseProgram(ID);

}

void Shader::Delete() {
	
	glDeleteProgram(ID);

}

void Shader::compileErrors(unsigned int shader, const char* type) {

	GLint compiled;
	char infoLog[1024];

	if (type != "PROGRAM") {

		glGetShaderiv(shader, GL_COMPILE_STATUS, &compiled);

		if (compiled == GL_FALSE) {
			
			glGetShaderInfoLog(shader, 1024, NULL, infoLog);

			std::cout << "SHADER COMPILATION ERROR: " << type << "\n" << std::endl;
		}
	}
	else {

		glGetProgramiv(shader, GL_COMPILE_STATUS, &compiled);

		if (compiled == GL_FALSE) {

			glGetShaderInfoLog(shader, 1024, NULL, infoLog);

			std::cout << "SHADER LINKING ERROR: " << type << "\n" << std::endl;
		}
	}
}