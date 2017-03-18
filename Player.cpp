#include "Player.h"



Player::Player()
{
	if (!this->texture.loadFromFile("Assets/Images/Player/player_idle.png"));
	/*
	//player's texture is 256x512
	//player is loaded in as a triangle strip
	*/
	const float verticies[]
	{
		//vertex coords		//texCoords
		//x		//y			//x		//y
		0.0f,	0.0f,		0.0f,	0.0f,	//0
		0.0f,	512.0f,		0.0f,	512.0f,	//1
		256.0f,	0.0f,		256.0f,	0.0f,	//2
		256.0f,	512.0f,		256.0f,	512.0f	//3
	};	

	vArray = Entity::SetUpVertexArray(verticies);	
}

Player::~Player()
{
}

