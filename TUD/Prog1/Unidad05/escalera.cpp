#include <iostream>
#include <cstdio>
#include <string>
#include <cctype>
#include <algorithm> 

using namespace std;
int main(int argc, char const *argv[])
{
    int escalones = 0;
    cout << "Ingrese la cantidad de escalones" << endl;
    cin >> escalones;

    for (int i = 0; i < escalones; i++)
    {
        cout << "#";
        for (int j =0; j < i; j++)
        {
            cout << "#";
        }
        cout << endl;
            
    }
    
    return 0;
}
