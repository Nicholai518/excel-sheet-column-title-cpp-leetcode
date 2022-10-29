#include <iostream>
#include <string>
using namespace std;

class Solution 
{
public:
    string convertToTitle(int columnNumber) 
    {
        // column title to be returned
        string result = "";

        // while number is not 0
        while (columnNumber)
        {
            // find character for right most digit
            char c = 'A' + (columnNumber - 1) % 26;

            // add / append character to result
            result = c + result;

            // move leftward
            columnNumber = (columnNumber - 1) / 26;
        }
        return result;
    }
};
int main()
{
    Solution solution;
    int example_one = 27;
    cout << "Example One : " + solution.convertToTitle(example_one) << endl;
	return 0;
}
