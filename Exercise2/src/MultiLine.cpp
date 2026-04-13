#include "MultiLine.h"

#include <iostream>
#include <cmath>

namespace cgCourse
{
	MultiLine::MultiLine(const std::vector<glm::vec3> & _vertices,
						 const std::vector<glm::vec3> & _normals
						 ) : Shape()
	{
		// TODO: initialize positions, colors, and normals
		float lineLength = 0.4f; 

        for (size_t i = 0; i < _vertices.size(); ++i) {
    
            positions.push_back(_vertices[i]);
            colors.push_back(glm::vec3(1.0f, 1.0f, 0.0f));

            positions.push_back(_vertices[i] + (_normals[i] * lineLength));
            colors.push_back(glm::vec3(1.0f, 0.0f, 0.0f));
        }
	}

	void MultiLine::draw() const
	{
		glBindVertexArray(vaoID);
		// TODO: complete the code to draw the normals as lines
		glDrawArrays(GL_LINES, 0, positions.size());
        
        glBindVertexArray(0);
	}
}

