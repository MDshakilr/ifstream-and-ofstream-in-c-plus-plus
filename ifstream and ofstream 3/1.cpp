#include<bits/stdc++.h>
using namespace std;
class student {
public:
    string name;
    int id;
    string phone;
    void print ()
    {
        cout<<name <<" "<<id<<" "<<phone<<endl;

    }
};
int main()
{
    ifstream input ("shakil.txt");
    ofstream output("output.txt");
    int n;
    input>>n;
    student s[n];
    for( int i =0;i<n;i++)
    {
        string temp;
        input >>temp;
        input >>temp;
        input>>s[i].name;
        input >>temp;
        input >>temp;
        input>>s[i].id;
        input >>temp;
        input >>temp;
        input>>s[i].phone;


    }
     for( int i =0;i<n;i++)
     {
         s[i].print();
     }
      for( int i =0;i<n;i++)
      {

          output<<s[i].name<<" ";
           output<<s[i].phone<<endl;
      }
}
