#include<iostream>
#include<vector>

using namespace std;

void print(vector<int> v){
    cout<<"Printing vector "<<endl;
    int size=v.size();
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" ";
    }cout<<endl;
}

int main(){
     //vector initalization
     vector<int>arr; //default with no data, 0 size
     vector<int>arr2(5,-1); //init with n size with specific data
     arr2.push_back(50);
     print(arr2);

     vector<int>arr3={1,2,3,4,5};
     //arr3.pop_back();
    //  pritn(arr3);

     vector<int>arr4{1,2,3,4,5};
     //print(arr4);

     //how to copy vector
     vector<int> arr5={1,2,3,4,5};
     vector<int>arr6(arr5);
     print(arr6);



    //in vector , we dont tell the size of vector
    //just keep inserting , it will manage the allocations
    vector<int>v; //array hi hai but dynamic

    //insert
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
      print(v);

      //pop ->delete ->END
      //1-> 2-> 3
      v.pop_back();
      print(v);

      v.pop_back();
      print(v);

      //I want to clear the vector
      v.clear();
      v.push_back(50);
     print(v); 
}