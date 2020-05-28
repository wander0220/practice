#pragma once

#include <vector>
#include <d3dx9core.h>

using namespace std;

class TextureElement 
{
public:
	int id;
	LPDIRECT3DTEXTURE9    Texture;
	ID3DXSprite* Sprite;

};

class TextureManager
{
public:
	vector<TextureElement*> elements;

	void LoadTexture(const TCHAR* name, int id);
	TextureElement* GetTexture(const int id);
	//void UnloadTextuer(int id);
};