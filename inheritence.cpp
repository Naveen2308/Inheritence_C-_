#include<iostream>
using namespace std;
class Store{
    public:
    int id;
    string sname;

    Store(int id,string sname){
        this->id=id;
        this->sname=sname;
    }
    void printbase(){
        cout<<"base class data sname: "<<sname<<"store id"<<sname<<endl;
    }

};
class customar : public Store{
    public:
    string name;
    int cid;

    customar(string sname,int cid,string name,int id):Store(id,sname){
        this->cid=cid;
        this->name=name;
    }
    void printderived(){
        cout<<"parent class data sname: "<<sname<<" store id"<<id<<" customar name :"<<name<<" customer id:"<<cid<<endl;
    }


};
int main(){
    customar c1("MKV stores",48,"naveen",2);
    c1.printderived();
}