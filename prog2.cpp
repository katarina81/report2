/* prog2 */

#include <iostream>
using namespace std;

class person{
public:
  string address;
  string name;
};

class addressbook{
  person friends[100];
  person address[100];
  int numberOfFriends;

public:
  addressbook();
  void listFriends();
  void addFriend(string name, string address);
};

// constructor
addressbook::addressbook(){
  numberOfFriends = 0;
}

void addressbook::addFriend(string n, string a){
  friends[numberOfFriends].name = n;
  address[numberOfFriends].address = a;
  numberOfFriends++;
}

void addressbook::listFriends(){
  for(int i = 0; i < numberOfFriends; i++){
    cout << friends[i].name << ":";
    cout << address[i].address << "\n";
  }
}

int main()
{
  addressbook abook;
  string name;
  string address;

  while(1){
    cout << "住所録に登録する名前を入力してください(終了するには quit と入力してください):";
    cin >> name;
    if(name == "quit"){break;}
    cout << "住所録に登録するアドレスを入力してください:";
    cin >> address;
    // cout << "name.length() = " << name.length() << "\n";
    abook.addFriend(name, address);
  }

  cout << "\n名前リスト:\n";
  abook.listFriends();
}
