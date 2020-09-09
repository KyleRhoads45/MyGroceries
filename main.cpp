#include<iostream>
#include<vector>
using namespace std;

int main()
{
  char input;
  vector <string> list;

  do
  {
    cout<<"\n==GROCERY LIST MANAGER==";
    cout<<"\nEnter your choice: ";
    cout<<"\n (A)dd an item";
    cout<<"\n (Q)uit";
    cout<<"\nYour choice (A/Q): ";
    cin>>input;

    if( input == 'a' || input == 'A' )
    {
        string item;
        cout<<"What item? ";
        cin.ignore();
        getline(cin,item);
        list.push_back(item);
    }
  }while( input != 'q' && input != 'Q' );

  int listSize = (int)list.size(); 
  if(listSize <= 0){
    cout << "There are no groceries in the list" << endl;
    return 0;
  }
  for(int i = 0; i < (int)list.size(); i++){
    cout << i + 1 << ": " << list[i] << endl;
  }

  return 0;
}
