#include<iostream>
#include<string>
using namespace std;

int main(){
string st("Nikhil");
st.pop_back();
cout<<st<<endl;
st.pop_back();
cout<<st<<endl;
st.push_back('i');
st.push_back('l');
cout<<st<<endl;
return 0;
}