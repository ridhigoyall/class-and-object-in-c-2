//nesting of binary no.
#include<iostream>
#include<string>
using namespace std;
class binary{
private:
    string s;
    void chk_box(void);


public:
    void read(void);
    // void chk_box(void);
    void once(void);
    void display(void);
};
void binary::read(void){
   
    cout<<"Enter a binary no."<<endl;
    cin>>s;
}
void binary :: chk_box(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"This is not a binary no."<<endl;
            exit(0);
        }
       
    }
    
}
void binary :: once(void){
    chk_box();
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
}

void binary :: display(void){
    cout<<"Displaying the no."<<endl;
    for (int i = 0; i < s.length(); i++)
     {
      cout<<s.at(i);
     }
     cout<<endl;
}



int main(){
    binary b;
    b.read();
    b.once();
    b.display();
    return 0;
}