#include <iostream>
#include <map>
using namespace std;

int main()
{
   /// ritu | mithu | dristy | jassy
   /*
    100.00 |  200.500 | 30.90 | 40.09
      ------------------------------
      */
      map<string, float> mp;
      mp["ritu"]=100.00;
      mp["mithu"]=200.500;
      mp["dristy"]=30.90;
      mp["jassy"]=40.90;

      cout<<mp.size()<<endl;
      mp.erase("mithu");
      cout<<mp.size()<<endl;

      map<string, float>::iterator it;
     it= mp.find("jassy");
          if(it==mp.end()){
            cout<<"dosent exist"<<endl;
          }
          else{
            cout<<it->first <<" "<<it->second;
          }
          cout<<endl;

          /// traversing the map

          cout<<"the whole map: "<<endl;
          map<string, float>::iterator it1;
          for(it1=mp.begin(); it1!=mp.end(); it1++){
            cout<<"key "<<it1->first<<" " << "value "<<it1->second<<endl;
          }
          cout<<endl;

           return 0;
      }




