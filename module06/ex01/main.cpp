//
// Created by boat on 6/4/20.
//

#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>

const char* ALNUM = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890";

struct Data {
    std::string s1;
    int n;
    std::string s2;
};

void* serialize(void)
{
    unsigned char* seq = new unsigned char[20];

    for (int i = 0; i < 8; i += 1) {
        char t = ALNUM[rand() % 62];
        seq[i] = *(reinterpret_cast<unsigned char*>(&t));
        t = ALNUM[rand() % 62];
        seq[i + 12] = *(reinterpret_cast<unsigned char*>(&t));
    }

    int n = rand();
    memcpy(seq + 8, &n, 4);
    return static_cast<void*>(seq);
}

Data* deserialize(void* raw)
{
    Data* de = new Data;

    de->s1 = std::string(reinterpret_cast<char*>(raw), 8);
    de->n = *(static_cast<int*>(raw) + 2);
    de->s2 = std::string(reinterpret_cast<char*>(raw) + 12, 8);
    return de;
}

int outer()
{
    try {
        srand(42069);
        void* thing = serialize();
        Data* data = deserialize(thing);
        delete static_cast<unsigned char*>(thing);

        std::cout << data->s1 << '\n';
        std::cout << data->n << '\n';
        std::cout << data->s2 << std::endl;
        delete data;
    } catch (std::exception& e) {
        std::cout << "nice error: " << e.what() << std::endl;
    }
    return 1;
}

int main()
{
    int x = outer();
    system("leaks ex01");
    return x;
}
