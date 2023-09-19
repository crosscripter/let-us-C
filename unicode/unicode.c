#include <stdio.h>
#include <wchar.h>
#include <locale.h>

#ifdef _WIN32
  #include <Windows.h>
#endif

int main() {
  setlocale(LC_ALL, ".UTF-8");

  #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
  #endif

  const char *message = "λ";
  printf("%s", message);
}