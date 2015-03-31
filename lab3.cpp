#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <fstream>
using namespace std;

main(){
	int n;
	int t=0;
	ifstream in("file.in",ios::in);
	in >> n;
	vector<int> cows(n);
	for(int i=0;i<n;i++) in >> cows[i];
	sort(cows.begin(),cows.end());
	for(int i=n-1;i>n-6;i--) t+= cows[i];
	cout << t << endl;
}
