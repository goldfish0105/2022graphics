///#include <mmsystem.h>///上週教
#include <windows.h>
int main()
{             ///先放不存在的檔   上週教SND_SYNC
    ///PlaySound("badbadbad.wav",NULL,SND_SYNC);
    PlaySound("07042111.wav",NULL,SND_SYNC);
}///Compile成功,       但是link失敗
/// .c .cpp=compile=> .o =link=> .exe
