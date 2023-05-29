#pragma once

#include "SDK.hpp"

using namespace SDK;

class Menu
{
public:
	static inline const wchar_t* name;
	static inline bool enabled;
	static inline SDK::FKey key;

	static inline POINT cursor;
	static inline POINT cursor_corrected;
	static inline bool should_drag = false;
	static inline bool should_move = false;
	static inline int x = 140, y = 140;
	static inline int w = 600, h = 350;
	static inline int current_tab = 0;
	static inline auto RobotoFont = UObject::FindObject<UFont>("Font Roboto.Roboto");

	inline void K2_DrawRect(UCanvas* canvas, const FVector2D& initial_pos, float w, float h, const FLinearColor& color, float thickness = 1.f)
	{
		canvas->K2_DrawLine(FVector2D{ initial_pos.X, initial_pos.Y }, FVector2D{ initial_pos.X + w, initial_pos.Y }, thickness, color);
		canvas->K2_DrawLine(FVector2D{ initial_pos.X, initial_pos.Y }, FVector2D{ initial_pos.X, initial_pos.Y + h }, thickness, color);
		canvas->K2_DrawLine(FVector2D{ initial_pos.X + w, initial_pos.Y }, FVector2D{ initial_pos.X + w, initial_pos.Y + h }, thickness, color);
		canvas->K2_DrawLine(FVector2D{ initial_pos.X, initial_pos.Y + h }, FVector2D{ initial_pos.X + w, initial_pos.Y + h }, thickness, color);
	}
	inline void K2_DrawFilledRect(UCanvas* canvas, const FVector2D& initial_pos, float w, float h, const FLinearColor& color) {
		for (float i = 0.f; i < h; i += 1.f)
			canvas->K2_DrawLine(FVector2D{ initial_pos.X, initial_pos.Y + i }, FVector2D{ initial_pos.X + w, initial_pos.Y + i }, 1.f, color);
	}
	inline void groupbox(UCanvas* canvas, int x, int y, int w, int h, const FString string, bool show_label) {
		GetCursorPos(&cursor);
		canvas->K2_DrawBox(FVector2D(cursor.x, cursor.y), FVector2D(3.0f, 3.0f), 5.0f, FLinearColor(0.0f, 0.0f, 0.0f, 1.0f));

		//K2_DrawFilledRect(canvas, FVector2D(x, y), w, h, FLinearColor(25.0f, 25.0f, 25.0f, 1.0f));
		//K2_DrawRect(canvas, FVector2D(x, y), w, h, FLinearColor(45.0f, 45.0f, 45.0f, 1.0f));

		if (show_label)
			canvas->K2_DrawText(RobotoFont, FString(string), FVector2D(x + 2, y - 12), FVector2D(1, 1), FLinearColor(255.0f, 255.0f, 255.0f, 1.0f), 1.0f,
				FLinearColor(0, 0, 0, 0), FVector2D(), false, false, false, FLinearColor(255.0f, 255.0f, 255.0f, 1.0f));
	}
	inline void tab(UCanvas* canvas, int x, int y, int w, int h, const FString string, int& tab, int count, bool show_outline) {
		GetCursorPos(&cursor);
		canvas->K2_DrawBox(FVector2D(cursor.x, cursor.y), FVector2D(3.0f, 3.0f), 5.0f, FLinearColor(0.0f, 0.0f, 0.0f, 1.0f));

		if ((cursor.x > x) && (cursor.x < x + w) && (cursor.y > y) && (cursor.y < y + h) && (GetAsyncKeyState(VK_LBUTTON) & 1))
			tab = count;
		if (show_outline)
			K2_DrawRect(canvas, FVector2D(x + 22, y), w, h, tab == count ? FLinearColor(235.0f, 216.0f, 52.0f, 1.0f) : FLinearColor(255.0f, 255.0f, 255.0f, 1.0f));

		canvas->K2_DrawText(RobotoFont, FString(string), FVector2D(x + 50, y + h / 2 - 8), FVector2D(1, 1), show_outline ? FLinearColor(255.0f, 255.0f, 255.0f, 1.0f) : tab == count ? FLinearColor(140.0f, 1.0f, 250.0f, 1.0f) : FLinearColor(255.0f, 255.0f, 255.0f, 1.0f), 1.0f,
			FLinearColor(0, 0, 0, 0), FVector2D(), false, false, false, FLinearColor(255.0f, 255.0f, 255.0f, 1.0f));
	}
	inline bool checkbox(UCanvas* canvas, int x, int y, int position, const FString string, bool& value) {
		GetCursorPos(&cursor);
		canvas->K2_DrawBox(FVector2D(cursor.x, cursor.y), FVector2D(3.0f, 3.0f), 5.0f, FLinearColor(0.0f, 0.0f, 0.0f, 1.0f));

		int w = 10, h = 10;

		if ((cursor.x > position) && (cursor.x < position + w) && (cursor.y > y) && (cursor.y < y + h) && (GetAsyncKeyState(VK_LBUTTON) & 1))
			value = !value;
		else if ((cursor.x > position) && (cursor.x < position + w) && (cursor.y > y) && (cursor.y < y + h) && (GetAsyncKeyState(VK_LBUTTON) & 1))
			value = !value;

		K2_DrawFilledRect(canvas, FVector2D(position, y), w, h, value ? FLinearColor(120.0f, 248.0f, 255.0f, 1.0f) : FLinearColor(36.0f, 36.0f, 36.0f, 1.0f));
		canvas->K2_DrawText(RobotoFont, FString(string), FVector2D(x + 2, y - 1), FVector2D(1, 1), FLinearColor(255.0f, 255.0f, 255.0f, 1.0f), 1.0f,
			FLinearColor(0, 0, 0, 0), FVector2D(), false, false, false, FLinearColor(255.0f, 255.0f, 255.0f, 1.0f));

		return value;
	}
	inline void slider(UCanvas* canvas, int x, int y, int position, const FString string, float& value, float min_value, float max_value) {
		GetCursorPos(&cursor);
		canvas->K2_DrawBox(FVector2D(cursor.x, cursor.y), FVector2D(3.0f, 3.0f), 5.0f, FLinearColor(0.0f, 0.0f, 0.0f, 1.0f));

		//int ix = x + 140;
		int ix = x + 240;
		int yi = y + 4;

		if ((cursor.x > ix) && (cursor.x < ix + position) && (cursor.y > yi) && (cursor.y < yi + 6) && (GetAsyncKeyState(VK_LBUTTON)))
			value = (cursor.x - ix) / (float(position) / float(max_value));

		K2_DrawFilledRect(canvas, FVector2D(ix, yi), position, 6, FLinearColor(36.0f, 36.0f, 36.0f, 1.0f));
		K2_DrawFilledRect(canvas, FVector2D(ix, yi), value * (float(position) / float(max_value)), 6, FLinearColor(120.0f, 248.0f, 255.0f, 1.0f));

		canvas->K2_DrawText(RobotoFont, FString(string), FVector2D(x + 2, y - 1), FVector2D(1, 1), FLinearColor(120.0f, 248.0f, 255.0f, 1.0f), 1.0f,
			FLinearColor(0, 0, 0, 0), FVector2D(), false, false, false, FLinearColor(255.0f, 255.0f, 255.0f, 1.0f));
	}
	inline void movement(int& x, int& y, int w, int h) {
		GetCursorPos(&cursor);

		if ((GetAsyncKeyState(VK_LBUTTON)) < 0 && (cursor.x > x && cursor.x < x + w && cursor.y > y && cursor.y < y + h))
		{
			should_drag = true;

			if (!should_move)
			{
				cursor_corrected.x = cursor.x - x;
				cursor_corrected.y = cursor.y - y;
				should_move = true;
			}
		}
		else
		{
			should_drag = false;
			should_move = false;
		}

		if (should_drag)
		{
			x = cursor.x - cursor_corrected.x;
			y = cursor.y - cursor_corrected.y;
		}
	}
	inline void render_menu(UCanvas* canvas);
};

inline Menu* tMenu = new Menu;

inline auto begin_frame = [&](UCanvas* canvas, int x, int y, int w, int h, FLinearColor bg, FLinearColor header_text, FLinearColor header_line, FString name)
{
	GetCursorPos(&Menu::cursor);
	canvas->K2_DrawBox(FVector2D(Menu::cursor.x, Menu::cursor.y), FVector2D(3.0f, 3.0f), 5.0f, FLinearColor(0.0f, 0.0f, 0.0f, 1.0f));

	tMenu->K2_DrawFilledRect(canvas, FVector2D(x, y), w, h, FLinearColor(.0f, .0f, .0f, 1.0f));
	tMenu->K2_DrawFilledRect(canvas, FVector2D(x, y), w, 20, FLinearColor(.0f, .0f, .0f, 1.0f));
	tMenu->K2_DrawFilledRect(canvas, FVector2D(x, y + 20), w, 1, FLinearColor(.0f, .0f, .0f, 1.0f));
	canvas->K2_DrawText(Menu::RobotoFont, FString(name), FVector2D(x + 5, y + 4), FVector2D(1, 1), FLinearColor(255.0f, 255.0f, 255.0f, 1.0f), 1.0f,
		FLinearColor(0, 0, 0, 0), FVector2D(), false, false, false, FLinearColor(255.0f, 255.0f, 255.0f, 1.0f));
};

inline void Menu::render_menu(UCanvas* canvas)
{
	if (!enabled)
		return;

	canvas->K2_DrawBox(FVector2D(cursor.x, cursor.y), FVector2D(3.0f, 3.0f), 5.0f, FLinearColor(255.0f, 255.0f, 255.0f, 1.0f));

	begin_frame(canvas, x, y, w + 14, h, FLinearColor(36.0f, 36.0f, 36.0f, 1.0f), FLinearColor(25.0f, 25.0f, 25.0f, 1.0f), FLinearColor(36.0f, 36.0f, 36.0f, 1.0f),
		FString((L"VE-INTERNAL UC: QU33NY")));

	groupbox(canvas, x + 5, y + 35, 100, 260, FString((L"tabs")), false);
	{
		tab(canvas, x - -87, y + (260 / 2) - 100, 112, 27, FString((L"  Aimbot")), current_tab, 0, true);
		tab(canvas, x - -217, y + (260 / 2) - 100, 112, 27, FString((L"  Visuals")), current_tab, 1, true);
		tab(canvas, x - -348, y + (260 / 2) - 100, 112, 27, FString((L"  Misc")), current_tab, 2, true);
	}

	switch (current_tab)
	{
	case 0:
		groupbox(canvas, x + 110, y + 35, 285, 260, FString((L"Aimbot")), false);
		{
			
		}
		break;
	case 1:
		groupbox(canvas, x + 110, y + 35, 285, 260, FString((L"Visuals")), false);
		{

			
		}
		break;
	case 2:
		groupbox(canvas, x + 20, y + 35, 285, 260, FString((L"Misc")), false);
		{
			
		}
		break;
	}

	movement(x, y, w, 30);

}