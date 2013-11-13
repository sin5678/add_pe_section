#include <windows.h>
#include "pelibX.h"

int wmain(int argc,wchar_t ** argv)
{
    CPELibrary pe;
    pe.OpenFile(argv[1]);
    pe.AddNewSection(".test",0x1000);
    pe.SaveFile(L"new.exe");
    return 0;
}