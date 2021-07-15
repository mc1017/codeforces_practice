#include <iostream>
#include <iostream>
#include <cmath>
#include <functional>
#include <fstream>
using namespace std;
    

    
void solve() {
    string s, s1 ="EZPC";
    std::cin>>s;
    int epos, zpos, ppos, cpos;
	for (int i = 0; i < 26; i++) {
	    if (s[i] == 'e') {epos = i;}
	    if (s[i] == 'z') {zpos = i;}
	    if (s[i] == 'p') {ppos = i;}
	    if (s[i] == 'c') {cpos = i;}
	}
	if (cpos < epos || ppos < zpos || cpos < zpos || cpos < ppos) {
	    cout << "NO" << endl;
	}
	else {
	    cout << "YES" << endl;
	}

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t=1;
    std::cin>>t;
    for (int j=0; j<t;j++) {
        //write("Case #", i+1, ": ");
        solve();
    }
}
