#include <iostream>

using namespace std;

int main()
{
    int m,n1,n2;
    char c;
    cin >> m;
    cin >> n1 >> c >> n2;

    if ((c == '+' && n1 + n2 <= m) || (c == '*' && n1 * n2 <= m))
    {
        /* code */
        cout << "OK" << endl;
    }else
    {
        cout << "OVERFLOW" << endl;
    }
    
    

    return 0;
}
