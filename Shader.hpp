
#ifndef __SHADER_HPP
#define __SHADER_HPP

#include <string>
#include <glm/glm.hpp>

class Shader
{
public:
	unsigned int ID;

	Shader(const char *vertex_path, const char *fragment_path);

	void use();
	
	// utility uniform functions
	void set_bool(const std::string &name, bool value) const;
	void set_int(const std::string &name, int value) const;
	void set_float(const std::string &name, float value) const;
	void set_mat4(const std::string &name, const glm::mat4 &mat) const;

protected:
	void check_compile_errors(unsigned int shader, std::string type);
};

#endif // __SHADER_HPP
