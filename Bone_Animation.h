//Pallavi Mekala
#pragma once

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

#define GLM_ENABLE_EXPERIMENTAL
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>	

class Bone_Animation
{
public:
	Bone_Animation();
	~Bone_Animation();

	void init();
	void update(float delta_time);
	void reset();
	glm::mat4 blueRotate(glm::mat4 bone);
	glm::mat4 purpleRotate(glm::mat4 bone);
	glm::mat4 yellowRotate(glm::mat4 bone);

public:

	// Here the head of each vector is the root bone
	std::vector<glm::vec3> scale_vector;
	std::vector<glm::vec3> rotation_degree_vector;
	std::vector<glm::vec4> colors;
	std::vector<glm::vec3> root_positions;

	//stores user input rotations
	float rotations[9] = { 0.0f, 0.0f , 0.0f , 0.0f , 0.0f , 0.0f , 0.0f , 0.0f, 0.0f };

	//keeps track of what level of the arm we are rotating at
	int level = 1;
};
