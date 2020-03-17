#include <stdio.h>
#include <unknwn.h>

void main(int argc, char *argv[])
{
    GUID guid;
    wchar_t wzGuid[39] = { 0 };
    int count = (1 < argc) ? atoi(argv[1]) : 1;

    for (int i = 0; i < count; ++i) 
    {
        if (SUCCEEDED(CoCreateGuid(&guid)) && StringFromGUID2(&guid, wzGuid, sizeof(wzGuid) / sizeof(wzGuid[0])))
        {
            _putws(wzGuid);
        }
    }
}
