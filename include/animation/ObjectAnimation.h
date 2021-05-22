#pragma once

#include "Animation.h"

class ObjectAnimation : public Animation
{
public:
	ObjectAnimation();
	explicit ObjectAnimation(
		const float &animation_length,
		const float &animation_speed,
		const sf::Transform &image1start,
		const sf::Transform &image2start,
		const sf::Transform &image1end,
		const sf::Transform &image2end);

	virtual ~ObjectAnimation() = default;

	inline virtual const sf::Transform &getImage1Frame(const float &current_time) const = 0;
	inline virtual const sf::Transform &getImage2Frame(const float &current_time) const = 0;

protected:
	sf::Transform m_image1Start;//starting position of image1
	sf::Transform m_image2Start;//starting position of image2
	sf::Transform m_image1End;	//finishing position of image1
	sf::Transform m_image2End;	//finishing position of image2

private:
	
};