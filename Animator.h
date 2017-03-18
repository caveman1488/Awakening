#pragma once
#include <iostream>
#include <SFML\Graphics.hpp>

enum AnimationStates
{
		Idle,
		Walking,
		Attacking
};

class Animator
{
	
	private:
		sf::Texture tIdle;
		sf::Texture tWalking;
		sf::Texture tAttacking;

	public:
		Animator() {  };
		Animator CreateAnimator(const std::string &IdleSpriteSheet,
				const std::string &WalkingSpriteSheet,
				const std::string &AttackingSpriteShee);

		void Animate();
		sf::Texture* GetTextureAddy(const AnimationStates &aStates);
		
		AnimationStates aStates;
		sf::Texture activeTexture;

		~Animator();
};

