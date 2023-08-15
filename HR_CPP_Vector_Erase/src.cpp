#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    vector<int>eraseVector;
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        int vector_int;
        cin >> vector_int ;
        eraseVector.push_back(vector_int);
    }
    
    int query1;
    cin >> query1;
    int range1,range2;
    cin >> range1 >> range2;
    
    eraseVector.erase(eraseVector.begin()+(query1-1));
    eraseVector.erase(eraseVector.begin()+(range1-1),eraseVector.begin()+(range2-1));
    
    cout << eraseVector.size() << "\n";
    
    for(int i=0;i<eraseVector.size();i++){
       cout << eraseVector[i] << " ";
       }
    
    return 0;
}
