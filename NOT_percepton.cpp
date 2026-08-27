#include <iostream>
#include <vector>
using namespace std;
int activation(double z){
    if(z>=0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    vector<int> input={0,1};
    vector<int> target={1,0};

    double w=0;
    double b=0;
    double n=0.1;

    for(int epoch=0;epoch<=5;epoch++){
        for(int i=0;i<=1;i++){
            double z=(w*input[i])+b;
            int y=activation(z);
            int error=target[i]-y;

            cout<<"epoch:"<<epoch<<"\n";
            cout<<"error:"<<error<<"\n";
            cout<<"\n"; 
            
            w=w+(n*error*input[i]); 
            b=b+(n*error);
        }
    }


}