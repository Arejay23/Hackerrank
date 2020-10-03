#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int number,queries,i,arrlen,j,k,a,b;
    cin>>number>>queries;
    vector <int> vect[number];
    for(i=0;i<number;i++){
        cin>>arrlen;
        for(j=0;j<arrlen;j++){
            cin>>k;
            vect[i].push_back(k);
        }
    }
    for(i=0;i<queries;i++){
        cin>>a>>b;
        cout<<vect[a][b]<<"\n";
    }
  


    return 0;
}
