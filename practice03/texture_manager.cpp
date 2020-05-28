#include "global.h"
#include "texture_manager.h"


void TextureManager:: LoadTexture(const TCHAR* name, int id)
{
	TextureElement* newElement = new TextureElement();

	newElement->id = id;

	//sprite create
	D3DXCreateSprite(g_pd3dDevice, &newElement->Sprite);
	//texture load
	D3DXCreateTextureFromFile(g_pd3dDevice,name, &newElement->Texture);

	elements.push_back(newElement);
}
TextureElement* TextureManager::GetTexture(const int id) {
	//O(n)

	for (int i = 0; i < elements.size(); i++) {
		if (elements[i]->id == id) {
			return elements[i];
		}
	}

	return nullptr;
}
