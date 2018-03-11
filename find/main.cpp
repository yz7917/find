#include <algorithm> // for std::find
#include <iterator> // for std::begin, std::end
using namespace std;
#include <iostream>
int main ()
{
    int a[] = {3, 6, 8, 33};
    int x[] = {3, 4};
    int* adj = new int[66];
    for(int i=0; i<2; i++){
        bool exists = find(begin(a), end(a), x[i]) != end(a);
        adj[i] = exists;
        std::cout << std::boolalpha << exists << '\n';
        cout <<adj[i]<<endl;
    }
    cout << endl;
    int k=0;
    for(int i=0; i<4; i++){
        if(adj[i]==1){
            int* t = new int[k];
            t[k] = a[i];
            cout << t[k]<<endl;
            k++;
        } ///aaaaaaa
        ////aasdfias;ldkjfajsd;lfkja;lsdkjf;lakjsdf;la
    }
    cout << k << endl;
}
