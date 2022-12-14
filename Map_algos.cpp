#include<iostream>
#include<map>
using namespace std;
int main()
{map<int,string> m;
string str;
int price;
string car;
       for (int i = 0; i < 5; i++)
       {cin>>str;
           m[i] = str;
        
       }
       cout<<"Enter price and name of car\n";
       cin>>price>>car;
       m.insert({price,car});
for (auto i:m)
       {cout<<i.first<<endl;
           cout<<i.second<<endl;
                                                      
       }



  return 0;
}