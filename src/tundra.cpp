#include "tundra.hpp"

namespace tundra {
Tundra::Tundra() {}

int Tundra::Init(int argc, char **argv)
{
    TundraConfig config = ParseArgs(argc, argv);

    return 0;
}

TundraConfig Tundra::ParseArgs(int argc, char **argv)
{
    TundraConfig config;

    if (argc == 1)
        return config;

    for (int i = 0; i < argc; ++i) {
    }
}

int Tundra::InitFromFile() {}

int Tundra::InitFromRepl() {}

} // namespace tundra
