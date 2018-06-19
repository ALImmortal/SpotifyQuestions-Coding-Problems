/*************************************************************************************************************
Question 1 -- sortByStrings(s,t): Sort the letters in the string s by the order they occur in the string t. 
You can assume t will not have repetitive characters. For s = "weather" and t = "therapyw", the output should 
be sortByString(s, t) = "theeraw". For s = "good" and t = "odg", the output should be sortByString(s, t) = "oodg".
**************************************************************************************************************/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string s,t;
  int i, k=0;
  int ss,ts; //Meaning "s size and t size"

  //Get the strings
  cout<<"Enter string s: ";
  cin>>s;

  cout<<"Enter string t: ";
  cin>>t;
  cout<<endl;

  //Print out the strings, making sure strings were saved correctly
  cout<<"String s = "<<s<<endl;
  ss=s.size();
  char arrayS[ss];
  for(i=0;i<ss;i++){
    arrayS[i]=s[i];
  }

  cout<<"String t = "<<t<<endl;
  ts=t.size();
  char arrayT[ts];
  for(i=0;i<ss;i++){
    arrayT[i]=t[i];
  }

  cout<<endl;

  //Reorder string t
  

  //Return the new string t
  cout<<"New String t = ";
  for(i=0;i<ts;i++){
    cout<<arrayT[i];
  }
}
