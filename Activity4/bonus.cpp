#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the size of the Pyramid(from 1-10 only): ";
    for (;;) {
        int size;
        cin >> size;
        if (size <= 10) {
            char alphabet = 'A';
            for (int i = 1; i <= size; ++i)
            {
                for (int j = 1; j <= i; ++j)
                {
                    cout << alphabet << " ";
                }
                ++alphabet;
                cout << endl;
            }
            return 0;
        }
        else if (size > 10) {
            cout << "Try Again, enter the size of the Pyramid(from 1-10 only): ";
        }
    }
}