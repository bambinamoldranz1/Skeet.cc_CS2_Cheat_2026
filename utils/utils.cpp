#include <windows.h>
#include <tlhelp32.h>
#include "modules.hpp"

namespace Modules {
    bool Initialize() {
        // Simulated process check
        HWND hwnd = FindWindowA(NULL, "Counter-Strike 2");
        if (hwnd == NULL) {
            hwnd = FindWindowA(NULL, "VALORANT  ");
        }
        
        return (hwnd != NULL);
    }

    void Cleanup() {
        // Standard cleanup logic
    }
}