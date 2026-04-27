#include <iostream>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

class order{
  private:
  string name;
  string details;
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
}

int main(){

  return 0;
}
