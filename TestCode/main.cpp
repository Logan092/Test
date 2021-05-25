#include<DxLib.h>
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	ChangeWindowMode(true);
	SetWindowText(L"2016185_’·‘º—Í‹M–ç");
	DxLib_Init();
	SetDrawScreen(DX_SCREEN_BACK);
	while (ProcessMessage()!=1)
	{
		ClearDrawScreen();
		UINT32 color = 0xffffff;
		if (CheckHitKey(KEY_INPUT_SPACE))
		{
			color = 0xff0000;
		}
		DrawBox(30, 30, 60, 60, color, true);
		ScreenFlip();
	}
	DxLib_End();
	return 0;
}