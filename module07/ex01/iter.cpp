#include <cstddef>
#include <iostream>

template <typename T>
void iter(T arr[], size_t length, void (*f)(T const&))
{
    for (size_t idx = 0; idx < length; idx += 1) {
        f(arr[idx]);
    }
}

void fuck_cpp_03(int const& x)
{
    std::cout << x << std::endl;
}

template <typename T>
void instantiate_me(T const& x)
{
    std::cout << x << " ";
}

void fuck_cpp_98_too(int* const(&x))
{
    iter(x, 3, instantiate_me);
    std::cout << std::endl;
}

int other()
{
    {
        // test with an array of primitives
        int* x = new int[6];

        // initialize
        for (size_t idx = 0; idx < 6; idx += 1) {
            x[idx] = idx;
        }

        // test with regular function
        iter(x, 6, fuck_cpp_03);

        // test with inferred/deduced instantiated function template
        iter(x, 6, instantiate_me);
        std::cout << std::endl;

        // test with explicitly instantiated function template
        iter(x, 6, instantiate_me<int>);
        std::cout << std::endl;

        delete[] x;
    }
    {
        // test with an array of classes
        std::string* x = new std::string[3];

        // initialize
        x[0] = "hello";
        x[1] = "world";
        x[2] = "skrrt";

        // test with inferred/deduced instantiated function template
        iter(x, 3, instantiate_me);
        std::cout << std::endl;

        // test with explicitly instantiated function template
        iter(x, 3, instantiate_me<std::string>);
        std::cout << std::endl;

        // cleanup
        delete[] x;
    }
    {
        // test with a multidimensional array
        int** x = new int*[3];

        // initialize rows
        for (size_t idx = 0; idx < 3; idx += 1) {
            x[idx] = new int[3];
        }

        // initialize values
        for (int row = 0; row < 3; row += 1) {
            for (int col = 0; col < 3; col += 1) {
                x[row][col] = row + col;
            }
        }

        // test with regular function
        iter(x, 3, fuck_cpp_98_too);

        // cleanup
        for (size_t idx = 0; idx < 3; idx += 1) {
            delete[] x[idx];
        }
        delete[] x;
    }
    return 0;
}

int main()
{
    int x = other();
    system("leaks ex01");
    return x;
}
