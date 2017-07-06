#define _WIN32_WINNT	0x0600
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <stdlib.h>  /* declaration of __argc and __argv */

#pragma comment(linker,"\"/manifestdependency:type='win32' name='Microsoft.Windows.Common-Controls' \
	version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")

extern int main(int, char **);

int PASCAL WinMain(HINSTANCE hinst, HINSTANCE hprev, LPSTR cmdline, int ncmdshow)
{
  extern int __argc;  /* this seems to work for all the compilers we tested, except Watcom compilers */
  extern char **__argv;

  return main(__argc, __argv);
}
