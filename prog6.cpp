/* prog6 */

#include <iostream>
using namespace std;

class person{
public:
  string email;
  void setName(string n){name = n;}
  string getName(){return name;}
protected:
  string name;
};

int main()
{
  person p;
  person friends[3];
  person address[3];
  string n;

  for(int i=0; i<3; i++){
    cout << i + 1 << "番目の名前は?";

    cout << i + 1 << "番目のメールアドレスは？";
    cin >> address[i].email;
  }
  cout << "\n 名前リスト:\n";
  for(int i=0; i<3; i++){
    cout << " " << friends[i].name << ":";
    cout << address[i].email << "\n";
  }

}
