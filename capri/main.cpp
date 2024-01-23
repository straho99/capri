#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long x, Kap, Rekar, old_x, x_temp, n, i, del1;

    int br=0, N, i1;

    cin >> N;
    
    for (i1=1; i1<=N; i1++)
    {
        cin >> x;
        
        n =  to_string(x).length();
        del1 = pow(10, n);
        old_x=x;

        x=x*x;

        Kap = x / del1;
        Rekar = x % del1;
        
        if (Kap + Rekar == old_x) br++;
    }
    
    cout << br <<endl;

    return 0;
}
