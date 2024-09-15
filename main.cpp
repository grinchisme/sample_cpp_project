#include <iostream>
#include <cstdlib>

#include "my_add.hpp"

using namespace std;

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        cerr << "Provide exactly 2 arguments\n";
        return 1;
    }
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    cout << my_add(a, b) << endl;
    return 0;
}