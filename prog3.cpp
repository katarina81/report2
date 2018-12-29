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

public:
  addressbook();
  void listFriends();
  void addFriend(string name, string address);
  int numberOfFriends;
  person find(string query);
};

// constructor
addressbook::addressbook(){
  numberOfFriends = 0;
}

void addressbook::addFriend(string n, string a){
  friends[numberOfFriends].name = n;
  friends[numberOfFriends].address = a;
  numberOfFriends++;
}

void addressbook::listFriends(){
  for(int i = 0; i < numberOfFriends; i++){
    cout << friends[i].name << ":";
    cout << friends[i].address << "\n";
  }
}

person addressbook::find(string query){
  for(int i = 0; i < numberOfFriends; i++){
    if(query == friends[i].name){
      return friends[i];
    }/*else{
      person no_one;
      no_one.name = "";
      return no_one;
    }*/
  }
}

int main(){
  addressbook abook;
  string name;
  string address;
  string query;
  person found;

  while(1){
    cout << "住所録に登録する名前を入力してください(終了するには quit と入力してください):";
    cin >> name;
    if(name == "quit"){break;}
    cout << "住所録に登録するアドレスを入力してください:";
    cin >> address;
    // cout << "name.length() = " << name.length() << "\n";
    abook.addFriend(name, address);
  }

  cout << "検索する氏名を入力してください:";
  cin >> query;
  found = abook.find(query);
  if(found.name != ""){
    cout << found.name << ":" << found.address;
  }else{
    cout << "見つかりませんでした。";
  }

}
