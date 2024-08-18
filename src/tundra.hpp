#ifndef TUNDRA_HPP
#define TUNDRA_HPP

namespace tundra {

struct TundraConfig
{
};

class Tundra
{
public:
    Tundra();
    int Init(int agrc, char** argv);

private:
    TundraConfig ParseArgs(int argc, char **argv);
    int InitFromRepl();
    int InitFromFile();
};
} // namespace tundra

#endif // TUNDRA_HPP
