#include <windows.h>
#include <stdlib.h>

int main() {
  int proc = (int)GetCurrentProcessId();
  char procStr[10];

  _itoa_s(proc, procStr, 10, 10);

  int msgId = MessageBox(NULL, procStr, "Hello, World", MB_OK);
  if (msgId == IDOK) {
    MessageBox(NULL, "Congratz, you clicked 'OK'", "Congratz", MB_OK);
  }
  return 0;
}
