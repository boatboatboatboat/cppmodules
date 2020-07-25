//
// Created by boat on 5/15/20.
//

#include <cfloat>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <sstream>

using std::cout;
using std::endl;
using std::flush;
using std::string;

enum InputTypeTag {
    Invalid,
    Character,
    Integer,
    Float,
    Double
};

union InputTypeValue {
    char c;
    int i;
    float f;
    double d;
};

void draw_char(InputTypeTag itype, InputTypeValue ival)
{
    cout << "char: ";

    switch (itype) {
    case Character: {
        char c = ival.c;

        if (isprint(c)) {

            if (isdigit(c))
                c -= '0';

            cout << '\'' << c << '\'' << '\n';
        } else {
            cout << "Non displayable\n";
        }
    } break;
    case Integer: {
        if (ival.i < CHAR_MIN || ival.i > CHAR_MAX) {
            cout << "impossible\n";
            break;
        }

        char c = static_cast<char>(ival.i);

        if (isprint(c)) {
            cout << '\'' << c << '\'' << '\n';
        } else {
            cout << "Non displayable\n";
        }
    } break;
    case Float: {
        if (isnan(ival.f) || isinf(ival.f) || ival.f < CHAR_MIN || ival.f > CHAR_MAX) {
            cout << "impossible\n";
            break;
        }

        char c = static_cast<char>(ival.f);

        if (isprint(c)) {
            cout << '\'' << c << '\'' << '\n';
        } else {
            cout << "Non displayable\n";
        }
    } break;
    case Double: {
        if (isnan(ival.d) || isinf(ival.d) || ival.d < CHAR_MIN || ival.d > CHAR_MAX) {
            cout << "impossible\n";
            break;
        }

        char c = static_cast<char>(ival.d);

        if (isprint(c)) {
            cout << '\'' << c << '\'' << '\n';
        } else {
            cout << "Non displayable\n";
        }
    } break;
    default:
        cout << "unreachable" << endl;
        break;
    }
}

void draw_int(InputTypeTag itype, InputTypeValue ival)
{
    cout << "int: ";

    switch (itype) {
    case Character: {
        int i = static_cast<int>(ival.c);

        cout << i << '\n';
    } break;
    case Integer: {
        cout << ival.i << '\n';
    } break;
    case Float: {
        if (isnan(ival.f) || isinf(ival.f) || ival.f < (float)INT_MIN || ival.f > (float)INT_MAX) {
            cout << "impossible\n";
            break;
        }

        int i = static_cast<int>(ival.f);

        cout << i << '\n';
    } break;
    case Double: {
        if (isnan(ival.d) || isinf(ival.d) || ival.d < (double)INT_MIN || ival.d > (double)INT_MAX) {
            cout << "impossible\n";
            break;
        }

        int i = static_cast<int>(ival.d);

        cout << i << '\n';
    } break;
    default:
        cout << "unreachable" << endl;
        break;
    }
}

void draw_float(InputTypeTag itype, InputTypeValue ival)
{
    cout << "float: " << std::setprecision(1) << std::fixed;

    switch (itype) {
    case Character: {
        float f = static_cast<float>(ival.c);

        cout << f << "f\n";
    } break;
    case Integer: {
        float f = static_cast<float>(ival.i);

        cout << f << "f\n";
    } break;
    case Float: {
        cout << ival.f << "f\n";
    } break;
    case Double: {
        if (ival.d < (double)FLT_MIN || ival.d > (double)FLT_MAX) {
            cout << "impossible\n";
            break;
        }

        float f = static_cast<float>(ival.d);

        cout << f << "f\n";
    } break;
    default:
        cout << "unreachable" << endl;
        break;
    }
}

void draw_double(InputTypeTag itype, InputTypeValue ival)
{
    cout << "double: ";

    switch (itype) {
    case Character: {
        double f = static_cast<double>(ival.c);

        cout << f << '\n';
    } break;
    case Integer: {
        double f = static_cast<double>(ival.i);

        cout << f << '\n';
    } break;
    case Float: {
        double f = static_cast<double>(ival.f);

        cout << f << '\n';
    } break;
    case Double: {
        cout << ival.d << '\n';
    } break;
    default:
        cout << "unreachable" << endl;
        break;
    }
}

InputTypeTag validate(std::string const& input)
{
    const char* pt = input.c_str();
    const char* adj = pt;
    InputTypeTag x = Invalid;

    if (input.length() == 0) {
        return Invalid;
    }

    if (input.length() == 1) {
        return isdigit(input[0]) ? Integer : Character;
    }

    if (*pt == '-' || *pt == '+')
        pt += 1;

    if (strncmp(pt, "inf", 3) == 0 || strncmp(pt, "nan", 3) == 0) {
        if (strncmp(pt, "nan", 3) == 0 && pt != adj) {
            return Invalid;
        }
        if (strncmp(pt, "inf", 3) == 0 && pt == adj) {
            return Invalid;
        }
        pt += 3;
        x = Double;
        if (*pt == 'f') {
            pt += 1;
            x = Float;
        }
    } else {
        while (isdigit(*pt))
            pt += 1;
        x = Integer;
        if (*pt == '.') {
            pt += 1;
            x = Double;
        }
        while (isdigit(*pt))
            pt += 1;
        if (*pt == 'f' && x == Double) {
            pt += 1;
            x = Float;
        }
    }

    return *pt == '\0' ? x : Invalid;
}

int main(int argc, char** argv)
{
    // ensure there's always only 1 argument
    if (argc != 2) {
        cout << "no don't" << endl;
        return 1;
    }

    string input(argv[1]);
    InputTypeTag itype = validate(input);

    if (!itype) {
        cout << "bad argument" << endl;
        return 2;
    }

    InputTypeValue val;

    switch (itype) {
    case Character: {
        val.c = input[0];
    } break;
    case Integer: {
        std::stringstream x;
        x << input;

        long tmp;
        x >> tmp;
        if (tmp >= INT_MIN && tmp <= INT_MAX) {
            val.i = (int)tmp;
            break;
        } else {
            itype = Double;
        }
    }
    case Double: {
        std::stringstream x;
        x << (input);
        x >> val.d;
        if (input == "+inf")
            val.d = HUGE_VAL;
        else if (input == "-inf")
            val.d = -HUGE_VAL;
        else if (input == "nan")
            val.d = NAN;
    } break;
    case Float: {
        std::stringstream x;
        x << (input);
        x >> val.f;
        if (input == "+inff")
            val.f = HUGE_VAL;
        else if (input == "-inff")
            val.f = -HUGE_VAL;
        else if (input == "nanf")
            val.f = NAN;
    } break;
    default:
        break;
    }

    draw_char(itype, val);
    draw_int(itype, val);
    draw_float(itype, val);
    draw_double(itype, val);

    cout << flush;
    return 0;
}
