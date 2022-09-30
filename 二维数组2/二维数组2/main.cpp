//
//  main.cpp
//  二维数组2
//
//  Created by 顾淼 on 2022/9/30.
//

#include <iostream>
using namespace std;
#include <string>;
int main()
{
    int scores[3][3] = {
        {100,100,100},
        {90,50,90},
        {60,70,80}
    };
    string name[3]={"张三","李四","王五"};
    for (int i=0; i<3; i++) {
        int sum = 0;
        for (int  j=0; j<3; j++) {
            sum+=scores[i][j];
            
        }
        cout<<name[i]<<"个人总分为："<<sum<<endl;
    }

    
    
    
    return 0;
}
