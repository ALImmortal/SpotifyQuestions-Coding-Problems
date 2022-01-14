/*************************************************************************************************************
Question 1 -- sortByStrings(s,t): Sort the letters in the string s by the order they occur in the string t. 
You can assume t will not have repetitive characters. For s = "weather" and t = "therapyw", the output should 
be sortByString(s, t) = "theeraw". For s = "good" and t = "odg", the output should be sortByString(s, t) = "oodg".
**************************************************************************************************************/
#include <iostream>
#include <string>
#include <vector>

using namespace std;
string sortByString(string a, string b){
  string result="";
  int as=a.size();
  int bs=b.size();

  for(int i=0;i<as;i++){
    for(int j=0;j<bs;j++){
      if(a[i]==b[j]){
        result=result+b[j];
      }
    }
  }
  return result;
}

int main() {
  string s,t;

  //Get the strings
  cout<<"Enter string s: ";
  cin>>s;

  cout<<"Enter string t: ";
  cin>>t;
  cout<<endl;

  //Print out the strings, making sure strings were saved correctly
  cout<<"String s = "<<s<<endl;

  cout<<"String t = "<<t<<endl;

  cout<<endl;

  //Result string
  cout<<"New String = "<<sortByString(s,t)<<endl;
}
