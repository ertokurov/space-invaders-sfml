#pragma once
#include <SFML/Graphics.hpp>
#include "GameObject.h"
#include <list>

class BulletMap :public sf::Drawable, public GameObject {

private:
	std::vector<GameObject*> m_list;
	static BulletMap* m_bullets;

	static bool is_over(GameObject* obj);

	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
public:
	BulletMap();
	static void add(GameObject& const g_object);
	static void update();
	
	friend class Game;
};