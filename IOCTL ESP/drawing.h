#pragma once
#include <d3d9.h>
#include <dwmapi.h>

#pragma comment(lib, "d3d9.lib")
#pragma comment(lib, "Dwmapi.lib")

namespace Drawing
{	
	IDirect3DDevice9* pDevice;

	void Rectangle(int x, int y, int w, int h, D3DCOLOR color)
	{
		D3DRECT rect = { x,y, x + w, y + h };
		pDevice->Clear(1, &rect, D3DCLEAR_TARGET, color, 0.0f, 0);
	}
}
