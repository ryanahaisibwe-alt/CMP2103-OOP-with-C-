
#include <iostream>
#include <vector>
#include <random>
using namespace std;

int main()
{
    int number_of_rows = 0;
    int number_of_columns = 0;

    cout << "Enter number of rows: " << "\n";
    cin >> number_of_rows;

    cout << "Enter number of columns: " << "\n";
    cin >> number_of_columns;

   
    vector<vector<int>> v1(number_of_rows, vector<int>(number_of_columns, 0));

    
   
    for (int i = 0; i < number_of_rows; ++i)
    {
        for (int j = 0; j < number_of_columns; ++j)
        {

            // Reassign values in a matrix
            v1[i][j] = dist(gen);
            std::cout << v1[i][j] << ' ';
        }

        std::cout << '\n';
    }

    return 0;
}