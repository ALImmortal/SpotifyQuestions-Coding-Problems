/**********************************************************************************************
Question 3 -- changePossibilities(amount,amount): Your quirky boss collects rare, old coins. 
They found out you're a programmer and asked you to solve something they've been wondering for 
a long time. Write a function that, given an amount of money and an array of coin denominations, 
computes the number of ways to make the amount of money with coins of the available denominations.

Example: for amount=4 (4¢) and denominations=[1,2,3] (1¢, 2¢ and 3¢), your program would output 
4—the number of ways to make 4¢ with those denominations:
1¢, 1¢, 1¢, 1¢
1¢, 1¢, 2¢
1¢, 3¢
2¢, 2¢
**********************************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int changePossibilities(int amount, int *d){
  int count=0;
  int tempAmount=amount;//If not used, amount in the loop will be changed and cannot be reused
  int dSize=sizeof(d) / sizeof(*d);
  
  for(int x=0;x<dSize;x++){
    while(tempAmount!=0){
      tempAmount-=d[x];
      if(tempAmount>=d[x+1]){
        tempAmount-=d[x+1];
      }
      else if(tempAmount<d[x+1]){
        tempAmount-=d[x];
      }
    }
    count++;
    tempAmount=amount; //Reset the value
  }

  return count;
}

int main() {
  int value;
  int denomCount;
  int posC=0;
  cout<<"Enter the amount: ";
  cin>>value;

  cout<<"Enter the number of denominators to be used: ";
  cin>>denomCount;
  int denom[denomCount];
  for(int i=0;i<denomCount;i++){
    cout<<"Enter denominator: ";
    cin>>denom[i];
  }

  cout<<"Count = "<<changePossibilities(value, denom)<<endl;
}
