#include <stdio.h>
#include <cstdlib>
#include <iostream>

using namespace std;

bool check(int v, int r, int i, int choice){
    switch(choice) {
        case 0:
        {
            int c1 = v/r;
            if (c1 == i)
            {
                return true;
            }
            else
            {
                return false;
            }
            break;
        }
        case 1:
        {
            int c2 = r*i;
            if (c2 == v)
            {
                return true;
            }
            else
            {
                return false;
            }
            break;
        }
        case 2:
        {
            int c3 = v/i;
            if (c3 == r)
            {
                return true;
            }
            else
            {
                return false;
            }
            break;
        }
    }
}

int main()
{
    string randch[3] = {"Given voltage and resistance find the current ", "given current and resistance find the voltage ", "given voltage and current find the resistance "};
    int score = 0;
    int v;
    int r;
    int i;

    srand(time(NULL));

    while(score < 100) {
        cout<<"score: "<<score<<endl;
        int choice = rand() % 3;
        v = rand() % 100;
        r = rand() % 100;
        i = rand() % 100;
        switch(choice) {
            case 0:
                cout<<randch[choice];
                cout<<"v: "<<v<<" "<<"r: "<<r<<endl;
                cout<<"input your result:"<<endl;
                cin>>i;
                if(check(v,r,i,choice) == true){score++;}else{}
                break;
            case 1:
                cout<<randch[choice];
                cout<<"i: "<<i<<" "<<"r: "<<r<<endl;
                cout<<"input your result:"<<endl;
                cin>>v;
                if(check(v,r,i,choice) == true){score++;}else{}
                break;
            case 2:
                cout<<randch[choice];
                cout<<"v: "<<v<<" "<<"i: "<<i<<endl;
                cout<<"input your result:"<<endl;
                cin>>r;
                if(check(v,r,i,choice) == true){score++;}else{}
                break;
        }
    }
}
