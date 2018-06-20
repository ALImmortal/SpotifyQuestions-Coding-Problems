#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

//To decode it, it would be best to have a recursive function
string decodeString(string a){
  string result="";
  int count[5]; //Need an array to keep record of counts
  int cNum=0; //Used in order to go to next arrray element
  string word [5]; //Need an array to keep record of strings
  int sNum=-1; //Used in order to go to next arrray element
  
  //For loop
  for(int i=0;i<a.size();i++){
    //We need to get the count in order to repeat the letters a certain amount of times
    if(a[i]>='0'||a[i]<='9'){
      count[cNum]=a[i]-'0';
      cNum++;
    }
    else if(a[i]=='['){
      sNum++; //It will start as word[0] since there is an increment everytime there is [] because we do expect a letter
      int start=i+1;
      int s=0;
      while(s<a.size()){
        if(a[i]!=']'){
          s++;
        }
        else{
          string newS=a.substr(start,s);
          decodeString(newS);
        }
      }
    }
    else if(isalpha(a[i])){
      word[sNum]+=a[i];
    }
  }
  
  //Create the result
  int rSt=0, rCt=0;
  for(int j=0;j<cNum;j++){
    for(int k=0;k<sNum;k++){
      result+=word[rSt];
      if(count[rCt]!=0){
        count[rCt]--;
      }
      rSt++;
    }
    rSt=0;
  }
  return result;
}

int main() {
  string s;

  cout<<"Enter string to decode: ";
  cin>>s;

  //This is just to make sure the command entered was correctly saved
  cout<<"String to decode: "<<s<<endl;

  //decode
  cout<<decodeString(s)<<endl;
}
