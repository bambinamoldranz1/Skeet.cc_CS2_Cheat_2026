#include <iostream>
#include <windows.h>
#include "modules.hpp"

int main() {
    SetConsoleTitleA("Performance Utility Loader");
    std::cout << "[-] Initializing core modules..." << std::endl;

    if (Modules::Initialize()) {
        std::cout << "[+] System ready. Waiting for application..." << std::endl;
    } else {
        std::cerr << "[!] Error: Module mismatch." << std::endl;
        return 1;
    }

    return 0;
}