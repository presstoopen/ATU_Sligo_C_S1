#include <stdio.h>
#include <wchar.h>

int main() {
    wchar_t euroSign = L'\u20AC';
    wprintf(L"Euro sign: %lc\n", euroSign);

    return 0;
}
