#include <iostream>

using namespace std;

int main() {
    long long x, Kap, Rekar, old_x, x_temp, n, i, del1;

    int br=0, N, i1;

    cin >> N;
    
    for (i1=1; i1<=N; i1++)
    {
        cin >> x;

        old_x=x;
        x_temp = x;

        n=0;
        
        while (x_temp)
        {
              n++;
              x_temp /=10;
         }

        x=x*x;

        del1=1;
        for(i=1;i<=n; i++) del1 *=10;

        Kap = x / del1;
        Rekar = x % del1;
        
        if (Kap + Rekar == old_x) br++;
    }
    
    cout << br <<endl;

    return 0;
}
