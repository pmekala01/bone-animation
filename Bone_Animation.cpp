#include "Bone_Animation.h"


Bone_Animation::Bone_Animation()
{
}

Bone_Animation::~Bone_Animation()
{
}

void Bone_Animation::init()
{
	root_positions = {
		{2.0f, 1.0f, 2.0f},
		{2.0f, 3.5f, 2.0f},
		{2.0f, 7.0f, 2.0f},
		{2.0f, 9.5f, 2.0f}
	};

	scale_vector =
	{
		{1.0f,1.0f,1.0f},
		{0.5f,4.0f,0.5f},
		{0.5f,3.0f,0.5f},
		{0.5f,2.0f,0.5f}
	};

	rotation_degree_vector =
	{
		{0.0f,0.0f,0.0f},
		{0.0f,0.0f,0.0f},
		{0.0f,0.0f,0.0f},
		{0.0f,0.0f,0.0f}
	};

	colors =
	{
		{0.7f,0.0f,0.0f,1.0f},
		{0.7f,0.7f,0.0f,1.0f},
		{0.7f,0.0f,0.7f,1.0f},
		{0.0f,0.7f,0.7f,1.0f}
	};
}

void Bone_Animation::update(float delta_time)
{
}

glm::mat4 Bone_Animation::blueRotate(glm::mat4 bone) {
	//rotate it in y, z, x order
	if (level == 1) {
		//translate to origin
		glm::vec3 opposite = -(bone[3]);
		glm::mat4 translation = glm::translate(glm::mat4(1.0f), opposite);
		translation = glm::translate(translation, glm::vec3(0.0f, 1.0f, 0.0f));

		//rotate
		glm::mat4 rotation = glm::rotate(glm::mat4(1.0f), glm::radians(rotations[1]), glm::vec3(0.0f, 1.0f, 0.0f));
		rotation = glm::rotate(rotation, glm::radians(rotations[2]), glm::vec3(0.0f, 0.0f, 1.0f));
		rotation = glm::rotate(rotation, glm::radians(rotations[0]), glm::vec3(1.0f, 0.0f, 0.0f));

		//translate it back to it's original position; -translation vector
		opposite *= -1;
		glm::mat4 translation2 = glm::translate(glm::mat4(1.0f), opposite);
		translation2 = glm::translate(translation2, glm::vec3(0.0f, -1.0f, 0.0f));

		//final matrix calculation
		glm::mat4 transformation = translation2 * rotation * translation;
		bone = transformation * bone;
	}
	else if (level == 2) {
		//translate to origin
		glm::vec3 opposite = -(bone[3]);
		glm::mat4 translation = glm::translate(glm::mat4(1.0f), opposite);
		translation = glm::translate(translation, glm::vec3(0.0f, 4.0f, 0.0f));

		//rotate
		glm::mat4 rotation = glm::rotate(glm::mat4(1.0f), glm::radians(rotations[4]), glm::vec3(0.0f, 1.0f, 0.0f));
		rotation = glm::rotate(rotation, glm::radians(rotations[5]), glm::vec3(0.0f, 0.0f, 1.0f));
		rotation = glm::rotate(rotation, glm::radians(rotations[3]), glm::vec3(1.0f, 0.0f, 0.0f));

		//translate it back to it's original position; -translation vector
		opposite *= -1;
		glm::mat4 translation2 = glm::translate(glm::mat4(1.0f), opposite);
		translation2 = glm::translate(translation2, glm::vec3(0.0f, -4.0f, 0.0f));

		//final matrix calculation
		glm::mat4 transformation = translation2 * rotation * translation;
		bone = transformation * bone;
	}
	else {
		//translate to origin
		glm::vec3 opposite = -(bone[3]);
		glm::mat4 translation = glm::translate(glm::mat4(1.0f), opposite);
		translation = glm::translate(translation, glm::vec3(0.0f, 8.0f, 0.0f));

		//rotate
		glm::mat4 rotation = glm::rotate(glm::mat4(1.0f), glm::radians(rotations[7]), glm::vec3(0.0f, 1.0f, 0.0f));
		rotation = glm::rotate(rotation, glm::radians(rotations[8]), glm::vec3(0.0f, 0.0f, 1.0f));
		rotation = glm::rotate(rotation, glm::radians(rotations[6]), glm::vec3(1.0f, 0.0f, 0.0f));

		//translate it back to it's original position; -translation vector
		opposite *= -1;
		glm::mat4 translation2 = glm::translate(glm::mat4(1.0f), opposite);
		translation2 = glm::translate(translation2, glm::vec3(0.0f, -8.0f, 0.0f));

		//final matrix calculation
		glm::mat4 transformation = translation2 * rotation * translation;
		bone = transformation * bone;
	}

	return bone;
}
glm::mat4 Bone_Animation::purpleRotate(glm::mat4 bone) {
	//rotate it in y, z, x order
	if (level == 2) {
		//translate to origin
		glm::vec3 opposite = -(bone[3]);
		glm::mat4 translation = glm::translate(glm::mat4(1.0f), opposite);
		translation = glm::translate(translation, glm::vec3(0.0f, 1.5f, 0.0f));

		//rotate
		glm::mat4 rotation = glm::rotate(glm::mat4(1.0f), glm::radians(rotations[4]), glm::vec3(0.0f, 1.0f, 0.0f));
		rotation = glm::rotate(rotation, glm::radians(rotations[5]), glm::vec3(0.0f, 0.0f, 1.0f));
		rotation = glm::rotate(rotation, glm::radians(rotations[3]), glm::vec3(1.0f, 0.0f, 0.0f));

		//translate it back to it's original position; -translation vector
		opposite *= -1;
		glm::mat4 translation2 = glm::translate(glm::mat4(1.0f), opposite);
		translation2 = glm::translate(translation2, glm::vec3(0.0f, -1.5f, 0.0f));

		//final matrix calculation
		glm::mat4 transformation = translation2 * rotation * translation;
		bone = transformation * bone;
	}
	else {
		//translate to origin
		glm::vec3 opposite = -(bone[3]);
		glm::mat4 translation = glm::translate(glm::mat4(1.0f), opposite);
		translation = glm::translate(translation, glm::vec3(0.0f, 5.5f, 0.0f));

		//rotate
		glm::mat4 rotation = glm::rotate(glm::mat4(1.0f), glm::radians(rotations[7]), glm::vec3(0.0f, 1.0f, 0.0f));
		rotation = glm::rotate(rotation, glm::radians(rotations[8]), glm::vec3(0.0f, 0.0f, 1.0f));
		rotation = glm::rotate(rotation, glm::radians(rotations[6]), glm::vec3(1.0f, 0.0f, 0.0f));

		//translate it back to it's original position; -translation vector
		opposite *= -1;
		glm::mat4 translation2 = glm::translate(glm::mat4(1.0f), opposite);
		translation2 = glm::translate(translation2, glm::vec3(0.0f, -5.5f, 0.0f));

		//final matrix calculation
		glm::mat4 transformation = translation2 * rotation * translation;
		bone = transformation * bone;
	}

	return bone;
}

glm::mat4 Bone_Animation::yellowRotate(glm::mat4 bone) {
	//translate to origin
	glm::vec3 opposite = -(bone[3]);
	glm::mat4 translation = glm::translate(glm::mat4(1.0f), opposite);
	translation = glm::translate(translation, glm::vec3(0.0f, 2.0f, 0.0f));

	//rotate
	glm::mat4 rotation = glm::rotate(glm::mat4(1.0f), glm::radians(rotations[7]), glm::vec3(0.0f, 1.0f, 0.0f));
	rotation = glm::rotate(rotation, glm::radians(rotations[8]), glm::vec3(0.0f, 0.0f, 1.0f));
	rotation = glm::rotate(rotation, glm::radians(rotations[6]), glm::vec3(1.0f, 0.0f, 0.0f));

	//translate it back to it's original position; -translation vector
	opposite *= -1;
	glm::mat4 translation2 = glm::translate(glm::mat4(1.0f), opposite);
	translation2 = glm::translate(translation2, glm::vec3(0.0f, -2.0f, 0.0f));

	//final matrix calculation
	glm::mat4 transformation = translation2 * rotation * translation;
	bone = transformation * bone;

	return bone;
}

void Bone_Animation::reset()
{
	//set all rotation degrees to 0
	rotations[0] = 0.0f;
	rotations[1] = 0.0f;
	rotations[2] = 0.0f;
	rotations[3] = 0.0f;
	rotations[4] = 0.0f;
	rotations[5] = 0.0f;
	rotations[6] = 0.0f;
	rotations[7] = 0.0f;
	rotations[8] = 0.0f;
}

