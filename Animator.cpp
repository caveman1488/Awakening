#include "Animator.h"



Animator::Animator(const std::string &IdleSpriteSheet,
					const std::string &WalkingSpriteSheet,
					const std::string &AttackingSpriteSHeet)
{
}

void Animator::Animate()
{
	switch (this->aStates)
	{
		case AnimationStates::Idle:
		{
			this->activeTexture = tIdle;	
		}
	}
}

sf::Texture* Animator::GetTextureAddy(const AnimationStates &aStates)
{
	switch (aStates)
	{
		case AnimationStates::Idle :
			std::cout << "idle" << std::endl;
			return &this->tIdle;
			break;
		case AnimationStates::Walking:
			std::cout << "walking" << std::endl;
			return &this->tWalking;
			break;
		case AnimationStates::Attacking:
			std::cout << "attacking" << std::endl;
			return &this->tAttacking;
			break;
		defualt:
			break;
	}
}

Animator::~Animator()
{
}
