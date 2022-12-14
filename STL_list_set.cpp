#include<iostream>
#include<list>
#include<set>
using namespace std;
int main()
{
       list<int> l;
        l.push_back(3);        l.push_back(2);             l.push_back(1);
       l.push_front(4);       l.push_front(5);             l.push_front(6);
int n = l.size();
       for(int i=0;i<n;i++)
{cout<<l.front()<<endl;   l.pop_front(); }

cout<<endl<<endl;
set<int> s,itr=0;
s.insert(2);     s.insert(2);    s.insert(2);    s.insert(6);   s.insert(8);  
auto i= s.begin();
s.erase(i);
for(int i:s)
cout<<i<<endl;
i++;
s.erase(i);
s.erase(itr);
for(int i:s)
cout<<i<<endl;

  return 0;
}