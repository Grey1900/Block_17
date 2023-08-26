#include <iostream>
#include <cstring>

bool checkStrings(const char* mainStr, const char* subStr)
{
    int mainLen = strlen(mainStr);
    int subLen = strlen(subStr);

    for (int i = 0; i <= mainLen - subLen; ++i)
    {
        if (strncmp(mainStr + i, subStr, subLen) == 0)
            return true;
    }

    return false;
}

int main()
{
    const char* a = "Hello world";
    const char* b = "wor";
    const char* c = "blablabla";


    std::cout <<    (checkStrings(a, b) ? 
                    "The first string includes the second string" :
                    "The first string doesn't includes the second string"
                    );
    
    std::cout << std::endl;

    std::cout <<    (checkStrings(a, c) ? 
                    "The first string includes the third string" :
                    "The first string doesn't includes the third string"
                    );

    return 0;
}
