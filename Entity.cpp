#include "Entity.h"



Entity::Entity()
{
}


sf::VertexArray Entity::SetUpVertexArray(const float(&verticies)[16])
{
	sf::VertexArray triangleStrip(sf::TriangleStrip, 4);
	for (int i = 0; i < 4; ++i)
	{
		triangleStrip[i].position = sf::Vector2f(verticies[(i * 4)], verticies[(i * 4) + 1]);
		triangleStrip[i].texCoords = sf::Vector2f(verticies[(i * 4) + 2], verticies[(i * 4) + 3]);
	}

	return triangleStrip;
}

sf::VertexArray* Entity::GetVArrayAddy()
{
	return &this->vArray;
}

sf::RenderStates* Entity::GetRStateAddy()
{
	this->rStates.texture = this->anim.GetTextureAddy(this->anim.aStates);
	return &rStates;
}

Entity::~Entity()
{
}
