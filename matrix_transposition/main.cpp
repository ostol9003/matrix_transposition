//
//  main.cpp
//  matrix_transposition
//
//  Created by Marcin Ostolski on 13/02/2022.
//

#include <iostream>
using namespace std;

void welcome()
{
    cout<<"\t\tHellow!\nI will transpose your matrix!\n\n\n";
};
int main(int argc, const char * argv[]) {
    int n, m;
    
    welcome();
    
    cout<<"Enter quantity of lines: ";
    cin>>n;
    
    cout<<"\nEnter quantity of columns: ";
    cin>>m;
    
    int tab[n][m];
    
    cout<<"\nEnter your matrix: \n";
    
    for (int i=0;i<n;i++)
        for (int y=0;y<m;y++)
            cin>>tab[i][y];
    
    cout<<"\nYour Matrix:\n";
    
    for (int i=0;i<n;i++)
    {
        for (int y=0;y<m;y++)
            cout<<tab[i][y]<<"\t";
        cout<<"\n";
    }
    
    cout<<"\nTransposed matrix: \n";
    
    for (int i=0;i<m;i++)
    {
        for (int y=0;y<n;y++)
            cout<<tab[y][i]<<"\t";
        cout<<"\n";
    }
    
    
    return 0;
}
