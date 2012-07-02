#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>
#include <cstring>
#include <string>
#include <list>

using namespace std;

typedef long long int LL;
typedef pair<int,int> pii;

#define F first
#define S second
#define pb push_back
#define mp make_pair

struct  a {
	char x[20];
};

int main (void)
{
 	a a1, s2;
	strcpy(a1.x, "go");
	s2 = a1;
	cout << s2.x << endl;
	return 0;
}
