#include <iostream>
using namespace std;

// nama repositeroti : paradigmaoop2_0023
// minimal commit 15

class seseorang {
public:
    virtual void pesan() = 0;
    // virtual void pesan(){
    //       cout<<"pesan dari seseorang"<<endl;
    //}

    
};

class joko :public seseorang {
public:
    void pesan() {
        cout << "pesan dari joko" << endl;
    }
};

class lia :public seseorang {
public:
   void pesan() {
      cout << "pesan dari lia" << endl;
   }
};

int main() {
    seseorang* obyek;
    joko a;
    lia b;

    obyek = &a;
    obyek->pesan();
    obyek =&b;
    obyek->pesan();
    // a.seseorang::pesan();

    return 0;
}
