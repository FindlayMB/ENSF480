#include <stdio.h>
#include <string.h>
#include <crtdbg.h>
#ifndef _CRTBLD
#define _CRTBLD
#include <dbgint.h>
#endif

int main(void)
{
    _CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_FILE);
    _CrtSetReportFile(_CRT_WARN, _CRTDBG_FILE_STDOUT);

    _CrtMemState memstate1, memstate2, memstate3; // holds the memory states
    _CrtMemCheckpoint(&memstate1);                // take the memory snapshot

    int *x = new int(1177); // allocated
    char *f = new char[50]; // allocated
    strcpy(f, "Hi Naren");
    delete x;                      // freed,
    _CrtMemCheckpoint(&memstate2); // take the memory snapshot
    // compare two snapshots, we didnt free the char *f block. It should catch
    // by the debug heap

    if (_CrtMemDifference(&memstate3, &memstate1, &memstate2))
    {
        printf("\nOOps! Memory leak detected\n");
        _CrtDumpMemoryLeaks();
        // alternatively you can use _CrtMemDumpAllObjectsSince for
        // dumping from specific check point
    }
    else
        printf("\nNo memory leaks");
    return 0;
}