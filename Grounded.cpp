#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main(int argc, char* argv[])
{
    if (argc != 3)
    {
        std::cout << "Usage:\nGrounded <name> <action>\n";
    }
    else
    {
        srand(time(0));
        std::string res = argv[1];
        res += "!  How dare you ";
        res += argv[2];
        res += "!\nThat's it, you're\n";
        for(int i = 0; i < (1 + (rand() % 10)); i++)
        {
            res += "grounded, ";
        }
        res += "grounded for \n";
        for (int i = 0; i < (1 + (rand() % 100)); i++)
        {
            res += std::to_string((1 + (rand())));
        }
        res += "\nyears!  Go to your room right now!\n";
        std::cout << res << "\n";
    }
}