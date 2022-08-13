// https://crackmes.one/crackme/60338ea033c5d42c3d016b91

#include <Windows.h>
#include <iostream>

int  keygen(LPCWSTR lpString)
{
    int userinput; // ecx
    int v2; // edx
    int v3; // eax
    int return_val; // esi

    userinput = lstrlenW(lpString);
    v2 = 37;
    v3 = 1;
    do
    {
        return_val = v2 ^ (v2 * (*(DWORD*)lpString - v2) - v3 + 70595907 + v2 * (*(DWORD*)lpString - v2));
        v3 = 4;
        v2 = 101;
        --userinput;
    } while (userinput);
    return return_val;
}

int main() {

    std::string username;

    std::cout << "------------------------\n"
        "      K E Y G E N       \n"
        "------------------------\n"
        "Username : ";
    std::cin >> username;
    std::cout << "------------------------\nSerial : " << keygen((LPCWSTR)&username[0]) << "\n------------------------\n" << std::endl;

    Sleep(10000);
    return 0;
