#include <iostream>
#include <string.h>

void Log(const char* message)
{
    std::cout << message << std::endl;
}

void Log(const char* message, int value)
{
    std::cout << message << value << std::endl;
}

void PrintKeyValuePair(const char* key, const char* value)
{
    std::cout << key << "  : " << value << std::endl;
}

void PrintKeyValuePair(const char* key, float value)
{
    std::cout << key << "  : " << value << std::endl;
}

void PrintKeyValuePair(const char* key, int value)
{
    std::cout << key << "  : " << value << std::endl;
}

void NewLine()
{
    std::cout << std::endl;
}
