//Brendon Brandolino, Masten Leonard, Michelle Gomez
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> list;


int main() {
  int count;
  int reset;
  count = 0;
  string item;
  char i;
   cout<<"==GROCERY LIST MANAGER=="<<endl;
  do {

      cout<<"Enter your choice: "<<endl;
      cout<<" (A)dd an item"<<endl;
      cout<<" (S)how grocery list"<<endl;
      cout<<" (Q)uit"<<endl;
      cout<<"Your choice (A/S/Q): "<<endl;
      cin>>i;





         if (i == 'a' || i == 'A') {
           cout<<"Name of the item you want to add"<<endl;
           cin>>item;
           list.push_back(item);
           count++;
           reset = count;
         }

        if (i == 's'||i =='S') {
          do {
            cout<<list[count-1]<<endl;
            count--;
          } while(count != 0);
          count = reset;
        }

}  while(i!='q'&&i!='Q');

  return 0;
}
