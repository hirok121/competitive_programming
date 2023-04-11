#include <iostream>

using namespace std;

int main()
{

    int input, inputcopy, counter = 0;
    cin >> input;
    inputcopy = input;
    int lastdigit;

    while (inputcopy > 0)
    {
        lastdigit = inputcopy % 10;
        if (lastdigit != 0 && input % lastdigit == 0)
        {
            counter++;
        }
        inputcopy = inputcopy / 10;
    }

    cout << "number divisor is " << counter;

    return 0;
}