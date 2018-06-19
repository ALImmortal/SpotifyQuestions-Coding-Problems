/*************************************************************************************************************
Question 1 -- sortByStrings(s,t): Sort the letters in the string s by the order they occur in the string t. 
You can assume t will not have repetitive characters. For s = "weather" and t = "therapyw", the output should 
be sortByString(s, t) = "theeraw". For s = "good" and t = "odg", the output should be sortByString(s, t) = "oodg".
**************************************************************************************************************/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Function: get array for all the letters that exist in the string s but no repeats
//Ex: s = "hello" -> getLetters(s) = {'h','e','l','o'}
char *getLetters(string a){
  int as=a.size();
  char al;
  int count=0;

  for(int i=0;i<as;i++){
    for(int j=0;j<as;j++){
      if(a[i]==al[j]){
          count++;
      }
    }
    if(count==0){
      al[i]==a[i];
    }
  }
  
 return al; 
}

int main() {
  string s,t;
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
  cout<<"String t = "<<t<<endl;
  ts=t.size();
  int array[ts];

  for(int i=0;i<ts;i++){
      cout<<i<<endl;
  }
  
  //cout<<getLetters(s);
}
