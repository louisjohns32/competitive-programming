#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    string remix; 
    cin >> remix;
    // replace wubs with nothing until first word
    int pointer = 0;
    bool repeatingWubs = true;
    string res = "";

    if(remix.size() == 1){
        remix.append(" ");
        cout << remix;
        return 0;
    }
    
    while(pointer < remix.size() - 2)
    {
        if(remix.substr(pointer, 3) == "WUB")
        {
            if(!repeatingWubs)
            {
                res.append(" ");
                repeatingWubs = true;
            }
            pointer += 3;
        }
        else
        {
            res.append(remix.substr(pointer, 1));
            pointer += 1;
            repeatingWubs = false;
        }
    }

    if(pointer < remix.size()){
        res.append(remix.substr(pointer, remix.size() - pointer));
    }
    if(res[res.size()-1] != ' '){
        res.append(" ");
    }

    cout << res;
    
    return 0;
}