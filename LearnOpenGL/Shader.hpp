//
//  Shader.hpp
//  LearnOpenGL
//
//  Created by 言有理 on 2022/3/17.
//

#ifndef Shader_hpp
#define Shader_hpp

#include <glad/glad.h> // 包含glad来获取所有的必须OpenGL头文件

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Shader {
public:
    unsigned int ID;
    Shader(const char* vertexPath, const char* fragmentPath);
    
    void use();
    
    void setBool(const std::string &name, bool value) const;
    void setInt(const std::string &name, int value) const;
    void setFloat(const std::string &name, float value) const;
};

#endif /* Shader_hpp */
