#include<iostream>
#include<vector>
using namespace std;
int main()
{
      vector<int> v;
      v.push_back(2);   v.push_back(4);     v.push_back(5);      v.push_back(6);      v.push_back(8);   v.push_back(10);
 
 cout<<lower_bound(v.begin(),v.end(),6)-v.begin();

v.erase(v.begin(),v.end()-1);
cout<<endl<<(v[0])<<endl;
cout<<(v.back())<<endl;
cout<<*(v.begin());

  return 0;
}