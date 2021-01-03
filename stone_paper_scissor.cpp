#include<iostream>
#include<time.h>
#include <cstdlib>

using namespace std;
    int s,p,c,i;

    char sps(char you,char comp)
    {
        if(you==comp)
        {
            return 0;
        }

        if(you =='s' && comp =='p'){
            return-1;}
            else if(you=='p' && comp=='s'){
                return 1;}
                else if(you=='p' && comp=='c'){
                        return-1;}
                    else if(you=='c' && comp=='p'){
                                return 1;}
                        else if(you=='c' && comp=='s'){
                                        return-1;}
                                else if(you=='s' && comp=='c'){
                                                return 1;}

    }
int main()
{         cout<<"*/*lets play stone paper scissor*/*"<<endl<<endl;

    for(i=0;i<5;i++) {
      char you,comp;
      int max=100;
    srand(time(0));
    int number = rand()%max;


 if(number<33)
 {
     comp='s';
 }
 else if(number>33&&number<66)
 {
     comp='p';
 }
 else{
    comp='c';
 }
    cout<<"select your option:"<<endl <<"s=stone ,p = paper ,c=scissor"<<endl;
    cin>>you;

    int result=sps(you,comp);
        if(result==0){
            cout<<"  draw   "<<endl;
        }
        else if (result==-1)
        {
            cout<<"**comp wins**"<<endl;
        }
        else if(result==1)
        {
            cout<<"***you win***"<<endl;
        }
            cout<<"you choose: "<<you<<" and comp : "<<comp <<endl;
    }
}
