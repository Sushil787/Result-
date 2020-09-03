#include<iostream>

int pass_fail(int maths,int physic,int dl,int c, int iit);
int main(){
    int maths,physic,dl,c,iit;
    int x;
    std::cout<<"Enter the score you got in the belo subjectes"<<std::endl;
    std::cout<<"maths:";
    std::cin>>maths;
    std::cout<<"\nphysics:";
    std::cin>>physic;
    std::cout<<"\ndl:";
    std::cin>>dl;
    std::cout<<"\nc:";
    std::cin>>c;
    std::cout<<"\niit:";
    std::cin>>iit;
    x = pass_fail(maths,physic,dl,c,iit);
    if (x==1)
    std::cout<<"pass";
    else
    std::cout<<"fail";

    
}

int pass_fail(int maths, int physic,int dl, int c, int iit){
    if (maths>=40 && physic >=40 && dl >=40 && iit>=40)
    {
        return 1;
    }
    else{
        return 0;
    }
}
    
