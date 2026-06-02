//
// Created by wesle on 6/1/2026.
//

#ifndef RENDERER_GENERATOR_H
#define RENDERER_GENERATOR_H

#include <cmath>
#include <vector>
#include <glm/glm.hpp>

class generator
{
private:
    int numVertices, numIndices, precision, inner, outer;
    std::vector<glm::vec3> vertices, normals, sTangents, tTangents;
    std::vector<glm::vec2> texCoords;
    std::vector<int> indices;
    void init();
    float toRadians(float degrees);

public:
    Generator();
    Generator(float inner, float outer, int precisionIn, std::vector<glm::vec3> point);
    int getNumVertices();
    int getNumIndices();
    std::vector<int> getIndices();
    std::vector<glm::vec3> getVertices();
    std::vector<glm::vec2> getTexCoords();
    std::vector<glm::vec3> getNormals();
    std::vector<glm::vec3> getStangents();
    std::vector<glm::vec3> getTtangents();
};


#endif //RENDERER_GENERATOR_H
