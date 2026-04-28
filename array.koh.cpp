#include <iostream>
#include <stack>
#include <queue>
using namespace std;

struct Order {
  string customerName;
  string orderName;
  int priority;

  public:
  order (string n, string d, int p){
    name = n;
    details = d;
    priority = p;
  }
  # hello po!
  string getName(){return name};
  string getDetails(){return details};
  int getPriority(){return priority};
  
  void display(){
    cout <<name << "-" << details << endl;
  };
  #di ko na negegets ang github AHAAHA, parang nadami ang mga branch
}

int main(){

  return 0;
}
