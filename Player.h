#pragma once
#include "Entity.h"

class Player : public Entity
{
	private:

	public:
		Player();				

		Animator CreateAnimator(const std::string &idle,
								const std::string &walking,
								const std::string &attacking);
			
			~Player();				
};


