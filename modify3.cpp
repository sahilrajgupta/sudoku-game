#include<iostream>
#include<bits/stdc++.h>

using namespace std;
void printGrid(vector<vector<int>>b)
{
for (int row = 0; row < 9; row++){
    for (int col = 0; col < 9; col++){
        if(col == 3 || col == 6)
            cout << " | ";
        cout << b[row][col]<<" ";
    }
    if(row == 2 || row == 5){
             cout << endl;
          for(int i = 0; i<9; i++)
                cout << "---";
          }
          cout << endl;
       }
}

class Grid{
    public:
    int lvl=0;
    vector<vector<int>> grid;
       
    void Griding(vector<int> k)
       {
          for(int i=0;i<9;i++)
          {
              for(int j=0;j<9;j++)
              {
                grid[i].push_back(k[9*i+j]);
              }
          }
        }
    void Gridgenerate(int a)
    {
        lvl= a;

        if(lvl==1)
        {
        int g[100]={
        3,0,6,5,0,8,4,0,0,5,2,0,0,0,0,0,0,0,0,8,7,0,0,0,0,3,1,0,0,3,0,1,0,0,8,0,9,0,0,8,6,3,0,0,5,0,5,0,0,9,0,6,0,0,1,3,0,0,0,0,2,5,0,0,0,0,0,0,0,0,7,4,0,0,5,2,0,6,3,0,0};
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                grid[i].push_back(g[9*i+j]);
            }
        }
        }
        else if(lvl==2)
        {
        int g[100]={
        0,1,0,0,2,0,3,0,0,0,0,2,0,0,3,0,4,0,0,8,0,0,0,0,0,0,6,0,0,4,7,0,0,0,3,0,0,0,0,6,0,0,0,0,8,0,7,0,0,9,8,0,0,0,3,0,0,0,0,4,0,9,0,0,0,0,8,0,0,1,0,4,0,0,6,0,0,0,0,0,0};  
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                grid[i].push_back(g[9*i+j]);
         }
        }
        }
        else if(lvl==3)
        {
            int g[100]={
        0,1,0,0,2,0,3,0,0,0,0,2,0,0,3,0,4,0,0,5,0,0,0,0,0,0,6,0,0,4,2,0,0,0,5,0,0,0,0,1,0,0,0,0,7,0,2,0,0,8,7,0,0,0,3,0,0,0,0,4,0,8,0,0,0,0,6,0,0,1,0,5,0,0,6,0,0,0,0,0,0};
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                grid[i].push_back(g[9*i+j]);
            }
        }
        }

        else{
            cout<<"Please Enter a Valid Level";
        }

       
    }
};


class User{
    public:
    string name;
    string displayMessage;
    int id;

    User(string name)
    {
        this->name= name;
        this->id= INT_MIN;
        cout<<"Welcome: "<<name<<endl<<"Id: "<<id;
    }

    User(string n,int d){
       this->name= n;
       this->id= d;
       cout<<"Welcome: "<<n<<endl<<"Id: "<<id;
    }
    
};

int main(){
    
    string n;
    int i;
    Grid h;
    vector<int> res;
    cout<< "Welcome To Sudoko Mania"<<endl;
    cout<<"Please Enter Your Name: ";
    getline(cin,n);
    cout<<"Please Enter your ID: ";
    cin>>i;
    if(i<0){
      User U(n);
      cout<<"Cannot participate"; 
    }
    else{
      User U(n,i);  
    }

    cout<<endl<<"Please Enter any of the following Option : \n 1. Solver \n 2. Checker \n 3. Exit"<<endl;
    
    int opt=0;
    cin>>opt;

    if(opt==1)
    {
        cout<<"Do you want to use your own grid?(y/n)"<<endl;
        char stat;
        cin>>stat;
        
        if(stat=='y')
        {
            cout<<"Please enter your grid:";
            for(int i=0;i<81;i++)
            { int num;
                cin>>num;
                res.push_back(num);
            }
            h.Griding(res);
        }
        else{
            cout<<"Displaying a Sample Sudoko, Pick a number between [1-3]"<<endl;
            int a;
            cin>>a;
            h.Gridgenerate(a);
            printGrid(h.grid);
        }
        
    }
       return 0;
}
