#pragma once
#include <vector>
#include <string>

namespace Modules {
    struct Component {
        std::string name;
        bool isActive;
    };

    bool Initialize();
    void ProcessFrame();
    void Cleanup();
}