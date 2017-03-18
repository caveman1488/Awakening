#pragma once
#include <iostream>
#include <SFML\Graphics.hpp>

#include "Animator.h"

class Entity
{
	private:
	

	public:
		Entity();

		sf::RenderStates* GetRStateAddy();		
		sf::VertexArray* GetVArrayAddy();

		sf::VertexArray vArray;
		sf::VertexArray SetUpVertexArray(const float(&verticies)[16]);
		
		sf::RenderStates rStates;				

		/*virtual Animator CreateAnimator(const std::string &idle,
										const std::string &walking,
										const std::string &attacking) = 0;*/
		Animator anim = Animator::CreateAnimator();


		~Entity();
};

