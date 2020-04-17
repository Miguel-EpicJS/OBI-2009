#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int c,p,f;

    cin >> c >> p >> f;

    if ((p / f) % c == 0)
    {
        /* code */
        cout << "S" << endl;
    }else
    {
        cout << "N" << endl;
    }
    
    

    return 0;
}
