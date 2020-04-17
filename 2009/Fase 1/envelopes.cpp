#include <iostream>

using namespace std;

int main()
{

    int t,c ;
    int *vetor = NULL;

    cin >> t;
    
    vetor = new int[t];
    
    for (int i = 0; i < t; i++)
    {
        /* code */
        cin >> vetor[i];
    }
    

    for (int i = 0; i < t; i++)
    {
        /* code */
        if (vetor[i] < c)
        {
            c = vetor[i];
        }
        
    }
    
    cout << c << endl;
        
    delete [] vetor;
    return 0;
}
