#include<bits/stdc++.h>

using namespace std;

void convertToDec(float num,int base)
{
    string res="";
    int beforeDot=(int)num;
    float aftrerDot=num-beforeDot;
    while(beforeDot!=0)
    {
        res=to_string(beforeDot%base)+res;
        beforeDot/=base;
    }
    res+=".";
    int prec=5;
    while(prec--)
    {
        if(aftrerDot==0)
        {
            break;
        }
        while(aftrerDot<1)
        {
            aftrerDot*=base;
            if(aftrerDot<1)
            {
                res+="0";
            }
        }
        res+=to_string((int)aftrerDot);
        aftrerDot-=(int)aftrerDot;
    }

    cout<<res<<endl;

    }

int main()
{
    float num;
    int base;
    cout<<"Enter the decimal number to be converted: ";
    cin>>num;
    cout<<"\n enter the base:";
    cin>>base;
    if (num==0)
    {
        cout<<"\nNum cant be zero;\n";

    }
    else
    {
        convertToDec(num,base);
    }

}
