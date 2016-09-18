#pragma once

#include "Utils.hpp"

namespace ltbl
{

//////////////////////////////////////////////////////////////////////////
/// \brief Sprite with normal
//////////////////////////////////////////////////////////////////////////
class NormalSprite : public priv::BaseLight, public sf::Sprite
{
	public:
		NormalSprite();

		void setTexture(sf::Texture& texture, bool resetRect = false);

		void setNormalsTexture(sf::Texture& normalsTexture);

		const sf::Texture* getNormalsTexture() const;

		void render(sf::RenderTarget& target, sf::RenderStates states = sf::RenderStates());

		void renderNormals(sf::RenderTarget& target, sf::RenderStates states = sf::RenderStates());

	private:
		sf::Texture* mTexture;
		sf::Texture* mNormalsTexture;
		bool mNeedRenderNormals;
};

} // namespace ltbl
